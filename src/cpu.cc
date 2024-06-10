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

void Cpu6502::ADC(AddressMode address_mode) {}
void Cpu6502::AND(AddressMode address_mode) {}
void Cpu6502::ASL(AddressMode address_mode) {}
void Cpu6502::BCC(AddressMode address_mode) {}
void Cpu6502::BCS(AddressMode address_mode) {}
void Cpu6502::BEQ(AddressMode address_mode) {}
void Cpu6502::BIT(AddressMode address_mode) {}
void Cpu6502::BMI(AddressMode address_mode) {}
void Cpu6502::BNE(AddressMode address_mode) {}
void Cpu6502::BPL(AddressMode address_mode) {}
void Cpu6502::BRK(AddressMode address_mode) {}
void Cpu6502::BVC(AddressMode address_mode) {}
void Cpu6502::BVS(AddressMode address_mode) {}
void Cpu6502::CLC(AddressMode address_mode) {}
void Cpu6502::CLD(AddressMode address_mode) {}
void Cpu6502::CLI(AddressMode address_mode) {}
void Cpu6502::CLV(AddressMode address_mode) {}
void Cpu6502::CMP(AddressMode address_mode) {}
void Cpu6502::CPX(AddressMode address_mode) {}
void Cpu6502::CPY(AddressMode address_mode) {}
void Cpu6502::DEC(AddressMode address_mode) {}
void Cpu6502::DEX(AddressMode address_mode) {}
void Cpu6502::DEY(AddressMode address_mode) {}
void Cpu6502::EOR(AddressMode address_mode) {}
void Cpu6502::INC(AddressMode address_mode) {}
void Cpu6502::INX(AddressMode address_mode) {}
void Cpu6502::INY(AddressMode address_mode) {}
void Cpu6502::JMP(AddressMode address_mode) {}
void Cpu6502::JSR(AddressMode address_mode) {}
void Cpu6502::LDA(AddressMode address_mode) {}
void Cpu6502::LDX(AddressMode address_mode) {}
void Cpu6502::LDY(AddressMode address_mode) {}
void Cpu6502::LSR(AddressMode address_mode) {}
void Cpu6502::NOP(AddressMode address_mode) {}
void Cpu6502::ORA(AddressMode address_mode) {}
void Cpu6502::PHA(AddressMode address_mode) {}
void Cpu6502::PHP(AddressMode address_mode) {}
void Cpu6502::PLA(AddressMode address_mode) {}
void Cpu6502::PLP(AddressMode address_mode) {}
void Cpu6502::ROL(AddressMode address_mode) {}
void Cpu6502::ROR(AddressMode address_mode) {}
void Cpu6502::RTI(AddressMode address_mode) {}
void Cpu6502::RTS(AddressMode address_mode) {}
void Cpu6502::SBC(AddressMode address_mode) {}
void Cpu6502::SEC(AddressMode address_mode) {}
void Cpu6502::SED(AddressMode address_mode) {}
void Cpu6502::SEI(AddressMode address_mode) {}
void Cpu6502::STA(AddressMode address_mode) {}
void Cpu6502::STX(AddressMode address_mode) {}
void Cpu6502::STY(AddressMode address_mode) {}
void Cpu6502::TAX(AddressMode address_mode) {}
void Cpu6502::TAY(AddressMode address_mode) {}
void Cpu6502::TSX(AddressMode address_mode) {}
void Cpu6502::TXA(AddressMode address_mode) {}
void Cpu6502::TXS(AddressMode address_mode) {}
void Cpu6502::TYA(AddressMode address_mode) {}
