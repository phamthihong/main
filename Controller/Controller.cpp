#include <sstream>
#include "Controller.h"
#include "CommandType.h"

bool Controller::isRunning() const {
    return _isRunning;
}

UIObject Controller::handleInput(std::string input) {
    CommandType::Command cmdType = CommandType::determineCmdType(input);  
    switch (cmdType) {
        case CommandType::ADD: {
            
        }
        case CommandType::DELETE: {
        }
        case CommandType::EDIT: {
        }
        case CommandType::POSTPONE: {
        }
        case CommandType::UNDO: {
        }
        case CommandType::SEARCH: {
        }
        case CommandType::VIEW: {
        }
        case CommandType::BLOCK: {
        }
        case CommandType::CONFIRM: {
        }
        case CommandType::STORAGE: {
        }
        case CommandType::EXIT_PROGRAM: {
        }
        case CommandType::INVALID: {
        }
    }
    UIObject test;
    return test;
}

Controller::Controller(void): _isRunning(true) {
}


Controller::~Controller(void) {
}
