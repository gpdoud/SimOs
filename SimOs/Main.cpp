#include <iostream>
#include <bitset>
#include <vector>
#include "Alu.h"
#include "Stack.h"
#include "Ram.h"
#include "Program.h"

void test();

int main(int argc, char* argv[]) {
    std::vector<std::string> files;
    for(auto idx = 1; idx < argc; idx++) {
        files.push_back(argv[idx]);
        Program::Run(argv[idx]);
    }
    //test();
}
void test() {
    //Cpu cpu;
    Ram ram;
    Stack stk(&ram, 5);
    Alu alu(&stk);
    stk.push(5);
    stk.push(7);
    alu.Mul();
    auto ans = stk.pop();
    std::cout << std::bitset<32>(ans) << " " << ans << std::endl;
    //std::cout << std::endl;
    //for(auto idx = 0; idx < 10; idx++) {
    //    std::cout << std::bitset<32>(ram[idx]) << " " << ram[idx] << std::endl;
    //}
}
