#include "CommandFactory.hpp"
#include "TabManagerServer.hpp"
#include "GoCommand.hpp"
#include "InsertCommand.hpp"
#include "BackCommand.hpp"
#include "ForwardCommand.hpp"
#include "RemoveCommand.hpp"
#include "PrintCommand.hpp"
#include "SortCommand.hpp"
#include "SearchCommand.hpp"

#include <stdexcept>

#include <iostream>

CommandFactory::CommandFactory()
{
	initCommands();
}

CommandFactory::~CommandFactory()
{
	std::cout << "Deleting commands" << std::endl;
	for (std::unordered_map<std::string, Command*>::iterator i = commands.begin();
		i != commands.end(); ++i)
	{
		delete i->second;
	}
}

void CommandFactory::initCommands()
{
	insertCommand("GO", new GoCommand());
	insertCommand("INSERT", new InsertCommand());
	insertCommand("BACK", new BackCommand());
	insertCommand("FORWARD", new ForwardCommand());
	insertCommand("REMOVE", new RemoveCommand());
	insertCommand("PRINT", new PrintCommand());
	insertCommand("SORT", new SortCommand());
	insertCommand("SEARCH", new SearchCommand());
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
	return true;
}

Command* CommandFactory::getCommandByType(const std::string type)
{
	if (!checkCommandExistence(type))
	{
		throw std::invalid_argument("Non existing command type received");
	}
	return commands.find(type)->second;
}