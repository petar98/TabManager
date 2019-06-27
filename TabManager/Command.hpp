#ifndef COMMAND_HPP_ 
#define COMMAND_HPP_ 

class Command
{
public:
	Command() = default;
	virtual ~Command() = default;

	virtual void execute() = 0;	
};

#endif