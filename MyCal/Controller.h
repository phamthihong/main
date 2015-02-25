#pragma once
#include <string>
#include "DataStructure.h"

class Controller {
private:
    bool _isRunning;

    std::string getFirstWord(std::string userCmd);
    DS::CommandType determineCmdType(std::string cmdTypeString);
public:

    const bool isRunning();
	DS::UIObject handleInput(std::string input);

	Controller(void);
	~Controller(void);
};

