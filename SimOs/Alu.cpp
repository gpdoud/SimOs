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
void Alu::Mul() {
    auto a = stack->pop();
    auto b = stack->pop();
    stack->push(a * b);
}
void Alu::Div() {
    auto a = stack->pop();
    auto b = stack->pop();
    stack->push(b / a);
}
void Alu::Mod() {
    auto a = stack->pop();
    auto b = stack->pop();
    stack->push(b % a);
}
void Alu::And() {
    auto a = stack->pop();
    auto b = stack->pop();
    stack->push(a & b);
}
void Alu::Or() {
    auto a = stack->pop();
    auto b = stack->pop();
    stack->push(a | b);
}
void Alu::Not() {
    auto a = stack->pop();
    stack->push(~a + 1);
}
void Alu::Xor() {
    auto a = stack->pop();
    auto b = stack->pop();
    stack->push(a ^ b);
}
