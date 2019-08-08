#include "Stack.h"

void Stack::push(int i) {
    ram.reg[top] = i;
    top++;
}
int Stack::pop() {
    top--;
    return ram.reg[top];
}
Stack::Stack() {
    top = 0;
}