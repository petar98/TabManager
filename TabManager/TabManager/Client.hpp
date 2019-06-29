#ifndef CLIENT_HPP_
#define CLIENT_HPP_

#include "CommandFactory.hpp"
#include "PromptPrinter.hpp"
#include <cctype>
#include <string>

class Client
{
public:
	Client(const PromptPrinter&/*, TabManagerServer& server*/);
	void interactWithUser();
private:
	std::string convertToUppercase(std::string);
	PromptPrinter promptPrinter;
	//TabManagerServer tabManagerServer;
	CommandFactory commandFactory;
};

#endif // !CLIENT_HPP_