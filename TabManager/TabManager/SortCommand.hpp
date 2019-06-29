#ifndef SORT_COMMAND_HPP_
#define SORT_COMMAND_HPP_

#include "Command.hpp"
//#include "TabManagerServer.hpp"

class SortCommand : public Command
{
public:
	SortCommand(/*TabManagerServer& server*/);
	virtual ~SortCommand() = default;

	virtual void execute() override;
//private:
//	TabManagerServer tabManagerServer;
};

#endif