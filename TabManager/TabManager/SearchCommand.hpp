#ifndef SEARCH_COMMAND_HPP_
#define SEARCH_COMMAND_HPP_

#include "Command.hpp"
//#include "TabManagerServer.hpp"

class SearchCommand : public Command
{
public:
	SearchCommand(/*TabManagerServer& server*/);
	virtual ~SearchCommand() = default;

	virtual void execute() override;
//private:
//	TabManagerServer tabManagerServer;
};

#endif