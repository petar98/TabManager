#ifndef COMMAND_FACTORY_HPP_
#define COMMAND_FACTORY_HPP_

#include <unordered_map>
#include "Command.hpp"
#include "Defines.hpp"

#include <string>

class CommandFactory
{
public:
	CommandFactory() = default;
	~CommandFactory() = default;

	// bool checkCommandExistence(const CommandType);
	bool checkCommandExistence(const std::string);
	// void insertCommand(const CommandType, Command*);
	void insertCommand(const std::string, Command*);
	// bool removeCommand(const CommandType);
	bool removeCommand(const std::string);
	// Command* getCommand(const CommandType);
	Command* getCommandByType(const std::string);
private:
	// std::unordered_map<CommandType, Command*> commands;
	std::unordered_map<std::string, Command*> commands;
};

#endif