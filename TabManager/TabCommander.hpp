#ifndef TAB_COMMANDER_HPP_
#define TAB_COMMANDER_HPP_

// #include "TabManager.hpp"
#include <cctype>

class TabCommander
{
public:
	void operate();
private:
	// TabManager tm;
	std::string convertToUppercase(std::string);
	// CommandFactory commandFactory
};

#endif // !TAB_COMMANDER_HPP_