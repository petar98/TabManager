#ifndef COMMAND_HPP_ 
#define COMMAND_HPP_ 

#include "TabManagerServer.hpp"

class Command
{
public:
	Command() = default;
	virtual ~Command() = default;

	virtual void execute() = 0;
protected:
	
};

#endif