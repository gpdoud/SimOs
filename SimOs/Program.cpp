#include <fstream>
#include <iostream>
#include <string>
#include "Program.h"
#include "StringUtility.h"
#include "Cpu.h"
#include "Logger.h"

using namespace std;

void Program::Reset() { idx = 0; }
void Program::Next() { idx++; }
string Program::Current() {
    if(idx < lines.size())
        return lines.at(idx);
    return "";
}
bool Program::Load(string filename) {
    string line;
    ifstream file;
    file.open(filename);
    if(!file) {
        Logger::Fatal("File open failed!");
        exit(1);
    }
    while(getline(file, line)) {
        StringUtility::StripCommentAndWhitespace(line);
        if(line.size() > 0) {
            lines.push_back(line);
            Logger::Info(line);
        }
    }
    if(file.bad()) {
        Logger::Fatal("Error reading the file");
        return false;
    }
    file.close();
    return true;
}
Program::Program() {}
Program::~Program() {}