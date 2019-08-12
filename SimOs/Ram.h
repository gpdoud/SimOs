#pragma once
// 1 MB
#define NBR_REGS (1024 * 1024)
class Ram {

    int* _reg;

public:
    int reg(int idx);
    void reg(int idx, int val);
    Ram();
    ~Ram();
    int max();
    void bin(int i);
    int operator[](int idx);
};
