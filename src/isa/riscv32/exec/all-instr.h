#include "cpu/exec.h"

make_EHelper(add);
make_EHelper(sub);
make_EHelper(sll);
make_EHelper(srl);
make_EHelper(sra);
make_EHelper(slt);
make_EHelper(sltu);
make_EHelper(xor);
make_EHelper(or);
make_EHelper(and);
make_EHelper(auipc);
make_EHelper(lui);

make_EHelper(ld);
make_EHelper(lds);
make_EHelper(st);

make_EHelper(jal);
make_EHelper(jalr);
make_EHelper(branch);

make_EHelper(inv);
make_EHelper(nemu_trap);

make_EHelper(mul);
make_EHelper(mulh);
make_EHelper(div);
make_EHelper(divu);
make_EHelper(rem);
make_EHelper(remu);
