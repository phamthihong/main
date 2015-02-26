#pragma once
#include <string>
#include "DataStructure.h"

class Controller {
private:
    bool _isRunning;

    std::string getFirstWord(std::string userCmd) const;
    DS::CommandType determineCmdType(std::string cmdTypeString) const;
public:

    bool isRunning() const;
    DS::UIObject handleInput(std::string input);
    
    Controller(void);
    ~Controller(void);
};

