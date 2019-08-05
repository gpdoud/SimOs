#include "Ram.h"

RamChip* Ram::R(int i) {
    if(i < RamStack->size()) {
        return RamStack->at(i);
    }
    return nullptr;
}
Ram::Ram() {
    Ram::RamStack = new std::vector<RamChip*>();
    for(auto idx = 0; idx < 2; idx++) {
        Ram::RamStack->push_back(new RamChip(0));
    }
}
Ram::~Ram() {
}
