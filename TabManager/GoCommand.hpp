#ifndef GO_COMMAND_HPP_
#define GO_COMMAND_HPP_

#include "Command.hpp"

class GoCommand : public Command
{
public:
	virtual ~GoCommand() = default;

	void execute() override;
}

#endif