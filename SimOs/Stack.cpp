#include <iostream>
#include <bitset>
#include "Stack.h"

void Stack::push(int i) {
    ram->reg(top++, i);
}
int Stack::pop() {
    return 0;
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