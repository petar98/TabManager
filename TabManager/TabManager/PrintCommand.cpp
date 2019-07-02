#include "PrintCommand.hpp"

PrintCommand::PrintCommand()
	: Command()
{
}

CommandStatus PrintCommand::execute()
{
	tabManagerServer.print();
	return STATUS_EXECUTED;
}