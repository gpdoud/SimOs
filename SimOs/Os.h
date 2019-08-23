#pragma once
#include <map>
#include "Program.h"
#include "OsCommands.h"

using namespace std;

class OS {
    Program pgm;
    string PromptCommand();
    void ProcessCommand(string cmd, bool &shutdown);
    map<string, OsCommand> commands;
public:
    OS();
    ~OS();
    void Bootstrap();
    void Run();
    void Shutdown();
};

