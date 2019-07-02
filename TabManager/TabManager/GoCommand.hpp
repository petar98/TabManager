#ifndef GO_COMMAND_HPP_
#define GO_COMMAND_HPP_

#include "Command.hpp"

class GoCommand : public Command
{
public:
	GoCommand();
	virtual ~GoCommand() = default;

	virtual CommandStatus execute() override;
};

#endif