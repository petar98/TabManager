#include "Tab.hpp"

#pragma warning(disable: 4996)

Tab::Tab()
	:url("about:blank"), fetchTime(std::time(nullptr)), content("")
{
}

Tab::Tab(std::string url)
	: url(url), fetchTime(std::time(nullptr)), content("")
{
}

std::string Tab::getUrl() const
{
	return url;
}

std::time_t Tab::getTime() const
{
	return fetchTime;
}

void Tab::load(std::string newUrl)
{
	url = newUrl;
	fetchTime = std::time(nullptr);
	std::string path = "content/" + url + ".txt";
	std::ifstream fileContent;
	fileContent.open(path);
	if (fileContent.is_open())
	{
		content = std::string((std::istreambuf_iterator<char>(fileContent)),
			(std::istreambuf_iterator<char>()));
		fileContent.close();
	}
	else
	{
		std::cout << "File not found" << std::endl;
		content = "";
	}
	generateWordsFromContent();
}

void Tab::printUrlTime() const
{
	std::cout << url << " ";
	std::cout << std::asctime(std::localtime(&fetchTime));
}

void Tab::printContent() const
{
	std::cout << content << std::endl;
}

void Tab::generateWordsFromContent()
{
	std::string word = "";
	std::stringstream reader(content);
	while (reader >> word)
	{
		fetchContent.insert(word);
	}
}

std::set<std::string> Tab::seperateWords() const
{
	return fetchContent;
}