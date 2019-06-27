#include "Tab.hpp"
#include "TabManagerServer.hpp"

TabManagerServer::TabManagerServer()
{
	Tab empty;
	tabs.push_front(empty);
	current = tabs.begin();
	openedTabs[current->getUrl()] = current;

	std::cout << openedTabs.size() << std::endl;
}

void TabManagerServer::print() const
{
	for (auto tab : tabs)
	{
		if (current == openedTabs.find(tab.getUrl())->second)
		{
			std::cout << "> ";
		}
		tab.printUrlTime();
	}
}

void TabManagerServer::go(const std::string url)
{
	std::cout << openedTabs.size() << std::endl;
	auto required = openedTabs.find(url);
	if (required == openedTabs.end())
	{
		std::cout << "Not found" << std::endl;
		openedTabs.erase(current->getUrl());
		std::cout << "Erased " << current->getUrl() << std::endl;
		current->load(url);
		std::cout << "Loaded" << std::endl;
		openedTabs[url] = current;
		std::cout << "new current" << std::endl;
	}
	else
	{
		std::cout << "found" << std::endl;
		current = required->second;
	}
	std::cout << "finnished" << std::endl;
}

void TabManagerServer::insert(const std::string url)
{
	auto participant = openedTabs.find(url);
	if (participant != openedTabs.end())
	{
		current = participant->second;
	}
	else
	{
		auto next = std::next(current);
		if (next == tabs.end())
		{
			tabs.push_back(url);
			current = tabs.end();
			current--;
		}
		else
		{
			tabs.insert(next, url);
			current = next;

		}
		openedTabs[url] = current;
	}
	current->load(url);
}

void TabManagerServer::back()
{
	if (current != tabs.begin())
	{
		auto previous = std::prev(current);
		current = previous;
	}
}

void TabManagerServer::forward()
{
	auto next = std::next(current);
	if (next != tabs.end())
	{
		current = next;
	}
}

void TabManagerServer::remove()
{
	auto next = std::next(current);
	openedTabs.erase(current->getUrl());
	if (next != tabs.end())
	{
		tabs.erase(current);
		current = next;
	}
	else if (current != tabs.begin())
	{
		auto previous = std::prev(current);
		tabs.erase(current);
		current = previous;
	}
	else
	{
		tabs.erase(current);
		Tab empty;
		tabs.push_front(empty);
		current = tabs.begin();
		openedTabs[current->getUrl()] = current;
	}
}

void TabManagerServer::sortUrl()
{
	//std::stable_sort(tabs.begin(), tabs.end(), CompareTabsUrl());
}

void TabManagerServer::sortTime()
{
	//std::stable_sort(tabs.begin(), tabs.end(), CompareTabsTime());
}

void TabManagerServer::search(const std::string word)
{
	std::set<std::string> contentFetcher;
	std::vector<std::list<Tab>::iterator> tabsContainingWord;
	for (auto tab : tabs)
	{
		contentFetcher = tab.seperateWords();
		if (contentFetcher.find(word) != contentFetcher.end())
		{
			tabsContainingWord.push_back(openedTabs[tab.getUrl()]);
		}
	}
	if (tabsContainingWord.size() != 0)
	{
		for (size_t index = 0; index < tabsContainingWord.size(); ++index)
		{
			std::cout << index + 1 << " ";
			std::cout << tabsContainingWord[index]->getUrl() << std::endl;
		}
		std::cout << "Choose id for active tab: ";
		size_t userIndex = 0;
		std::cin >> userIndex;
		if (userIndex > 0 && userIndex < tabsContainingWord.size())
		{
			current = tabsContainingWord[userIndex - 1];
		}
	}
}