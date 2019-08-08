#pragma once
#define REGISTER_COUNT (16)
class Ram {
public:
    int reg[REGISTER_COUNT];

    Ram();
    void bin(int i);
};
