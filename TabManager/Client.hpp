#ifndef CLIENT_HPP_
#define CLIENT_HPP_

#include "CommandFactory.hpp"
#include <cctype>

class Client
{
public:
	Client(const CommandFactory&, const PromptPrinter&);
	void interactWithUser();
	void operate();
private:
	// TabManager tm;
	std::string convertToUppercase(std::string);
	CommandFactory commandFactory;
	PromptPrinter promptPrinter;
	// CommandFactory commandFactory
};

#endif // !CLIENT_HPP_