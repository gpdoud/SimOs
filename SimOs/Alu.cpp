#include "Alu.h"
#include "Ram.h"
#include "RamChip.h"

Alu::Alu() {}

void Alu::Add(RamChip *r1, RamChip *r2) {
    r1->set(r1->get() + r2->get());
}