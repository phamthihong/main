#pragma once
#include <deque>
#include "DataStructure.h"
#include <string>

class Storage {
public:
	void initStorage();
	void updateStorage(DS::CHANGES changes, DS::TaskList taskList);
	unsigned getMaxID();

	Storage(void);
	~Storage(void);


private:
	typedef std::deque<DS::TaskList> Store;
	Store _sessionStore;
	unsigned _curMaxID;
	std::string _taskListLoc; //tastList.txt's location
};

