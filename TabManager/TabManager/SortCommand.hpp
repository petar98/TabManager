#ifndef SORT_COMMAND_HPP_
#define SORT_COMMAND_HPP_

#include "Command.hpp"

class SortCommand : public Command
{
public:
	SortCommand();
	virtual ~SortCommand() = default;

	virtual CommandStatus execute() override;
private:
	std::string convertToUppercase(std::string);
};

#endif