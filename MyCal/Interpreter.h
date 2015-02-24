#pragma once
#include <string>
#include "DataStructure.h"

class Interpreter
{
public:
    DS::TASK parseAddCmd(std::string task);
    DS::TASK parseEditCmd(std::string task);

    Interpreter(void);
    ~Interpreter(void);
};

