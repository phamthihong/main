#pragma once
#include <string>
#include "DataStructure.h"

class TextUI
{
private:
	static const std::string WELCOME_MSG;
	static const std::string HELP_MSG;

public:


	static void printWelcomeMsg();
	static void printHelp();

	static std::string getInput();
	static void showOutput(DS::UIObject uiObj);

	TextUI(void);
	~TextUI(void);
};

