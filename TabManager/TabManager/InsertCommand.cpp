#include "InsertCommand.hpp"

InsertCommand::InsertCommand()
	: Command()
{
}

void InsertCommand::execute()
{
	std::string url = "";
	std::cin >> url;
	tabManagerServer.insert(url);
}