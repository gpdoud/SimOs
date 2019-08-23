#pragma once
#include <string>
#include <vector>
using namespace std;

class Command {
public:
    string cmd;
    vector<string> parms;
    int cmdType = -1;
    Command();
    ~Command();
    static Command* Parse(const string cmdLine);
};

