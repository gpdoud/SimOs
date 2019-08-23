#include "Command.h"
#include <vector>
Command::Command() {}
Command::~Command() {}

Command* Command::Parse(string cmdLine) {
    Command *command = new Command;
    // find the command itself
    auto pos = cmdLine.find_first_of(' ');
    auto cmd = cmdLine.substr(0, pos);
    command->cmd = cmd;
    cmdLine.erase(0, pos + 1);
    pos = cmdLine.find_first_of(' ');
    while(pos != string::npos) {
        auto parm = cmdLine.substr(0, pos);
        command->parms.push_back(parm);
        cmdLine.erase(0, pos + 1);
        pos = cmdLine.find_first_of(' ');
    } 
    if(cmdLine.size() > 0)
        command->parms.push_back(cmdLine);
    return command;
}