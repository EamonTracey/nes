#ifndef CPU_H
#define CPU_H

#include <cstdint>

enum AddressMode {
    Accumulator,
    Absolute,
    AbsoluteX,
    AbsoluteY,
    Immediate,
    Implied,
    Indirect,
    IndirectX,
    IndirectY,
    Relative,
    ZeroPage,
    ZeroPageX,
    ZeroPageY
};

class Cpu6502 {
   public:
    // CPU initializer.
    Cpu6502();

    // CPU destructor.
    ~Cpu6502();

    // Power on the CPU. This initializes register and memory contents.
    void Power();

    // Instruction functions.
    void ADC(AddressMode);
    void AND(AddressMode);
    void ASL(AddressMode);
    void BCC(AddressMode);
    void BCS(AddressMode);
    void BEQ(AddressMode);
    void BIT(AddressMode);
    void BMI(AddressMode);
    void BNE(AddressMode);
    void BPL(AddressMode);
    void BRK(AddressMode);
    void BVC(AddressMode);
    void BVS(AddressMode);
    void CLC(AddressMode);
    void CLD(AddressMode);
    void CLI(AddressMode);
    void CLV(AddressMode);
    void CMP(AddressMode);
    void CPX(AddressMode);
    void CPY(AddressMode);
    void DEC(AddressMode);
    void DEX(AddressMode);
    void DEY(AddressMode);
    void EOR(AddressMode);
    void INC(AddressMode);
    void INX(AddressMode);
    void INY(AddressMode);
    void JMP(AddressMode);
    void JSR(AddressMode);
    void LDA(AddressMode);
    void LDX(AddressMode);
    void LDY(AddressMode);
    void LSR(AddressMode);
    void NOP(AddressMode);
    void ORA(AddressMode);
    void PHA(AddressMode);
    void PHP(AddressMode);
    void PLA(AddressMode);
    void PLP(AddressMode);
    void ROL(AddressMode);
    void ROR(AddressMode);
    void RTI(AddressMode);
    void RTS(AddressMode);
    void SBC(AddressMode);
    void SEC(AddressMode);
    void SED(AddressMode);
    void SEI(AddressMode);
    void STA(AddressMode);
    void STX(AddressMode);
    void STY(AddressMode);
    void TAX(AddressMode);
    void TAY(AddressMode);
    void TSX(AddressMode);
    void TXA(AddressMode);
    void TXS(AddressMode);
    void TYA(AddressMode);

    // The 6502 features three general-purpose registers, a status register, a
    // stack pointer, and a program counter.
    uint8_t accumulator;
    uint8_t register_x;
    uint8_t register_y;
    uint8_t status;
    uint8_t stack_pointer;
    uint16_t program_counter;

    // The 6502 features a 16-bit address space. Thus, there are 2 ** 16 =
    // 65,536 unique addresses that each store 1 byte.
    uint8_t memory[65536];
};

struct Instruction {
    void (Cpu6502::*instruction)(AddressMode);
    AddressMode addressing_mode;
};

static const struct Instruction instruction_table[] = {
    {&Cpu6502::BRK, Implied},     {&Cpu6502::ORA, Indirect},
    {nullptr, Implied},           {nullptr, Implied},
    {nullptr, Implied},           {&Cpu6502::ORA, ZeroPage},
    {&Cpu6502::ASL, ZeroPage},    {nullptr, Implied},
    {&Cpu6502::PHP, Implied},     {&Cpu6502::ORA, Immediate},
    {&Cpu6502::ASL, Accumulator}, {nullptr, Implied},
    {nullptr, Implied},           {&Cpu6502::ORA, Absolute},
    {&Cpu6502::ASL, Absolute},    {nullptr, Implied},

    {&Cpu6502::BPL, Relative},    {&Cpu6502::ORA, IndirectY},
    {nullptr, Implied},           {nullptr, Implied},
    {nullptr, Implied},           {&Cpu6502::ORA, ZeroPageX},
    {&Cpu6502::ASL, ZeroPageX},   {nullptr, Implied},
    {&Cpu6502::CLC, Implied},     {&Cpu6502::ORA, AbsoluteY},
    {nullptr, Implied},           {nullptr, Implied},
    {nullptr, Implied},           {&Cpu6502::ORA, AbsoluteX},
    {&Cpu6502::ASL, AbsoluteX},   {nullptr, Implied},

    {&Cpu6502::JSR, Absolute},    {&Cpu6502::AND, IndirectX},
    {nullptr, Implied},           {nullptr, Implied},
    {&Cpu6502::BIT, ZeroPage},    {&Cpu6502::AND, ZeroPage},
    {&Cpu6502::ROL, ZeroPage},    {nullptr, Implied},
    {&Cpu6502::PLP, Implied},     {&Cpu6502::AND, Immediate},
    {&Cpu6502::ROL, Accumulator}, {nullptr, Implied},
    {&Cpu6502::BIT, Absolute},    {&Cpu6502::AND, Absolute},
    {&Cpu6502::ROL, Absolute},    {nullptr, Implied},

    {&Cpu6502::BMI, Relative},    {&Cpu6502::AND, IndirectY},
    {nullptr, Implied},           {nullptr, Implied},
    {nullptr, Implied},           {&Cpu6502::AND, ZeroPageX},
    {&Cpu6502::ROL, ZeroPageX},   {nullptr, Implied},
    {&Cpu6502::SEC, Implied},     {&Cpu6502::AND, AbsoluteY},
    {nullptr, Implied},           {nullptr, Implied},
    {nullptr, Implied},           {&Cpu6502::AND, AbsoluteX},
    {&Cpu6502::ROL, AbsoluteX},   {nullptr, Implied},

    {&Cpu6502::RTI, Implied},     {&Cpu6502::EOR, IndirectX},
    {nullptr, Implied},           {nullptr, Implied},
    {nullptr, Implied},           {&Cpu6502::EOR, ZeroPage},
    {&Cpu6502::LSR, ZeroPage},    {nullptr, Implied},
    {&Cpu6502::PHA, Implied},     {&Cpu6502::EOR, Immediate},
    {&Cpu6502::LSR, Accumulator}, {nullptr, Implied},
    {&Cpu6502::JMP, Absolute},    {&Cpu6502::EOR, Absolute},
    {&Cpu6502::LSR, Absolute},    {nullptr, Implied},

    {&Cpu6502::BVC, Relative},    {&Cpu6502::EOR, IndirectY},
    {nullptr, Implied},           {nullptr, Implied},
    {nullptr, Implied},           {&Cpu6502::EOR, ZeroPageX},
    {&Cpu6502::LSR, ZeroPageX},   {nullptr, Implied},
    {&Cpu6502::CLI, Implied},     {&Cpu6502::EOR, AbsoluteY},
    {nullptr, Implied},           {nullptr, Implied},
    {nullptr, Implied},           {&Cpu6502::EOR, AbsoluteX},
    {&Cpu6502::LSR, AbsoluteX},   {nullptr, Implied},

    {&Cpu6502::RTS, Implied},     {&Cpu6502::ADC, IndirectX},
    {nullptr, Implied},           {nullptr, Implied},
    {nullptr, Implied},           {&Cpu6502::ADC, ZeroPage},
    {&Cpu6502::ROR, ZeroPage},    {nullptr, Implied},
    {&Cpu6502::PLA, Implied},     {&Cpu6502::ADC, Immediate},
    {&Cpu6502::ROR, Accumulator}, {nullptr, Implied},
    {&Cpu6502::JMP, Indirect},    {&Cpu6502::ADC, Absolute},
    {&Cpu6502::ROR, Absolute},    {nullptr, Implied},

    {&Cpu6502::BVS, Relative},    {&Cpu6502::ADC, IndirectY},
    {nullptr, Implied},           {nullptr, Implied},
    {nullptr, Implied},           {&Cpu6502::ADC, ZeroPageX},
    {&Cpu6502::ROR, ZeroPageX},   {nullptr, Implied},
    {&Cpu6502::SEI, Implied},     {&Cpu6502::ADC, AbsoluteY},
    {nullptr, Implied},           {nullptr, Implied},
    {nullptr, Implied},           {&Cpu6502::ADC, AbsoluteX},
    {&Cpu6502::ROR, AbsoluteX},   {nullptr, Implied},

    {nullptr, Implied},           {&Cpu6502::STA, IndirectX},
    {nullptr, Implied},           {nullptr, Implied},
    {&Cpu6502::STY, ZeroPage},    {&Cpu6502::STA, ZeroPage},
    {&Cpu6502::STX, ZeroPage},    {nullptr, Implied},
    {&Cpu6502::DEY, Implied},     {nullptr, Implied},
    {&Cpu6502::TXA, Implied},     {nullptr, Implied},
    {&Cpu6502::STY, Absolute},    {&Cpu6502::STA, Absolute},
    {&Cpu6502::STX, Absolute},    {nullptr, Implied},

    {&Cpu6502::BCC, Relative},    {&Cpu6502::STA, IndirectY},
    {nullptr, Implied},           {nullptr, Implied},
    {&Cpu6502::STY, ZeroPageX},   {&Cpu6502::STA, ZeroPageX},
    {&Cpu6502::STX, ZeroPageY},   {nullptr, Implied},
    {&Cpu6502::TYA, Implied},     {&Cpu6502::STA, AbsoluteY},
    {&Cpu6502::TXS, Implied},     {nullptr, Implied},
    {nullptr, Implied},           {&Cpu6502::STA, AbsoluteX},
    {nullptr, Implied},           {nullptr, Implied},

    {&Cpu6502::LDY, Immediate},   {&Cpu6502::LDA, IndirectX},
    {&Cpu6502::LDX, Immediate},   {nullptr, Implied},
    {&Cpu6502::LDY, ZeroPage},    {&Cpu6502::LDA, ZeroPage},
    {&Cpu6502::LDX, ZeroPage},    {nullptr, Implied},
    {&Cpu6502::TAY, Implied},     {&Cpu6502::LDA, Immediate},
    {&Cpu6502::TAX, Implied},     {nullptr, Implied},
    {&Cpu6502::LDY, Absolute},    {&Cpu6502::LDA, Absolute},
    {&Cpu6502::LDX, Absolute},    {nullptr, Implied},

    {&Cpu6502::BCS, Relative},    {&Cpu6502::LDA, IndirectY},
    {nullptr, Implied},           {nullptr, Implied},
    {&Cpu6502::LDY, ZeroPageX},   {&Cpu6502::LDA, ZeroPageX},
    {&Cpu6502::LDX, ZeroPageY},   {nullptr, Implied},
    {&Cpu6502::CLV, Implied},     {&Cpu6502::LDA, AbsoluteY},
    {&Cpu6502::TSX, Implied},     {nullptr, Implied},
    {&Cpu6502::LDY, AbsoluteX},   {&Cpu6502::LDA, AbsoluteX},
    {&Cpu6502::LDX, AbsoluteY},   {nullptr, Implied},

    {&Cpu6502::CPY, Immediate},   {&Cpu6502::CMP, IndirectX},
    {nullptr, Implied},           {nullptr, Implied},
    {&Cpu6502::CPY, ZeroPage},    {&Cpu6502::CMP, ZeroPage},
    {&Cpu6502::DEC, ZeroPage},    {nullptr, Implied},
    {&Cpu6502::INY, Implied},     {&Cpu6502::CMP, Immediate},
    {&Cpu6502::DEX, Implied},     {nullptr, Implied},
    {&Cpu6502::CPY, Absolute},    {&Cpu6502::CMP, Absolute},
    {&Cpu6502::DEC, Absolute},    {nullptr, Implied},

    {&Cpu6502::BNE, Relative},    {&Cpu6502::CMP, IndirectY},
    {nullptr, Implied},           {nullptr, Implied},
    {nullptr, Implied},           {&Cpu6502::CMP, ZeroPageX},
    {&Cpu6502::DEC, ZeroPageX},   {nullptr, Implied},
    {&Cpu6502::CLD, Implied},     {&Cpu6502::CMP, AbsoluteY},
    {nullptr, Implied},           {nullptr, Implied},
    {nullptr, Implied},           {&Cpu6502::CMP, AbsoluteX},
    {&Cpu6502::DEC, AbsoluteX},   {nullptr, Implied},

    {&Cpu6502::CPX, Immediate},   {&Cpu6502::SBC, IndirectX},
    {nullptr, Implied},           {nullptr, Implied},
    {&Cpu6502::CPX, ZeroPage},    {&Cpu6502::SBC, ZeroPage},
    {&Cpu6502::INC, ZeroPage},    {nullptr, Implied},
    {&Cpu6502::INX, Implied},     {&Cpu6502::SBC, Immediate},
    {&Cpu6502::NOP, Implied},     {nullptr, Implied},
    {&Cpu6502::CPX, Absolute},    {&Cpu6502::SBC, Absolute},
    {&Cpu6502::INC, Absolute},    {nullptr, Implied},

    {&Cpu6502::BEQ, Relative},    {&Cpu6502::SBC, IndirectY},
    {nullptr, Implied},           {nullptr, Implied},
    {nullptr, Implied},           {&Cpu6502::SBC, ZeroPageX},
    {&Cpu6502::INC, ZeroPageX},   {nullptr, Implied},
    {&Cpu6502::SED, Implied},     {&Cpu6502::SBC, AbsoluteY},
    {nullptr, Implied},           {nullptr, Implied},
    {nullptr, Implied},           {&Cpu6502::SBC, AbsoluteX},
    {&Cpu6502::INC, AbsoluteX},   {nullptr, Implied}};

#endif
