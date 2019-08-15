#include <fstream>
#include <iostream>
#include "Program.h"

bool Program::Run(std::string file) {
    std::ifstream pgm(file);
    std::string line;
    if(!pgm.is_open()) {
        throw "Program file is not open.";
    }
    while(std::getline(pgm, line)) {
        std::cout << line << std::endl;
    }
    pgm.close();
}
Program::Program() {}
Program::~Program() {}