// Gap::Bec::beNDMWMdlEnemy: the model controller of enemies. This file: the kind test and the RAM start (0x8034BAE4..0x8034BB48).
#include "beModelCtrl.h"

#pragma auto_inline off

// This file's constant pool (0x80456C38).
struct beNDMWMdlEnemyPool {
    char KIND_ENEMY[12];
    char ENEMY[8];
    char ONE[4];
    char DATABASE[12];
    char enemy[8];
    char GETDATABASE[12];
    char RARITY[8];
    char SETRAREICON[12];
};
extern "C" const beNDMWMdlEnemyPool lbl_80456C38;

extern "C" {
extern const char lbl_80456C44[];   // "ENEMY"
extern char beNDMWMdlEnemy_meta[];
beNDMWMdlEnemyInfoWork *beNDMWMdlEnemyInfoWork_create(void *pool);
int fn_8031F608(igObject *database, int recNo, const char *field);   // a record's integer field
void fn_80305F9C(beMessenger *messenger, const char *target, const char *infoName, int ramNo);   // opens a request to target's RAM
void fn_803061BC(beMessenger *messenger, const char *command, int, int);                     // sends the request
void fn_803AE1A4(beNDMWMdlEnemy *self, beBaseInfoRam *ram);   // the shared step after a sequence starts (called directly; perhaps beNDMWMdlPEBase::virtualB8, no vtable found)

// Takes the models of kind KIND_ENEMY.
unsigned char beNDMWMdlEnemy_virtual94(beNDMWMdlEnemy *, const char *kind) { return strcmp(kind, lbl_80456C38.KIND_ENEMY) == 0; }

// Registers an enemy RAM for the ENEMY messages.
void beNDMWMdlEnemy_virtual9C(beNDMWMdlEnemy *self, beBaseInfoRam *ram) { fn_80305308(self->_messenger, ram, lbl_80456C44); }

}
