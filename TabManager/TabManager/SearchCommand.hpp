#ifndef SEARCH_COMMAND_HPP_
#define SEARCH_COMMAND_HPP_

#include "Command.hpp"

class SearchCommand : public Command
{
public:
	SearchCommand();
	virtual ~SearchCommand() = default;

	virtual CommandStatus execute() override;
};

#endif