// TextUI Component is only responsible for:
// 1) displaying of messages and printing out tasks. 
// 2) Getting user input
// As much as possible, ordering of tasks and deciding what  
// header text to print is done by the Task Master.
//
// TextUI has no idea whether it is a add, edit or whatever. 
// It Just prints what is given to it.
//
//////////////////////////////////////////////////////////////////////////
///////////////// SAMPLE USER INTERFACE AND ITS COMPONENTS ////////////////
///////////////////////////////////////////////////////////////////////////
//
// Tasks due this week:      <---- THIS IS THE "HEADER TEXT"
//
// [Unscheduled Tasks] =================================	<--- DATE BAR
//
// 1.  ----------------		comp club meeting				<--- TASK
//
// [Today Fri Jan 1] ===================================	<--- DATE BAR
//
// 2.  ----------------		Remember to bring pencil		<--- TASK
// 3. [8:45am - 11:30am]	Brunch with Jane				<--- TASK  
// 4. [12pm]				Submit CS2103 CE2				<--- TASK
//
#include <vector>
#include <iostream>
#include "TextUI.h"


const std::string TextUI::WELCOME_MSG = "Welcome to MyCal!";
const std::string TextUI::HELP_MSG = "Helpppp";

void TextUI::printWelcomeMsg() {
	std::cout << WELCOME_MSG << std::endl;
}

void TextUI::printHelp() {
	std::cout << HELP_MSG << std::endl;
}

std::string TextUI::getInput() {
	std::string userInput;
	std::cin >> userInput;
	return userInput;
}

void TextUI::showOutput(DS::UIObject uiObj) {
	std::cout << "TextUI: SHOW OUTPUT" << std::endl;
}

TextUI::TextUI(void) {
}


TextUI::~TextUI(void) {
}

