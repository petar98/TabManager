#include "GoCommand.hpp"


GoCommand::GoCommand()
	: Command()
{
}

void GoCommand::execute()
{
	std::string url = "";
	std::cin >> url;
	tabManagerServer.go(url);
}