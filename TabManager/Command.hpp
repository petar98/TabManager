#ifndef COMMAND_HPP_ 

// #include "TabManager.hpp"

class Command
{
public:
	Command() = default;
	virtual ~Command() = default;

	virtual void execute() = 0;
protected:
	// TabManager tabManager;
};

#define COMMAND_HPP_ 
#endif