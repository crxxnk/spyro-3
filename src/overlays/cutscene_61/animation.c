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

//-------------------------------------------------

/*
* func_cutscene_61_800769CC() - MATCHING
! Unimplemented function (empty)
*/

void func_cutscene_61_800769CC(void) {

}

//-------------------------------------------------

/*
* func_cutscene_61_800769D4() - MATCHING
! Unimplemented function (empty)
*/

void func_cutscene_61_800769D4(void) {

}

//-------------------------------------------------

/*
* func_cutscene_61_800769DC() - MATCHING
* IDENTICAL TO func_cutscene_61_800769AC
* https://decomp.me/scratch/VH7si
*/

void func_cutscene_61_800769DC(int index) {
    D_8006C570 = (index * 0x10) + &D_8006E548;
}

//-------------------------------------------------

/*
* func_cutscene_61_800769FC() - MATCHING
! Unimplemented function (empty)
*/

void func_cutscene_61_800769FC(void) {

}

//-------------------------------------------------

/*
* func_cutscene_61_80076A04() - MATCHING
! Unimplemented function (empty)
*/

void func_cutscene_61_80076A04(void) {

}
