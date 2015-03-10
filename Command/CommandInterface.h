#pragma once
class CommandInterface {
public:
    CommandInterface(void);
    virtual ~CommandInterface(void);
    void execute();
};

