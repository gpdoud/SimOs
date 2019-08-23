#include "Logger.h"
#include <iostream>
#include <sstream>
#include <chrono>

Logger::Logger() {}
Logger::~Logger() {}

string Logger::Int2Str(int i) {
    stringstream ss;
    if(i < 10)
        ss << "0" << i;
    else
        ss << i;
    return ss.str();
}
string Logger::Timestamp() {
    _tzset();
    struct tm today;
    auto now = chrono::system_clock::to_time_t(chrono::system_clock::now());
    auto err = _localtime64_s(&today, &now);
    if(err)
        cout << "Error getting local time" << endl;
    stringstream ss;
    ss << today.tm_year + 1900;
    ss << Logger::Int2Str(today.tm_mon + 1);
    ss << Logger::Int2Str(today.tm_mday);
    ss << Logger::Int2Str(today.tm_hour);
    ss << Logger::Int2Str(today.tm_min);
    ss << Logger::Int2Str(today.tm_sec);
    return ss.str();
}

void Logger::Log(string msg, char sev) {
    auto ts = Logger::Timestamp();
    cout << ts << " " << sev << " " << msg << endl;
}
void Logger::Info(string msg) { Log(msg, 'I'); }
void Logger::Warn(string msg) { Log(msg, 'W'); }
void Logger::Error(string msg) { Log(msg, 'E'); }
void Logger::Fatal(string msg) { Log(msg, 'F'); }