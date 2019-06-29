#include "SearchCommand.hpp"


SearchCommand::SearchCommand()
	: Command()
{
}

void SearchCommand::execute()
{
	std::string searchingWord = "";
	std::cout << "Word to be found: ";
	std::cin >> searchingWord;
	try
	{
		tabManagerServer.search(searchingWord);
	}
	catch (const std::out_of_range& except)
	{
		std::cout << except.what();
	}
}