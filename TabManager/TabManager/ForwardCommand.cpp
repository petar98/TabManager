#include "ForwardCommand.hpp"


ForwardCommand::ForwardCommand()
	: Command()
{
}

CommandStatus ForwardCommand::execute()
{
	tabManagerServer.forward();
	return STATUS_EXECUTED;
}