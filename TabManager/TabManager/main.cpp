#include "PromptPrinter.hpp"
#include "Client.hpp"

#include <iostream>

int main()
{
	PromptPrinter promptPrinter;
	Client client(promptPrinter);
	client.interactWithUser();

	system("pause");
	return 0;
}