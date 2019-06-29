#include "PrintCommand.hpp"

PrintCommand::PrintCommand()
	: Command()
{
}

void PrintCommand::execute()
{
	tabManagerServer.print();
}