#include "ForwardCommand.hpp"

ForwardCommand::ForwardCommand(TabManagerServer& tabManagerServer)
	: tabManagerServer(tabManagerServer)
{
}

void ForwardCommand::execute()
{
	tabManagerServer.forward();
	
	std::cout << "After forward command" << std::endl;
}