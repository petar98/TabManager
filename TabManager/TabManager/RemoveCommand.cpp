#include "RemoveCommand.hpp"


RemoveCommand::RemoveCommand()
	: Command()
{
}

void RemoveCommand::execute()
{
	tabManagerServer.remove();
}