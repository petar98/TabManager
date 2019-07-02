#include "RemoveCommand.hpp"


RemoveCommand::RemoveCommand()
	: Command()
{
}

CommandStatus RemoveCommand::execute()
{
	tabManagerServer.remove();
	return STATUS_EXECUTED;
}