#include <iostream>
#include <bitset>
#include "Stack.h"

void Stack::push(int i) {
    ram->reg(top++, i);
}
int Stack::pop() {
    auto i = ram->reg(--top);
    ram->reg(top, 0); // set unused stack back to zreo
    return i;
}
int Stack::peek(int i) {
    return ram->reg(i);
}
void Stack::bin() {
}
Stack::Stack(Ram *r, int top) {
    ram = r;
    Stack::top = top;
}