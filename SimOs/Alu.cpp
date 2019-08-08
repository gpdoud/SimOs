#include "Alu.h"
#include "Ram.h"
#include "RamChip.h"

Alu::Alu() {}

void Alu::Add(RamChip r1, RamChip r2) {
    r1.set(r1.get() + r2.get());
}
void Alu::Sub(RamChip r1, RamChip r2) {
    r1.set(r1.get() - r2.get());
}
void Alu::And(RamChip r1, RamChip r2) {
    auto rx = r1 & r2;
    r1.set(rx.get());
}
