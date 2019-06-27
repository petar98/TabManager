#include "InsertCommand.hpp"
#include "TabManagerServer.hpp"

InsertCommand::InsertCommand(TabManagerServer& tabManagerServer)
	: tabManagerServer(tabManagerServer)
{
}

void InsertCommand::execute()
{
	TabManagerServer tabManagerServer;
	
	std::string url;
	std::cin >> url;
	tabManagerServer.insert(url);
	std::cout << "After insert command" << std::endl;
}