#include <iostream>
#include <bitset>
#include "Alu.h"

int main() {
    //Cpu cpu;
    Ram ram;
    Stack stk(&ram, 5);
    Alu alu(&stk);
    stk.push(5);
    stk.push(2);
    alu.Or();
    auto ans = stk.pop();
    std::cout << std::bitset<32>(ans) << " " << ans << std::endl;
    //std::cout << std::endl;
    //for(auto idx = 0; idx < 10; idx++) {
    //    std::cout << std::bitset<32>(ram[idx]) << " " << ram[idx] << std::endl;
    //}
}
