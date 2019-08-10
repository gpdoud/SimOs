#include <iostream>
#include <bitset>
#include "Ram.h"

int Ram::operator[](int idx) {
    return reg(idx);
}
int Ram::reg(int idx) {
    return _reg[idx];
}
void Ram::reg(int idx, int val) {
    _reg[idx] = val;
}
int Ram::max() {
    return NBR_REGS;
}
void Ram::bin(int idx) {
    std::cout << std::bitset<32>(_reg[idx]) << std::endl;
}
Ram::Ram() {
    _reg = new int[NBR_REGS];
    for(auto idx = 0; idx < NBR_REGS; idx++) {
        _reg[idx] = 0;
    }
}
Ram::~Ram() {
    delete _reg;
}
