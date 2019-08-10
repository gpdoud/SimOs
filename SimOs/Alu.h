#pragma once
#include "Stack.h"

class Alu {
public:
    Stack *stack;
    Alu(Stack *stack);
    void Add();
    void Sub();
    void And();
    void Or();
};