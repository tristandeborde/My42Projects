#include "InstructionSub.hpp"

InstructionSub::InstructionSub(void): IInstruction(eTokenType::sub) {
	return;
}

InstructionSub::~InstructionSub(void) {
	return;
}

bool InstructionSub::check() {
	return true;
}

void InstructionSub::run(std::vector<IOperand const *> &pile) const {
	if (pile.size() < 2)
		throw pileSizeException("Sub", 2);

	IOperand const *op1 = pile.back();
	pile.pop_back();
	IOperand const *op2 = pile.back();
	pile.pop_back();

	IOperand const *op3 = (*op2) - (*op1);
	pile.push_back(op3);
	return;
}
