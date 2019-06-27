#include "GoCommand.hpp"

#include <string>
#include <iostream>

GoCommand::GoCommand(TabManagerServer& tabManagerServer)
	: tabManagerServer(tabManagerServer)
{
	std::cout << &tabManagerServer << std::endl;
}

void GoCommand::execute()
{
	std::cout << "Go Command" << std::endl;
	std::string url = "";
	std::cin >> url;
	std::cout << url << std::endl;
	tabManagerServer.go(url);
}