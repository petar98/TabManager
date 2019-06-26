#ifndef GO_COMMAND_HPP_
#define GO_COMMAND_HPP_

#include "Command.hpp"

class GoCommand : public Command
{
public:
	GoCommand() = default;
	virtual ~GoCommand() = default;

	virtual void execute() override;
};

#endif