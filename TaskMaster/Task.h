#pragma once
#include <ctime> // time_t
#include <string>

class Task {
public:
    Task(void);
    ~Task(void);

    void setTaskName(std::string name);
    std::string getTaskName() const;

    bool isFloating() const; 

    std::string getDateStr() const;
    std::string getBeginStr() const;
    std::string getEndStr() const;
    time_t getTaskBegin() const;
    time_t getTaskEnd() const;
    void setTaskBegin(time_t begin);
    void setTaskEnd(time_t end);
    
    void markDone();
    bool isDone() const;

    unsigned getTaskID() const;
    void setTaskID(unsigned id);

private:
    std::string _taskName;
    bool _isFloating;
    time_t _taskBegin;
    time_t _taskEnd;
    bool _isDone;
    unsigned _taskID;
};

