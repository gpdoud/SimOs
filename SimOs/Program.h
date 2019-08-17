#pragma once
#include <string>
#include <vector>

using namespace std;

class Program {
    vector<string> lines;
public:
    Program();
    ~Program();
    bool Load(string file);
    void Run();
};

