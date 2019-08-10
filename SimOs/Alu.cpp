#include "Alu.h"
#include "Stack.h"

Alu::Alu(Stack *stack) {
    this->stack = stack;
}
void Alu::Add() {
    auto a = stack->pop();
    auto b = stack->pop();
    stack->push(a + b);
}
void Alu::Sub() {
    auto a = stack->pop();
    auto b = stack->pop();
    stack->push(a - b);
}
void Alu::And() {
    auto a = stack->pop();
    auto b = stack->pop();
    auto c = a & b;
}
void Alu::Or() {
    auto a = stack->pop();
    auto b = stack->pop();
    auto c = a | b;
}
