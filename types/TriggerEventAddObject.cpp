/**
 * Definition: TriggerEventAddObject
 * Hash: 21e30636
 */

#include "TriggerEventAddObject.h"

void TriggerEventAddObject::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&tConditions, base, current);
  current = ptr + 0x3c;
  readData(&fGenerated, base, current);
  current = ptr + 0x40;
  readData(&unk_6cba752, base, current);
  current = ptr + 0x44;
  readData(&unk_e560b0b, base, current);
  current = ptr + 0x48;
  readData(&tDuration, base, current);
  current = ptr + 0x4c;
  readData(&dwTriggerFlags, base, current);
  current = ptr + 0x50;
  readData(&unk_a936bd9, base, current);
  current = ptr + 0x54;
  readData(&tCleanup, base, current);
  current = ptr + 0x6c;
  readData(&unk_49e9257, base, current);
  current = ptr + 0x70;
  readData(&unk_5490979, base, current);
  current = ptr + 0x74;
  readData(&dwPad, base, current);
  current = ptr + 0x78;
  readData(&unk_85269a4, base, current);
  current = ptr + 0x7c;
  readData(&dwActorID, base, current);
  current = ptr + 0x80;
  readData(&snoname, base, current);
  current = ptr + 0x88;
  readData(&dwID, base, current);
  current = ptr + 0x8c;
  readData(&tHardpointLinks, base, current);
  current = ptr + 0x9c;
  readData(&unk_e7c25e0, base, current);
  current = ptr + 0xa0;
  readData(&unk_760871b, base, current);
  current = ptr + 0xa4;
  readData(&unk_beaacd1, base, current);
  current = ptr + 0xa8;
  readData(&unk_af58166, base, current);
  current = ptr + 0xac;
  readData(&unk_3ed00d7, base, current);
  current = ptr + 0xb0;
  readData(&dwSeed, base, current);
  current = ptr + 0xb4;
  readData(&fBillboard, base, current);
  current = ptr + 0xb8;
  readData(&eAddType, base, current);
  current = ptr + 0xbc;
  readData(&unk_fbdc534, base, current);
  current = ptr + 0xc0;
  readData(&unk_f8b13e0, base, current);
  current = ptr + 0xc4;
  readData(&unk_fcc32b8, base, current);
  current = ptr + 0xc8;
  readData(&unk_773852b, base, current);
  current = ptr + 0xcc;
  readData(&unk_62ab747, base, current);
  current = ptr + 0xd0;
  readData(&snoSubtitles, base, current);
  current = ptr + 0xd4;
  readData(&unk_944e28b, base, current);
  current = ptr + 0xd8;
  readData(&unk_1426000, base, current);
  current = ptr + 0xdc;
  readData(&unk_cb43646, base, current);
  current = ptr + 0xe0;
  readData(&unk_24f5a5c, base, current);
  current = ptr + 0xe4;
  readData(&tLookLink, base, current);
  current = ptr + 0xe8;
  readData(&unk_48fd494, base, current);
  current = ptr + 0xec;
  readData(&unk_6b8bffc, base, current);
  current = ptr + 0xf0;
  readData(&unk_e1f5441, base, current);
  current = ptr + 0xf8;
  readData(&unk_9967c81, base, current);
  current = ptr + 0x108;
  readData(&dwSegmentsStep, base, current);
  current = ptr + 0x10c;
  readData(&unk_6c0cb90, base, current);
  current = ptr + 0x110;
  readData(&nLocalPlayerIndex, base, current);
  current = ptr + 0x114;
  readData(&flScale, base, current);
  current = ptr + 0x118;
  readData(&unk_b0f4eeb, base, current);
  current = ptr + 0x11c;
  readData(&vecScalar, base, current);
  current = ptr + 0x124;
  readData(&transform, base, current);
  current = ptr + 0x140;
  readData(&unk_315ce85, base, current);
  current = ptr + 0x148;
  readData(&unk_c7fa18a, base, current);
  current = ptr + 0x150;
  readData(&idRActorAttachment, base, current);
  current = ptr + 0x154;
  readData(&nPermIndex, base, current);
  current = ptr + 0x158;
  readData(&unk_c90434d, base, current);
  current = ptr + 0x15c;
  readData(&unk_33e4eec, base, current);
  current = ptr + 0x160;
  readData(&unk_e0d3870, base, current);
  current = ptr + 0x164;
  readData(&unk_a45e6bd, base, current);
  current = ptr + 0x168;
  readData(&unk_36bc3de, base, current);
  current = ptr + 0x16c;
  readData(&nPriority, base, current);
  current = ptr + 0x170;
  readData(&unk_245c537, base, current);
  current = ptr + 0x198;
  readData(&ptLightInstanceData, base, current);
  ptr += 0x1a8;
}
