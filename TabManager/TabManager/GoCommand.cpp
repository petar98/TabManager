#include "GoCommand.hpp"


GoCommand::GoCommand()
	: Command()
{
}

CommandStatus GoCommand::execute()
{
	std::string url = "";
	std::cin >> url;
	tabManagerServer.go(url);
	return STATUS_EXECUTED;
}