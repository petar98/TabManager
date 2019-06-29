#include "BackCommand.hpp"
#include "TabManagerServer.hpp"

TabManagerServer tabManagerServer;

BackCommand::BackCommand()
	: Command()
{
}

void BackCommand::execute()
{
	tabManagerServer.back();
}