#ifndef INSERT_COMMAND_HPP_
#define INSERT_COMMAND_HPP_

#include "Command.hpp"
#include "TabManagerServer.hpp"

class InsertCommand : public Command
{
public:
	InsertCommand(TabManagerServer& tabManagerServer);
	virtual ~InsertCommand() = default;

	virtual void execute() override;
private:
	TabManagerServer tabManagerServer;
};

#endif