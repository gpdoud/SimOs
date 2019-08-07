#pragma once
#include "RamChip.h"

class Alu {

public:
    Alu();
    static void Add(RamChip *r1, RamChip *r2);
};

