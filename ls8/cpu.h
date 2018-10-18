#ifndef _CPU_H_
#define _CPU_H_

// Holds all information about the CPU
struct cpu {
  // TODO
  // PC
     // `PC`: Program Counter, address of the currently executing instruction
  unsigned char PC;
  // registers (array)
  unsigned char reg[8];
  // ram (array)
  unsigned char ram[256];
};

//Special register values
#define STACK_POINTER 5

// ALU operations
enum alu_op {
	ALU_MUL
	// Add more here
};

// Instructions

// These use binary literals. If these aren't available with your compiler, hex
// literals should be used.

#define LDI  0b10000010
// TODO: more instructions here. These can be used in cpu_run().
#define PRN  0b01000111
#define HLT  0b00000001
#define MUL  0b10100010
#define PUSH  0b01000101
#define POP  0b01000110

// Function declarations
// extern void cpu_load(struct cpu *cpu);
extern void cpu_load(char *filename, struct cpu *cpu);
extern void cpu_init(struct cpu *cpu);
extern void cpu_run(struct cpu *cpu);

#endif
