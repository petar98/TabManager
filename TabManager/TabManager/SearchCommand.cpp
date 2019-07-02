#include "SearchCommand.hpp"


SearchCommand::SearchCommand()
	: Command()
{
}

CommandStatus SearchCommand::execute()
{
	std::string searchingWord = "";
	std::cout << "Word to be found: ";
	std::cin >> searchingWord;
	try
	{
		tabManagerServer.search(searchingWord);
		return STATUS_EXECUTED;
	}
	catch (const std::out_of_range& except)
	{
		std::cout << except.what();
		return STATUS_FAILED;
	}
}