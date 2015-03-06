#include "stdafx.h"
#include "CppUnitTest.h"
#include "DataStructure.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

static DS::TaskList taskList;
static DS::CHANGES changes;

namespace MyCalTestSuite {
    TEST_MODULE_INITIALIZE(SetupStorageTest) {
        //initialize a taskList object
        //todo: add in more tasks over several days
        DS::TASK task1;
	    task1.taskID = 1;
	    task1.taskName = "eat hamburger";
        time(&task1.taskStart);
        time(&task1.taskEnd); //todo: change to different end time

        DS::TASK task2;
	    task2.taskID = 2;
	    task2.taskName = "do CS2103 tutorial!";
        time(&task2.taskStart);
        time(&task2.taskEnd); //todo: change to different end time

	    DS::SINGLE_DAY singleDay;
        singleDay.taskDate = task1.taskStart;
	    singleDay.tasksThisDay.push_back(task1);
        singleDay.tasksThisDay.push_back(task2);

	     
	    (taskList).push_back(singleDay);

        //initialize a change object
        changes.after = task2;
        changes.before = task1;
        changes.cmdType = DS::CommandType::EDIT;
    }
    
	TEST_CLASS(StorageTest) {
	public:
		TEST_METHOD(TestUpdateStorage) {     
            Storage mockStorage;
            mockStorage.updateStorage(changes, taskList);
            Assert::AreEqual(0, 0);
		}

	};
}