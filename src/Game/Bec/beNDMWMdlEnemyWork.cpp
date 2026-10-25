// beNDMWMdlEnemy: building an enemy RAM's work (0x8034BB48..0x8034BDC8).
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

// Builds an enemy RAM's work from its request (record number and HP); a rare enemy (by its database record's
// RARITY) shows the rare icon. The RAM is then placed as its message says.
void beNDMWMdlEnemy_virtual98(beNDMWMdlEnemy *self, beBaseInfoRam *ram)
{
    const beNDMWMdlEnemyPool &pool = lbl_80456C38;
    beBaseInfo *info = ram->_parentInfo;
    beModelCtrlInfoRamData *data = ramDataOf(ram, pool.ONE);
    beNDMWMdlEnemyInfoWork *created = beNDMWMdlEnemyInfoWork_create(poolFor(self, lbl_8056225C));
    Ref<beNDMWMdlEnemyInfoWork> work(created);
    if (data->_work) release(data->_work);
    data->_work = created;
    if (fn_80306A30(self->_messenger) != 0) {
        work->_recNo = fn_80306B00(self->_messenger, 0);
        work->_mHp->_data = fn_80306B00(self->_messenger, 1);
        work->_hp->_data = fn_80306B00(self->_messenger, 1);
        fn_80306604(self->_messenger);
        fn_80305ED0(self->_messenger, pool.DATABASE, pool.enemy, 0, pool.GETDATABASE);
        int rarity = fn_8031F608(fn_80306FB4(self->_messenger, 0), work->_recNo, pool.RARITY);
        if (rarity) {
            fn_80305F9C(self->_messenger, pool.ENEMY, nameOrEmpty(info), ram->_ramNo);
            fn_80306A40(self->_messenger, rarity);
            fn_803061BC(self->_messenger, pool.SETRAREICON, 0, 60);
        }
        fn_803067A0(self->_messenger);
    }
    fn_8030D610(self, ram);
}

}
