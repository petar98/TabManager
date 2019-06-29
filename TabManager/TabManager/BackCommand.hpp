#ifndef BACK_COMMAND_HPP_
#define BACK_COMMAND_HPP_

#include "Command.hpp"
//#include "TabManagerServer.hpp"

class BackCommand : public Command
{
public:
	BackCommand(/*TabManagerServer& server*/);
	virtual ~BackCommand() = default;

	virtual void execute() override;
//private:
//	TabManagerServer tabManagerServer;
};

#endif