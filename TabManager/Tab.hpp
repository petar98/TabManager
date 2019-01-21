#ifndef TAB_HPP_
#define TAB_HPP_

#include <string>
#include <ctime>
#include <fstream>
#include <iostream>
#include <set>
#include <sstream>

class Tab
{
public:
	Tab();
	Tab(std::string);
	void load(std::string);
	void printUrlTime() const;
	void printContent() const;
	std::string getUrl() const;
	std::time_t getTime() const;
	std::set<std::string> seperateWords() const;
private:
	std::string url;
	std::time_t fetchTime;
	std::set<std::string> fetchContent;
	std::string content;
	
	void generateWordsFromContent();
};

#endif // !TAB_HPP_