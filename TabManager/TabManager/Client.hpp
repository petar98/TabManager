#ifndef CLIENT_HPP_
#define CLIENT_HPP_

#include "CommandFactory.hpp"
#include "PromptPrinter.hpp"
#include <cctype>
#include <string>

class Client
{
public:
	Client(const PromptPrinter&);
	void interactWithUser();
private:
	std::string convertToUppercase(std::string);
	PromptPrinter promptPrinter;
	CommandFactory commandFactory;
};

#endif // !CLIENT_HPP_