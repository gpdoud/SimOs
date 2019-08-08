#include <iostream>
#include <bitset>
#include "Ram.h"

void Ram::bin(int i) {
    std::cout << std::bitset<32>(i) << std::endl;
}
Ram::Ram() {
    for(auto idx = 0; idx < REGISTER_COUNT; idx++) {
        reg[idx] = 0;
    }
}
