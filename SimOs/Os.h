#pragma once
#include <map>
#include "Program.h"

using namespace std;

static enum Cmds {
    cmdEcho,
    cmdEnd
};
class OS {
    Program pgm;
    string PromptCommand();
    bool ProcessCommand(string cmd);
    map<string, Cmds> commands;
public:
    OS();
    ~OS();
    void Bootstrap();
    void Run();
    void Shutdown();
};

