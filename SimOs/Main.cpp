#include <iostream>
#include <bitset>
#include "Cpu.h"

int main() {
    //Cpu cpu;
    Ram ram;
    Stack stk(&ram, 5);
    stk.push(7);
    ram.reg(0, 1);
    ram.reg(1, 2);
    auto one = ram[1];
    ram.reg(2, 4);
    for(auto idx = 0; idx < 10; idx++) {
        std::cout << std::bitset<32>(ram[idx]) << std::endl;
    }
}
