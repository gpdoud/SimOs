#include <iostream>
#include <bitset>
#include "Ram.h"
#include "RamChip.h"


RamChip* Ram::R(int i) {
    if(i < RamStack->size()) {
        return RamStack->at(i);
    }
    return nullptr;
}
int Ram::Count() {
    return RamStack->size();
}
void Ram::ToBinary(int i) {
    auto anInt = R(i)->get();
    std::cout << std::bitset<32>(anInt) << std::endl;

}
Ram::Ram(int i) {
    Ram::RamStack = new std::vector<RamChip*>();
    for(auto idx = 0; idx < i; idx++) {
        Ram::RamStack->push_back(new RamChip(0));
    }
}
Ram::~Ram() {
}
