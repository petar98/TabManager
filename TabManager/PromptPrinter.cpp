#include "PromptPrinter.hpp"
#include <iostream>

void PromptPrinter::operator()()
{
	std::cout << "----------------------------------Actions------------------------------------------" << std::endl;
	std::cout << "> GO <url> -> load current tab with <url>" << std::endl;
	std::cout << "> INSERT <url> -> insert a tab with <url> after current ";
	std::cout << " and make it active" << std::endl;
	std::cout << "> BACK -> switch to the previous tab" << std::endl;
	std::cout << "> FORWARD -> switch to the next tab" << std::endl;
	std::cout << "> REMOVE -> remove the current tab" << std::endl;
	std::cout << "> PRINT -> print all opened tabs" << std::endl;
	std::cout << "> SORT URL -> sort all tabs by URL" << std::endl;
	std::cout << "> SORT TIME -> sort all tabs by time and date" << std::endl;
	std::cout << "> SEARCH <word> -> search for <word> in all opened tabs";
	std::cout << " and choose one of them" << std::endl;
	std::cout << "> Other command to exit" << std::endl;
	std::cout << "-----------------------------------------------------------------------------------" << std::endl;
}