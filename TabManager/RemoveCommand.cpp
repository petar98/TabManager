#include "RemoveCommand.hpp"

RemoveCommand::RemoveCommand(TabManagerServer& tabManagerServer)
	: tabManagerServer(tabManagerServer)
{
}

void RemoveCommand::execute()
{
	tabManagerServer.remove();
}