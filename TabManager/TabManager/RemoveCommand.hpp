#ifndef REMOVE_COMMAND_HPP_
#define REMOVE_COMMAND_HPP_

#include "Command.hpp"
//#include "TabManagerServer.hpp"

class RemoveCommand : public Command
{
public:
	RemoveCommand(/*TabManagerServer& server*/);
	virtual ~RemoveCommand() = default;

	virtual void execute() override;
//private:
//	TabManagerServer tabManagerServer;
};

#endif