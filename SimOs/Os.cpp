#include <iostream>
#include "Os.h"

using namespace std;

OS::OS() {}
OS::~OS() {}

void OS::Bootstrap() {
    cout << "Bootstrap()" << endl;
    commands["echo"] = cmdEcho;
    commands["shutdown"] = cmdShutdown;
}
string OS::PromptCommand() {
    cout << "> ";
    cout.flush();
    string cmd;
    getline(cin, cmd);
    return cmd;
}
bool OS::ProcessCommand(string cmd) {
    auto cmdFound = commands.count(cmd) == 1;
    if(!cmdFound) {
        cout << cmd << ":Unknown command" << endl;
        return false;
    }
    switch(commands[cmd]) {
    case cmdEcho:
        cout << cmd << endl;
        break;
    case cmdShutdown:
        return true;
    }
    return false;
}
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
