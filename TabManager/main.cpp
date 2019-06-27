#include "PromptPrinter.hpp"
#include "Client.hpp"
#include "CommandFactory.hpp"
#include <iostream>

int main()
{
	PromptPrinter promptPrinter;
	Client client(promptPrinter);
	client.interactWithUser();
	return 0;
}