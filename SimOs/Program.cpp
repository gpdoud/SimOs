#include <fstream>
#include <iostream>
#include <string>
#include "Program.h"
#include "StringUtility.h"
#include "Cpu.h"

using namespace std;

void Program::Run() {
    for(auto idx = 0; idx < lines.size(); idx++) {
        auto line = lines[idx];
        Cpu::Execute(line);
    }
}
bool Program::Load(string filename) {
    string line;
    ifstream file;
    file.open(filename);
    if(!file) {
        cerr << "File open failed!";
        exit(1);
    }
    while(getline(file, line)) {
        StringUtility::StripCommentAndWhitespace(line);
        if(line.size() > 0) {
            lines.push_back(line);
            cout << line << endl;
        }
    }
    if(file.bad()) {
        cerr << "Error reading the file" << endl;
        return false;
    }
    file.close();
    return true;
}
Program::Program() {}
Program::~Program() {}