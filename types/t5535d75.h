/**
 * Definition: t5535d75
 * Hash: 5535d75
 */

#pragma once

#include "../types.h"
#include "IKBone.h"

#pragma push(pack, 1)

struct t5535d75 : public ComplexRead {
  IKBone unk_6eeeaad;
  DT_FLOAT unk_155967;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
