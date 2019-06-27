#include "GoCommand.hpp"
#include "TabManagerServer.hpp"

#include <string>
#include <iostream>

GoCommand::GoCommand(TabManagerServer& tabManagerServer)
	: tabManagerServer(tabManagerServer)
{
}

void GoCommand::execute()
{
	std::string url = "";
	std::cin >> url;
	TabManagerServer tabManagerServer;
	tabManagerServer.go(url);
}