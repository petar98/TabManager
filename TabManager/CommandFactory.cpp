#include "CommandFactory.hpp"
#include "TabManagerServer.hpp"

#include "GoCommand.hpp"
#include "InsertCommand.hpp"
#include "BackCommand.hpp"
#include "ForwardCommand.hpp"

#include <stdexcept>

#include <iostream>

CommandFactory::CommandFactory()
{
	initCommands();
}

CommandFactory::~CommandFactory()
{
	for (std::unordered_map<std::string, Command*>::iterator i = commands.begin();
	i != commands.end(); ++i)
	{
		delete i->second;
	}
}

void CommandFactory::initCommands()
{
	TabManagerServer tabManagerServer;
	std::cout << &tabManagerServer << std::endl;

	insertCommand("GO", new GoCommand(tabManagerServer));
	insertCommand("INSERT", new InsertCommand(tabManagerServer));
	insertCommand("BACK", new BackCommand(tabManagerServer));
	insertCommand("FORWARD", new ForwardCommand(tabManagerServer));
	// insertCommand("REMOVE", new GoCommand(tabManagerServer)); // command should be changed
	// insertCommand("PRINT", new GoCommand(tabManagerServer)); // command should be changed
	// insertCommand("URL", new GoCommand(tabManagerServer)); // command should be changed
	// insertCommand("TIME", new GoCommand(tabManagerServer)); // command should be changed
	// insertCommand("SEARCH", new GoCommand(tabManagerServer)); // command should be changed
}

bool CommandFactory::checkCommandExistence(const std::string type)
{
	std::unordered_map<std::string, Command*>::iterator finder = commands.find(type);
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
	throw std::invalid_argument("non existing command type received");
}

Command* CommandFactory::getCommandByType(const std::string type)
{
	if (!checkCommandExistence(type))
	{
		throw std::invalid_argument("Non existing command type received");
	}
	return commands.find(type)->second;
}