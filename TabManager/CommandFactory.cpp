#include "CommandFactory.hpp"

#include <stdexcept>

CommandFactory::CommandFactory()
{
	initCommands();
}

CommandFactory::~CommandFactory()
{
	for (std::unordered_map<std::string, Command*>::iterator i = commands.begin();
	i != commands.end(); ++i)
	{
		delete[] commands[i].second;
	}
}

void CommandFactory::initCommands()
{
	insertCommand("GO", new GoCommand);
	insertCommand("INSERT", new GoCommand); // command should be changed
	insertCommand("BACK", new GoCommand); // command should be changed
	insertCommand("FORWARD", new GoCommand); // command should be changed
	insertCommand("REMOVE", new GoCommand); // command should be changed
	insertCommand("PRINT", new GoCommand); // command should be changed
	insertCommand("URL", new GoCommand); // command should be changed
	insertCommand("TIME", new GoCommand); // command should be changed
	insertCommand("SEARCH", new GoCommand); // command should be changed
}

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