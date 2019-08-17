#include <iostream>
#include <string>
#include "Cpu.h"

using namespace std;

Cpu::Cpu() {
}

void Cpu::Execute(string line) {
    string delim = ":";
    string cmd = line.substr(0, line.find(delim));
    string parm = line.substr(line.find(delim) + 1);
}