#include <iostream>
#include <bitset>
#include "Alu.h"
#include "Ram.h"
#include "RamChip.h"

int main() {
    //auto *chip1 = new RamChip(15);
    //int a = chip1->get();
    //std::cout << std::bitset<32>(a) << std::endl;

    auto ram = new Ram();
    ram->R(0)->set(0);
    ram->R(1)->set(1);
    ram->R(2)->set(2);

    Alu::Add(ram->R(0), ram->R(1));
    Alu::Add(ram->R(0), ram->R(2));

    for(auto idx = 0; idx < ram->Count(); idx++) {
        //std::cout << "R(" << idx << ")=" << ram->R(idx)->get() << std::endl;
        ram->ToBinary(idx);
    }
}
