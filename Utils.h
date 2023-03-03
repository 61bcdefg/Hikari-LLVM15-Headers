#ifndef _UTILS_H_
#define _UTILS_H_

#include "llvm/IR/Module.h"
#include <string>

namespace llvm {

void fixStack(Function *f);
std::string readAnnotate(Function *f);
bool toObfuscate(bool flag, Function *f, std::string attribute);
bool hasApplePtrauth(Module *M);
void FixBasicBlockConstantExpr(BasicBlock *BB);
void FixFunctionConstantExpr(Function *Func);
void turnOffOptimization(Function *f);
void writeAnnotation(Function *f, std::string annotation);
#if 0
std::map<GlobalValue*, StringRef> BuildAnnotateMap(Module& M);
#endif

} // namespace llvm

#endif
