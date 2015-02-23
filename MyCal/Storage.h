#pragma once
#include <deque>
#include <string>
#include "DataStructure.h"

class Storage {
public:
	void initStorage();
    static DS::TaskList getAllTasks();
	static void updateStorage(DS::CHANGES changes, DS::TaskList taskList);
    DS::CHANGES undoLastAction();
	static unsigned getMaxID();

	Storage(void);
	~Storage(void);


private:
	typedef std::deque<DS::TaskList> Store;
	static Store _sessionStore;
	static unsigned _curMaxID;
	std::string _taskListLoc; //tastList.txt's location
};

