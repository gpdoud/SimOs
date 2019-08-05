#include <vector>
#include "RamChip.h"
#pragma once

class Ram {
public:
    std::vector<RamChip*> *RamStack;
    RamChip* R(int i);
    Ram();
    ~Ram();
};

