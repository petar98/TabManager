#ifndef CLIENT_HPP_
#define CLIENT_HPP_

#include "CommandFactory.hpp"
#include "PromptPrinter.hpp"
#include <cctype>
#include <string>

class Client
{
public:
	Client(const PromptPrinter&, const CommandFactory&);
	void interactWithUser();
	// void operate();
private:
	// TabManager tm;
	std::string convertToUppercase(std::string);
	CommandFactory commandFactory;
	PromptPrinter promptPrinter;
};

#endif // !CLIENT_HPP_