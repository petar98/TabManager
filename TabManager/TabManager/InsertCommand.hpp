#ifndef INSERT_COMMAND_HPP_
#define INSERT_COMMAND_HPP_

#include "Command.hpp"

class InsertCommand : public Command
{
public:
	InsertCommand();
	virtual ~InsertCommand() = default;

	virtual void execute() override;
};

#endif