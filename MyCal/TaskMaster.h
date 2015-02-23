#pragma once
#include <vector>
#include "DataStructure.h"

class TaskMaster {
public:
    DS::UIObject addTask(DS::TASK task);
    DS::UIObject deleteTask(DS::TASK task);
    DS::UIObject editTask(DS::TASK task);
    DS::UIObject markTask(DS::TASK task);
    DS::UIObject undoTask(); //do later

	TaskMaster(void);
	virtual ~TaskMaster(void);
};