#pragma once
#include "Stack.h"

class Alu {
public:
    Stack *stack;
    Alu(Stack *stack);
    void Add();
    void Sub();
    void Mul();
    void Div();
    void Mod();
    void And();
    void Or();
    void Not();
    void Xor();
};