#include "RamChip.h"

void RamChip::init() {
    chip = 0;
    RamChip::set(0);
}
int RamChip::get() {
    return (int) chip;
}
void RamChip::set(int i) {
    chip = i;
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
RamChip RamChip::operator&(RamChip rc) {
    auto irc = rc.chip;
    return chip & irc;
}
RamChip::RamChip() {
    init();
}
RamChip::RamChip(int i) {
    init();
    RamChip::set(i);
}
