#ifndef FORWARD_COMMAND_HPP_
#define FORWARD_COMMAND_HPP_

#include "Command.hpp"
//#include "TabManagerServer.hpp"

class ForwardCommand : public Command
{
public:
	ForwardCommand(/*TabManagerServer& server*/);
	virtual ~ForwardCommand() = default;

	virtual void execute() override;/*
private:
	TabManagerServer  tabManagerServer;*/
};

#endif