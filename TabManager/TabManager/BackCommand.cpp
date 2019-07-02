#include "BackCommand.hpp"
#include "TabManagerServer.hpp"

TabManagerServer tabManagerServer;

BackCommand::BackCommand()
	: Command()
{
}

CommandStatus BackCommand::execute()
{
	tabManagerServer.back();
	return STATUS_EXECUTED;
}