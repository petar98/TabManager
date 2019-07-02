#include "InsertCommand.hpp"

InsertCommand::InsertCommand()
	: Command()
{
}

CommandStatus InsertCommand::execute()
{
	std::string url = "";
	std::cin >> url;
	tabManagerServer.insert(url);
	return STATUS_EXECUTED;
}