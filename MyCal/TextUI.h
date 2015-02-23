#pragma once
#include <string>
#include "DataStructure.h"

class TextUI
{
private:
	static const int MAX_BUFFER_SIZE = 255;
	//static char buffer[255];
	static const std::string WELCOME_MSG;
	static const std::string HELP_MSG;
	static const std::string UNSCHEDULED_DATE_BAR;
	static std::string QUALIFIER_DATE_BAR;
	static std::string DEFAULT_DATE_BAR;

	static bool isUnscheduled(tm taskDate);
	static std::string getWkDayName(tm taskDate);
	static std::string getMonthName(tm taskDate);
	static void printDateBar(tm taskDate);
	static void printTasks(std::vector<DS::TASK> tasks);

public:
	static void printWelcomeMsg();
	static void printHelp();

	static std::string getInput();
	static void showOutput(DS::UIObject uiObj);

	TextUI(void);
	~TextUI(void);
};

