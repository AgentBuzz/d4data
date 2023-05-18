/**
 * Definition: UIDialogDefinition
 * Hash: ba2ee837
 */

#pragma once

#include "../types.h"
#include "UIControlTemplate.h"
#include "UIStyleResource.h"

#pragma push(pack, 1)

struct UIDialogDefinition : public ComplexRead {
  UIControlTemplate unk_d01dfb6;
  DT_VARIABLEARRAY<UIControlTemplate> tTemplates;
  DT_VARIABLEARRAY<UIStyleResource> ptStyles;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
