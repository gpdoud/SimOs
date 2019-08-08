#pragma once
#include "RamChip.h"

class Alu {

public:
    Alu();
    static void Add(RamChip r1, RamChip r2);
    static void Sub(RamChip r1, RamChip r2);
    static void And(RamChip r1, RamChip r2);
};

