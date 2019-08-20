#include <iostream>
#include "Os.h"

using namespace std;

OS::OS() {}
OS::~OS() {}

void OS::Bootstrap() {
    cout << "Bootstrap()" << endl;
    commands["echo"] = cmdEcho;
    commands["end"] = cmdEnd;
}
string OS::PromptCommand() {
    cout << "> ";
    cout.flush();
    string cmd;
    getline(cin, cmd);
    return cmd;
}
//TODO: need to break cmd into cmd and parms
bool OS::ProcessCommand(string cmdLine) {
    auto cmdLineFound = commands.count(cmdLine) == 1;
    if(!cmdLineFound) {
        cout << cmdLine << ": Unknown command" << endl;
        return false;
    }
    switch(commands[cmdLine]) {
    case cmdEcho:
        cout << cmdLine << endl;
        break;
    case cmdEnd:
        return true;
    }
    return false;
}
//TODO: Need to change shutdown so it is triggered from ProcessCommand
void OS::Run() {
    cout << "Run()" << endl;
    auto shutdown = false;
    string cmd;
    while(!shutdown) {
        cmd = PromptCommand();
        shutdown = ProcessCommand(cmd);
    }
}
void OS::Shutdown() {
    cout << "Shutdown()" << endl;
}
