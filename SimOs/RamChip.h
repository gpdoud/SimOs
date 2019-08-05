#pragma once
class RamChip {
public:
    __int32 *chip;
    void init();
    int get();
    void set(int);
    int operator+(int i);
    int operator-(int i);
    int operator<<(int i);
    int operator>>(int i);
    RamChip operator&(RamChip &rc);
    RamChip();
    RamChip(int i);
};

