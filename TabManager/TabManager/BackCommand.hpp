#ifndef BACK_COMMAND_HPP_
#define BACK_COMMAND_HPP_

#include "Command.hpp"

class BackCommand : public Command
{
public:
	BackCommand();
	virtual ~BackCommand() = default;

	virtual CommandStatus execute() override;
};

#endif