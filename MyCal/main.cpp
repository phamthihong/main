#include "Controller.h"
#include "TextUI.h"
#include "DataStructure.h"

void initMyCal() {
	//Perform initial setup
	//load the deque, NumberedList
	TextUI::printWelcomeMsg();
}


int main(int argc, char *argv[]) {
	
	Controller controllerService;

	initMyCal();
	
	while (true) {
		std::string userInput;
		userInput = TextUI::getInput();

		DS::UIObject controllerOutput;
		controllerOutput = controllerService.handleInput(userInput);

		TextUI::showOutput(controllerOutput);
	}


	return 0;
}