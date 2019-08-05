#include "RamChip.h"

void RamChip::init() {
    chip = new __int32;
    RamChip::set(0);
}
int RamChip::get() {
    return (int)* chip;
}
void RamChip::set(int i) {
    *chip = i;
}
int RamChip::operator+(int i) {
    return RamChip::get() + i;
}
int RamChip::operator-(int i) {
    return RamChip::get() - i;
}
int RamChip::operator<<(int i) {
    return RamChip::get() << i;
}
int RamChip::operator>>(int i) {
    return RamChip::get() >> i;
}
RamChip RamChip::operator&(RamChip &rc) {
    return RamChip(*this & rc);
}
RamChip::RamChip() {
    init();
}
RamChip::RamChip(int i) {
    init();
    RamChip::set(i);
}
