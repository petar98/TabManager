#ifndef GO_COMMAND_HPP_
#define GO_COMMAND_HPP_

#include "Command.hpp"
#include "TabManagerServer.hpp"

class GoCommand : public Command
{
public:
	GoCommand(TabManagerServer& tabManagerServer);
	virtual ~GoCommand() = default;

	virtual void execute() override;
private:
	TabManagerServer tabManagerServer;
};

#endif