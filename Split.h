//===- FlatteningIncludes.h - Flattening Obfuscation pass------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// This file contains includes and defines for the split basicblock pass
//
//===----------------------------------------------------------------------===//

#ifndef _SPLIT_H_
#define _SPLIT_H_

#include "llvm/IR/PassManager.h"

namespace llvm {

FunctionPass *createSplitBasicBlockPass(bool flag);
void initializeSplitBasicBlockPass(PassRegistry &Registry);

} // namespace llvm

#endif
