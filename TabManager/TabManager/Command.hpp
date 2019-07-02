#ifndef COMMAND_HPP_ 
#define COMMAND_HPP_ 

#include "TabManagerServer.hpp"
#include "Common.hpp"

extern TabManagerServer tabManagerServer;

class Command
{
public:
	Command() = default;
	virtual ~Command() = default;

	virtual CommandStatus execute() = 0;
};

#endif