#include "Controller.h"

DS::UIObject Controller::handleInput(std::string input) {
	DS::TASK task;
	task.taskID = 1;
	task.taskName = "eat hamburger";

	DS::SINGLE_DAY singleDay;
	singleDay.tasksThisDay.push_back(task);

	DS::TaskList myTaskList;
	myTaskList.push_back(singleDay);

	DS::UIObject sampleUIObj;
	sampleUIObj.headerText = "Tasks for today:";
	sampleUIObj.taskList = myTaskList;

	return sampleUIObj;
}

Controller::Controller(void) {
}


Controller::~Controller(void) {
}
