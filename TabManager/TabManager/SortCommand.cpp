#include "SortCommand.hpp"

SortCommand::SortCommand()
	: Command()
{
}

void SortCommand::execute()
{
	std::string criteria = "";
	std::cout << "Criteria for sorting: <URL> or <TIME>";
	std::cin >> criteria;
	if (criteria == "URL")
	{
		tabManagerServer.sortUrl();
	}
	else if (criteria == "TIME")
	{
		tabManagerServer.sortTime();
	}
	else
	{
		std::cout << "Insert exception here" << std::endl;
	}
}