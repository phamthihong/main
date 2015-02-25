#pragma once
#include <deque>
#include <string>
#include "DataStructure.h"

class Storage {
public:
    DS::TaskList getAllTasks();
	void updateStorage(DS::CHANGES changes, DS::TaskList taskList);
    DS::CHANGES undoLastAction();
	unsigned getMaxID();

	Storage(void);
	~Storage(void);


private:
    void saveRecentChange(DS::CHANGES change);
    void saveStorageSettings(std::string fileLoc, unsigned maxID);
    void saveTaskList(DS::TaskList taskList);

	typedef std::deque<DS::TaskList> Store;
	Store _sessionStore;
	unsigned _curMaxID;
	std::string _taskListLoc; //tastList.txt's location
};

extern Storage *storageObj;
