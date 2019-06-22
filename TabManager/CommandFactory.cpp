#include "CommandFactory.hpp"

#include <stdexcept>

bool CommandFactory::checkCommandExistence(const std::string type)
{
	auto finder = commands.find(type);
	if (finder == commands.end())
	{
		return false;
	}
	return true;
}

void CommandFactory::insertCommand(const std::string type, Command* command)
{
	commands.insert(std::make_pair(type, command));
}

bool CommandFactory::removeCommand(const std::string type)
{
	if (checkCommandExistence(type))
	{
		commands.erase(type);
		return true;
	}
	return false;
}

Command* CommandFactory::getCommandByType(const std::string type)
{
	if (!checkCommandExistence(type))
	{
		throw std::invalid_argument("non existing command type received");
	}
	return commands.find(type)->second;
}