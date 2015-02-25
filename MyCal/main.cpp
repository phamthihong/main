#include "Controller.h"
#include "TextUI.h"
#include "DataStructure.h"
#include "Storage.h"

void cleanMyCal() {
    delete storageObj;
}

void initMyCal() {
	//Perform initial setup
	//load the deque, NumberedList
	TextUI::printWelcomeMsg();
}

Storage *storageObj = new Storage;

int main(int argc, char *argv[]) {
	
	Controller controllerService;

	initMyCal();
	
	while (controllerService.isRunning()) {
		std::string userInput;
		userInput = TextUI::getInput();

		DS::UIObject controllerOutput;
		controllerOutput = controllerService.handleInput(userInput);

		TextUI::showOutput(controllerOutput);
	}

    cleanMyCal();

	return 0;
}