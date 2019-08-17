#include <iostream>
#include <bitset>
#include <vector>
#include "Os.h"

    OS os;
    vector<string> files;

void run() {
    os.Bootstrap();
    os.Run();
    os.Shutdown();
}
int main(int argc, char* argv[]) {
    for(auto idx = 1; idx < argc; idx++) {
        files.push_back(argv[idx]);
    }
    run();
}