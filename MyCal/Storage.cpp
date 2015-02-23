#include "Storage.h"

void Storage::initStorage() {
}

DS::TaskList Storage::getAllTasks() {
    return _sessionStore.back();
}

void Storage::updateStorage(DS::CHANGES changes, DS::TaskList taskList) {
    _sessionStore.push_back(taskList);
    //write to storageSettings.txt
    //overwrite mostRecentChange.txt
    //overwrite taskList.txt
}

DS::CHANGES Storage::undoLastAction() {
    if (_sessionStore.size() > 1) {
        _sessionStore.pop_back();
        DS::CHANGES sampleChange; // = read from mostRecentChange.txt
        //write to files again to update change
        return sampleChange;
    } else {
        //throw exception
        //
        DS::CHANGES sampleChange;
        return sampleChange;
    }
}

unsigned Storage::getMaxID() {
	return _curMaxID;
}

Storage::Storage(void) {
}


Storage::~Storage(void) {
}

