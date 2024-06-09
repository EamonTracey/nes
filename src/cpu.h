enum AddressingMode {
    Accumulator,
    Absolute,
    AbsoluteXIndexed,
    AbsoluteYIndexed,
    Immediate,
    Implied,
    Indirect,
    XIndexedIndirect,
    IndirectYIndexed,
    Relative,
    ZeroPage,
    ZeroPageXIndexed,
    ZeroPageYIndexed
};

struct Instruction {
    void (*instruction)();
    AddressingMode addressing_mode;
};

const struct Instruction instruction_table[16][16] = {{
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                      },
                                                      {
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                      },
                                                      {
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                      },
                                                      {
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                      },
                                                      {
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                      },
                                                      {
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                      },
                                                      {
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                      },
                                                      {
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                      },
                                                      {
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                      },
                                                      {
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                      },
                                                      {
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                      },
                                                      {
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                      },
                                                      {
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                      },
                                                      {
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                      },
                                                      {
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                          {NULL, Immediate},
                                                      },
                                                      {{NULL, Immediate},
                                                       {NULL, Immediate},
                                                       {NULL, Immediate},
                                                       {NULL, Immediate},
                                                       {NULL, Immediate},
                                                       {NULL, Immediate},
                                                       {NULL, Immediate},
                                                       {NULL, Immediate},
                                                       {NULL, Immediate},
                                                       {NULL, Immediate},
                                                       {NULL, Immediate},
                                                       {NULL, Immediate},
                                                       {NULL, Immediate},
                                                       {NULL, Immediate},
                                                       {NULL, Immediate},
                                                       {NULL, Immediate}}};

class Cpu6502 {
   public:
    // Power on the CPU. This initializes register and memory contents.
    void Power();

    // Instruction functions.
    void ADC();
    void AND();
    void ASL();
    void BCC();
    void BCS();
    void BEQ();
    void BIT();
    void BMI();
    void BNE();
    void BPL();
    void BRK();
    void BVC();
    void BVS();
    void CLC();
    void CLD();
    void CLI();
    void CLV();
    void CMP();
    void CPX();
    void CPY();
    void DEC();
    void DEX();
    void DEY();
    void EOR();
    void INC();
    void INX();
    void INY();
    void JMP();
    void JSR();
    void LDA();
    void LDX();
    void LDY();
    void LSR();
    void NOP();
    void ORA();
    void PHA();
    void PHP();
    void PLA();
    void PLP();
    void ROL();
    void ROR();
    void RTI();
    void RTS();
    void SBC();
    void SEC();
    void SED();
    void SEI();
    void STA();
    void STX();
    void STY();
    void TAX();
    void TAY();
    void TSX();
    void TXA();
    void TXS();
    void TYA();

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

    // Internal variables.
    uint8_t opcode;
    AddressingMode addressing_mode;
};
