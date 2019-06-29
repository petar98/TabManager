#ifndef TAB_MANAGER_SERVER_HPP_
#define TAB_MANAGER_SERVER_HPP_

#include "Tab.hpp"
#include <list>
#include <unordered_map>
#include <algorithm>
#include <vector>
#include <utility>

class TabManagerServer
{
public:
	TabManagerServer();
	void print() const;
	void go(const std::string);
	void insert(const std::string);
	void back();
	void forward();
	void remove();
	void sortUrl();
	void sortTime();
	void search(const std::string);
private:
	std::list<Tab> tabs;
	std::unordered_map<std::string, std::list<Tab>::iterator> openedTabs;
	std::list<Tab>::iterator current;

	class CompareTabsUrl
	{
	public:
		bool operator() (const Tab& lhs, const Tab& rhs)
		{
			if (lhs.getUrl() == rhs.getUrl())
			{
				return lhs.getTime() < rhs.getTime();
			}
			return lhs.getUrl() < rhs.getUrl();
		}
	};

	class CompareTabsTime
	{
	public:
		bool operator() (const Tab& lhs, const Tab& rhs)
		{
			if (lhs.getTime() == rhs.getTime())
			{
				return lhs.getUrl() < rhs.getUrl();
			}
			return lhs.getTime() < rhs.getTime();
		}
	};
};

#endif // !TAB_MANAGER_SERVER_HPP