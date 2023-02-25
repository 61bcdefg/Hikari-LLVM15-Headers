#ifndef _ANTI_DEBUGGING_H_
#define _ANTI_DEBUGGING_H_

#include "llvm/IR/PassManager.h"

namespace llvm {

ModulePass *createAntiDebuggingPass(bool flag);
void initializeAntiDebuggingPass(PassRegistry &Registry);

} // namespace llvm

#endif
