#include "PromptPrinter.hpp"
#include "Client.hpp"
#include "CommandFactory.hpp"
#include <iostream>

int main()
{
	PromptPrinter promptPrinter;
	CommandFactory commandFactory;
	Client client(promptPrinter, commandFactory);
	client.interactWithUser();
	return 0;
}