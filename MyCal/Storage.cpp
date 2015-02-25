#include "Storage.h"

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

void Storage::saveStorageSettings(std::string fileLoc, unsigned maxID) {
    //save to storageSettings.txt in the following format
    //taskListLocation: <File Location>
    //currentMaxID: 5
    //should overwrite the exisiting file
}

void Storage::saveRecentChange(DS::CHANGES change) {
    //should  overwrite the exisiting file
    //save to mostRecentChange.txt in the following format
    //taskid: xxx
    //commandType: edit (postpone/add/delete/confirm/done) 

    //BEFORE
    //list all task details

   // AFTER
    //list all task details

}
void Storage::saveTaskList(DS::TaskList taskList) {
        //should  overwrite the exisiting file

    //save to the location specified in _taskListLoc
    //sample format:
    /*    
    [date xxx]
    taskID: 1 
    taskName: 
    taskDate: 
    taskStart:
    taskEnd: 
    isDone: 

    TaskID: 2
    //details

    TaskID: 3
    //details

    [date yyy]
    taskID: 7
    taskName: 
    taskDate: //redundant, but easier to leave it
    taskStart:
    taskEnd: 
    isDone: 
    */

 }