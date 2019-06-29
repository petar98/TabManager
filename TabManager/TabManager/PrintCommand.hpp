#ifndef PRINT_COMMAND_HPP_
#define PRINT_COMMAND_HPP_

#include "Command.hpp"

class PrintCommand : public Command
{
public:
	PrintCommand();
	virtual ~PrintCommand() = default;

	virtual void execute() override;
};

#endif