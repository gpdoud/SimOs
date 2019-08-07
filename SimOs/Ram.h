#include <vector>
#include "RamChip.h"
#pragma once

class Ram {
public:
    std::vector<RamChip*> *RamStack;
    RamChip* R(int i);
    Ram(int i = 3);
    ~Ram();
    void ToBinary(int i);
    int Count();
};

