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

CommandStatus SortCommand::execute()
{
	std::string criteria = "";
	std::cout << "Criteria for sorting <URL> or <TIME>: ";
	std::cin >> criteria;
	criteria = convertToUppercase(criteria);

	if (criteria == "URL")
	{
		tabManagerServer.sortUrl();
		return STATUS_EXECUTED;
	}
	else if (criteria == "TIME")
	{
		tabManagerServer.sortTime();
		return STATUS_EXECUTED;
	}
	else
	{
		throw std::runtime_error("Invalid input \n");
	}
}