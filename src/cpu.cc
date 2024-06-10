#include "cpu.h"

Cpu6502::Cpu6502() {}

Cpu6502::~Cpu6502() {}

void Cpu6502::Power() {
    accumulator = 0;
    register_x = 0;
    register_y = 0;
    status = 0b00100100;
    stack_pointer = 0x00FF;
    program_counter = 0xFFFC;
}
