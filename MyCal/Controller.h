#pragma once
#include <string>
#include "DataStructure.h"

class Controller {
public:

	DS::UIObject handleInput(std::string input);

	Controller(void);
	~Controller(void);
};

