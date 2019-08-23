#include <iostream>
#include <sstream>
#include "Os.h"
#include "Command.h"
#include "OsCommands.h"
#include "Logger.h"

using namespace std;

OS::OS() {}
OS::~OS() {}

void OS::Bootstrap() {
    Logger::Info("Bootstrap()");
    commands["echo"] = cmdEcho;
    Logger::Info("Defined the 'echo' command. Echos parameters.");
    commands[""] = cmdBlank;
    Logger::Info("Defined the blank command: does nothing.");
    commands["exit"] = cmdExit;
    Logger::Info("Defined the 'exit' command. Performs shutdown.");
}
string OS::PromptCommand() {
    cout << "> ";
    cout.flush();
    string cmd;
    getline(cin, cmd);
    return cmd;
}
void OS::ProcessCommand(string cmdLine, bool &shutdown) {
    shutdown = false;
    auto *cmd = Command::Parse(cmdLine);
    OsCommand osCmd;
    
    if(commands.count(cmd->cmd) == 1)
        osCmd = commands[cmd->cmd];
    else
        osCmd = OsCommand::cmdUnknown;
    stringstream ss;

    switch(osCmd) {
    case cmdBlank:
        Logger::Info("(blank)");
        break;
    case cmdEcho:
        for(auto iter = cmd->parms.begin(); iter < cmd->parms.end(); iter++) {
            ss << *iter << " ";
        }
        Logger::Info(ss.str());
        break;
    case cmdExit:
        Logger::Info("shutdown");
        shutdown = true;
        break;
    case cmdUnknown:
        Logger::Info("unknown: " + cmd->cmd);
        break;
    default:
        Logger::Warn("not defined.");
    }
}
void OS::Run() {
    Logger::Log("Run()");
    auto shutdown = false;
    string cmd;
    while(!shutdown) {
        cmd = PromptCommand();
        ProcessCommand(cmd, shutdown);
    }
}
void OS::Shutdown() {
    Logger::Info("Shutdown()");
}
