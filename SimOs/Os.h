#pragma once
#include "Program.h"

using namespace std;

class OS {
    Program pgm;
public:
    OS();
    ~OS();
    void Bootstrap();
    void Run();
    void Shutdown();
};

