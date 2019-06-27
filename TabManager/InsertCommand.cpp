#include "InsertCommand.hpp"

InsertCommand::InsertCommand(TabManagerServer& tabManagerServer)
	: tabManagerServer(tabManagerServer)
{
}

void InsertCommand::execute()
{	
	std::string url = "";
	std::cin >> url;
	tabManagerServer.insert(url);
	std::cout << "After insert command" << std::endl;
}