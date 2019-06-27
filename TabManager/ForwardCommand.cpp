#include "ForwardCommand.hpp"
#include "TabManagerServer.hpp"

ForwardCommand::ForwardCommand(TabManagerServer& tabManagerServer)
	: tabManagerServer(tabManagerServer)
{
}

void ForwardCommand::execute()
{
	TabManagerServer tabManagerServer;
	tabManagerServer.forward();
	
	std::cout << "After forward command" << std::endl;
}