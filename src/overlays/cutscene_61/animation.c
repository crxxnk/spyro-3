#include "common.h"

/*
* func_cutscene_61_800769AC() - MATCHING
* https://decomp.me/scratch/AliE1
*/

extern void* D_8006C570; // currentCutscenePtr   -  Points to the current cutscene
extern char  D_8006E548; // cutsceneDataAddress  -  Address of the cutscene data memory block

void func_cutscene_61_800769AC(int index) { // Cutscene_SetCurrentByIndex
    D_8006C570 = (index * 0x10) + &D_8006E548;
}

INCLUDE_ASM("asm/nonmatchings/overlays/cutscene_61/animation", func_cutscene_61_800769CC);

INCLUDE_ASM("asm/nonmatchings/overlays/cutscene_61/animation", func_cutscene_61_800769D4);

INCLUDE_ASM("asm/nonmatchings/overlays/cutscene_61/animation", func_cutscene_61_800769DC);

INCLUDE_ASM("asm/nonmatchings/overlays/cutscene_61/animation", func_cutscene_61_800769FC);

INCLUDE_ASM("asm/nonmatchings/overlays/cutscene_61/animation", func_cutscene_61_80076A04);
