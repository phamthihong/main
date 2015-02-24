#pragma once
#include <string>
#include "DataStructure.h"

class Controller {
private:
    std::string getFirstWord(std::string userCmd);
    DS::CommandType determineCmdType(std::string cmdTypeString);
public:

	DS::UIObject handleInput(std::string input);

	Controller(void);
	~Controller(void);
};

