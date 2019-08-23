#pragma once
#include <string>
#include <vector>

using namespace std;

class Program {
    unsigned int idx = 0;
    vector<string> lines;
public:
    Program();
    ~Program();
    bool Load(string file);
    void Reset();
    void Next();
    string Current();
};

