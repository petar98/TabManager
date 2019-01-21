#include "TabCommander.hpp"

std::string TabCommander::toUpper(std::string command)
{
	std::transform(command.begin(), command.end(), command.begin(),
		[](unsigned char c) { return std::toupper(c); });
	return command;
}

void TabCommander::operate()
{
	std::cout << "GO <url> -> load current tab with <url>" << std::endl;
	std::cout << "INSERT <url> -> insert a tab with <url> after current ";
	std::cout << " and make it active" << std::endl;
	std::cout << "BACK -> switch to the previous tab" << std::endl;
	std::cout << "FORWARD -> switch to the next tab" << std::endl;
	std::cout << "REMOVE -> remove the current tab" << std::endl;
	std::cout << "PRINT -> print all opened tabs" << std::endl;
	std::cout << "SORT URL -> sort all tabs by URL" << std::endl;
	std::cout << "SORT TIME -> sort all tabs by time and date" << std::endl;
	std::cout << "SEARCH <word> -> search for <word> in all opened tabs";
	std::cout << " and choose one of them to be active" << std::endl;
	std::cout << "Other command to exit" << std::endl;
	std::string command = "";
	std::string value = "";
	do
	{
		std::cin >> command;
		command = toUpper(command);
		if (command == "GO")
		{
			std::cin >> value;
			tm.go(value);
		}
		else if (command == "INSERT")
		{
			std::cin >> value;
			tm.insert(value);
		}
		else if (command == "BACK")
		{
			tm.back();
		}
		else if (command == "FORWARD")
		{
			tm.forward();
		}
		else if (command == "REMOVE")
		{
			tm.remove();
		}
		else if (command == "PRINT")
		{
			tm.print();
		}
		else if (command == "SORT")
		{
			std::cin >> value;
			value = toUpper(value);
			if (value == "URL")
			{
				tm.sortUrl();
			}
			else if (value == "TIME")
			{
				tm.sortTime();
			}
		}
		else if (command == "SEARCH")
		{
			std::cin >> value;
			tm.search(value);
		}
		else
		{
			command = "exit";
		}
	} while (command != "exit");
}