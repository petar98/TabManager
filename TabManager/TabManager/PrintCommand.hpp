#ifndef PRINT_COMMAND_HPP_
#define PRINT_COMMAND_HPP_

#include "Command.hpp"
//#include "TabManagerServer.hpp"

class PrintCommand : public Command
{
public:
	PrintCommand(/*TabManagerServer& server*/);
	virtual ~PrintCommand() = default;

	virtual void execute() override;/*
private:
	TabManagerServer tabManagerServer;*/
};

#endif