#include <iostream>
#include "OS.h"

using namespace std;

OS::OS() {}
OS::~OS() {}

void OS::Bootstrap() {
    cout << "Bootstrap()" << endl;
}
void OS::Run() {
    cout << "Run()" << endl;
}
void OS::Shutdown() {
    cout << "Shutdown()" << endl;
}
