/**
 * Definition: UIWrapPanelStyle
 * Hash: 4873be59
 */

#include "UIWrapPanelStyle.h"

void UIWrapPanelStyle::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&hParentStyle, base, current);
  current = ptr + 0x18;
  readData(&unk_441f783, base, current);
  current = ptr + 0x20;
  readData(&unk_b835d15, base, current);
  current = ptr + 0x30;
  readData(&tConsoleInput, base, current);
  current = ptr + 0x40;
  readData(&unk_b4f614c, base, current);
  current = ptr + 0x50;
  readData(&unk_725129e, base, current);
  ptr += 0x60;
}
