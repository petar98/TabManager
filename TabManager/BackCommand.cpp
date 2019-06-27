#include "BackCommand.hpp"

BackCommand::BackCommand(TabManagerServer& tabManagerServer)
	: tabManagerServer(tabManagerServer)
{
}

void BackCommand::execute()
{
	tabManagerServer.back();
	
	std::cout << "After back command" << std::endl;
}