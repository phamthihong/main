#pragma once
#include <deque>
#include <string>
#include "DataStructure.h"

class Storage {
public:
	static void initStorage();
    static DS::TaskList getAllTasks();
	static void updateStorage(DS::CHANGES changes, DS::TaskList taskList);
    static DS::CHANGES undoLastAction();
	static unsigned getMaxID();

	Storage(void);
	~Storage(void);


private:
    static void saveRecentChange(DS::CHANGES change);
    static void saveStorageSettings(std::string fileLoc, unsigned maxID);
    static void saveTaskList(DS::TaskList taskList);

	typedef std::deque<DS::TaskList> Store;
	static Store _sessionStore;
	static unsigned _curMaxID;
	static std::string _taskListLoc; //tastList.txt's location
};

