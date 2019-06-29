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
	tabManagerServer.search(searchingWord);
}