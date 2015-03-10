#pragma once
#include <string>
#include "Task.h"

class Interpreter
{
public:
    Task parseAddCmd(std::string task);
    Task parseEditCmd(std::string task);

    Interpreter(void);
    ~Interpreter(void);
};

