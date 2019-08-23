#pragma once
#include <iostream>
using namespace std;

class Logger {
    static string Timestamp();
    static string Int2Str(int i);
public:
    Logger();
    ~Logger();
    static void Log(const string msg, const char sev = 'I');
    static void Info(const string msg);
    static void Warn(const string msg);
    static void Error(const string msg);
    static void Fatal(const string msg);
};

