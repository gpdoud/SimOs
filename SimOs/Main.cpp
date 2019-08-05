#include <iostream>
#include <bitset>
#include "Ram.h"
#include "RamChip.h"

int main() {
    //auto *chip1 = new RamChip(15);
    //int a = chip1->get();
    //std::cout << std::bitset<32>(a) << std::endl;

    auto ram = new Ram();
    ram->R(0)->set(7);
    ram->R(1)->set(15);
    for(auto idx = 0; idx < 2; idx++) {
        std::cout << "R(" << idx << ")=" << ram->R(idx)->get() << std::endl;
    }
}
