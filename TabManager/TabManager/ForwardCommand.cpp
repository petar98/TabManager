#include "ForwardCommand.hpp"


ForwardCommand::ForwardCommand()
	: Command()
{
}

void ForwardCommand::execute()
{
	tabManagerServer.forward();
}