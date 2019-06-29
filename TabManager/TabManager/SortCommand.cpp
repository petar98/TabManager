#include "SortCommand.hpp"

#include <cctype>

SortCommand::SortCommand()
	: Command()
{
}

std::string SortCommand::convertToUppercase(std::string input)
{
	std::transform(input.begin(), input.end(), input.begin(),
		[](unsigned char c) { return std::toupper(c); });
	return input;
}

void SortCommand::execute()
{
	std::string criteria = "";
	std::cout << "Criteria for sorting <URL> or <TIME>: ";
	std::cin >> criteria;
	criteria = convertToUppercase(criteria);

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
		throw std::runtime_error("Invalid input \n");
	}
}