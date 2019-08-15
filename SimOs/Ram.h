#pragma once
class Ram {

    int* _reg;

public:
// 1 MB
    const int NBR_REGS = (1024 * 1024);
    int reg(int idx);
    void reg(int idx, int val);
    Ram();
    ~Ram();
    int max();
    void bin(int i);
    int operator[](int idx);
};
