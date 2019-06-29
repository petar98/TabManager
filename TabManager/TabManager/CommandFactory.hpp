#ifndef COMMAND_FACTORY_HPP_
#define COMMAND_FACTORY_HPP_

#include <unordered_map>
#include "Command.hpp"
#include "TabManagerServer.hpp"

#include <string>

class CommandFactory
{
public:
	CommandFactory();
	~CommandFactory();

	bool checkCommandExistence(const std::string);
	void insertCommand(const std::string, Command*);
	bool removeCommand(const std::string);
	Command* getCommandByType(const std::string);
private:
	std::unordered_map<std::string, Command*> commands;
	void initCommands();
};

#endif