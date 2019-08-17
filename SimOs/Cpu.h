#pragma once
#include "Stack.h"
#include "Alu.h"
using namespace std;

class Cpu {
public:
    Cpu();
    static void Execute(string line);
};

