#pragma once
#include "Ram.h"

class Stack {
    
    Ram ram;
    int top = 0;
public:
    void push(int i);
    int pop();
    Stack();
};

