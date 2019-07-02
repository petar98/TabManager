#ifndef REMOVE_COMMAND_HPP_
#define REMOVE_COMMAND_HPP_

#include "Command.hpp"

class RemoveCommand : public Command
{
public:
	RemoveCommand();
	virtual ~RemoveCommand() = default;

	virtual CommandStatus execute() override;
};

#endif