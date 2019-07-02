#ifndef FORWARD_COMMAND_HPP_
#define FORWARD_COMMAND_HPP_

#include "Command.hpp"

class ForwardCommand : public Command
{
public:
	ForwardCommand();
	virtual ~ForwardCommand() = default;

	virtual CommandStatus execute() override;
};

#endif