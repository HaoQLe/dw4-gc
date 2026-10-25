// beNDMWMdlPlayer: closing the panel (OFCTRL, ONFREEZE, REMOVE, the damage sequences), the number icon,
// leaving a background chip, and the class (0x8034DF40..0x8034E6DC).
#include "beModelCtrl.h"
#include <meta/bePadManager.h>
#include <meta/bePadData.h>
#include <meta/beNDMWGameRam.h>
#include <meta/beDataObjInt.h>
#include <meta/beDataObjIntList.h>
#include <meta/beDataObjBool.h>
#include <meta/beDataObjBoolList.h>
#include <meta/beDataObjStringList.h>
#include <meta/beDataObjListList.h>
#include <meta/igBoolList.h>
#include <meta/igViewerSceneInfoManager.h>
#include <meta/beModelCtrlHITBOX.h>

#pragma auto_inline off

// This file's constant pool (0x80456EA0).
struct beNDMWMdlPlayerPool {
    char KIND_PLAYER[12];
    char PLAYER[8];
    char SQ_DLTM[13][12];       // the attack-delay meter's sequences (reached through lbl_804E7C34)
    char ONE[4];
    char SQ_JUMP[8];
    char SQ_GUARD[12];
    float zero;                 // 0.0f
    float bodyAttackTime;       // 15.0f: frames to repeat the stick flick
    char SQ_FALL[8];
    char SQ_ATCK3[12];
    char NDMWPANEL[12];
    char ISCHECK[8];
    char SQ_ITEM[8];
    char SQ_WAZA[8];
    char GENEEMGHEAL[12];
    char SOUND[8];
    char CURSOR_NG[12];
    char PLAY[8];
    char GENERATEITEM[16];
    char GENERATEWAZA[16];
    char GENERATESTAT[16];
    char Set[4];
    float one;                  // 1.0f
    float four;                 // 4.0f
    float seven;                // 7.0f
    float three;                // 3.0f
    char DROPITEM[12];
    char ACTION1[8];
    char ATDELAY[8];
    char SQ_ATCK2[12];
    char SQ_ATCK1[12];
    char ATTACKDELAY[12];
    char MODELCTRL[12];
    char i_stpnl05[12];
    char ISRUN[8];
    char SUBWND[8];
    char STATUS[8];
    char GENERATE[12];
    char Atck01[8];
    char ACTION[8];
    char ISCOMEND[12];
    char SQ_WAIT[8];
    char Atck02[8];
    char Atck03[8];
    // The players' default names (Shift-JIS: Ichirou, Jirou, Saburou, Shirou), reached through lbl_804E7C70.
    char player1Name[12];
    char player2Name[8];
    char player3Name[12];
    char player4Name[8];
    char dungeons[5][12];       // reached through lbl_804E7C80
    char lobbies[4][12];        // reached through lbl_804E7C94
    char PLAYERPOINT[12];
    char GETMATRIX[12];
    char GAMERAM[8];
    char GETPLAYER[12];
    char HP[4];
    char MHP[4];
    char MMP[4];
    char MP[4];
    char UPDATA[8];
    char DOWNDATA[12];
    char ISUSE[8];
    char GAMESTART[12];
    char BASE_ISUSE[12];
    char POWERSOCKETNAME[16];
    char PLAYERARMS[12];
    char RECALCPLAYER[16];
    char NUMBERCTRL[12];
    char lvnm[8];
    char LEVEL[8];
    char SETVALUE[12];
    char METERCTRL[12];
    char hpmt[8];
    float hundred;              // 100.0f
    char SETPERCENT[12];
    char hpnm[8];
    char mpmt[8];
    char mpnm[8];
    char SETMETAL[12];
    double intToDouble;         // 4503601774854144.0: int to float conversion
    char REMOVE[8];
    char i_pcnumic[12];
    char SQ_OPENP_d[12];        // "SQ_OPENP%d"
    float iconScale;            // 480.0f
    float iconHeight;           // 10.0f
    char SETEFFECT[12];
    char SQ_ENTR[4][12];        // reached through lbl_804E7CA4
    char g_000bcaps[12];
    char BKCHIPBITEXP[16];
};
extern "C" const beNDMWMdlPlayerPool lbl_80456EA0;

extern "C" {
extern const char lbl_80456EAC[];       // "PLAYER"
extern const int lbl_804E7BF0[16];      // the turn-attack slot (0 to 7) of each stick direction bit set, or -1
extern int lbl_804E7C30[];              // [0] = 30: frames a turn-attack slot stays set
extern const char *lbl_804E7C34[13];    // the attack-delay meter's sequences: SQ_DLTM01 .. SQ_DLTM13
extern int lbl_804E7C68[];         // [0] = 0: the initial UPDATA values (this file's .data, not small data)
extern int lbl_804E7C6C[];         // [0] = 0: the initial DOWNDATA values
extern const char *lbl_804E7C70[4];     // the players' default names
extern const char *lbl_804E7C80[5];     // the dungeons where players are metal: dng204b1 .. dng205b3
extern const char *lbl_804E7C94[4];     // the main lobby's stages: stagML02 .. stagML13
extern const char *lbl_804E7CA4[4];     // the background chips' entry sequences: SQ_ENTR1P .. SQ_ENTR4P
extern bool lbl_80561408;               // true
extern const char lbl_805673B0[1];      // ""
extern const igResult kSuccess__3Gap;   // Gap::kSuccess
extern char beNDMWGameRam_meta[];
extern char bePadManager_meta[];
extern char igViewerSceneInfoManager_meta[];
extern char beNDMWMdlPlayer_meta[];
beNDMWMdlPlayerInfoWork *beNDMWMdlPlayerInfoWork_create(void *pool);
beModelCtrlHITBOX *beModelCtrlHITBOX_create(void *pool);
void *memset(void *, int, unsigned int);
void fn_802F24B0(beBaseInfoManager *self);                   // beBaseInfoManager's virtual64
bePadData *bePadManager_getPad(bePadManager *manager, int index);
void fn_80066490(igNamedObject *object, const char *name);   // sets an object's name
void fn_80305EA8(beMessenger *messenger, const char *target);   // opens a request to target
void fn_80306900(beMessenger *messenger, bool value);           // appends a bool argument
void fn_80306B28(beMessenger *messenger, float value);          // appends a float argument
void fn_80306C84(beMessenger *messenger, const float *vector);  // appends a vector argument
void fn_8030650C(beMessenger *messenger, const char *target, const char *infoName, int ramNo, const char *command, long long delay);   // a request to target's RAM, sent after delay
void fn_803AE1A4(beNDMWMdlPlayer *self, beBaseInfoRam *ram);   // the shared step after a sequence starts (called directly; perhaps beNDMWMdlPEBase::virtualB8, no vtable found)
void *fn_80338AB0();                                          // the PanelCloseSeqList enum (SQ_SDMG .. SQ_STUN)
igResult fn_800633C8(void *enumMeta, const char *name, unsigned int *value);   // an enum value by name
// The game RAM's named data objects.
beDataObjInt *fn_8031F3CC(igObject *data, const char *name);
beDataObjIntList *fn_8031F3FC(igObject *data, const char *name);
beDataObjBool *fn_8031F42C(igObject *data, const char *name);
beDataObjBoolList *fn_8031F45C(igObject *data, const char *name);
beDataObjStringList *fn_8031F4BC(igObject *data, const char *name);
}

// The pad buttons, as bePadData's bits (named by what the player does with them).
enum {
    BUTTON_STATUS = 0x0008,     // alone: the status window
    BUTTON_STAT = 0x0200,       // the status panel
    BUTTON_ITEM = 0x0400,       // the item panel
    BUTTON_WAZA = 0x0800,       // the technique panel
    BUTTON_HEAL = 0x1000,       // the emergency heal panel
    BUTTON_JUMP = 0x2000,
    BUTTON_ATTACK = 0x4000,
    BUTTON_GUARD = 0x8000       // pressed: guard; held: the body attack's stick flicks
};

static inline const char *nameOf(beBaseInfo *info) { return info->_name ? info->_name : lbl_805673B0; }

static inline beNDMWMdlPlayerInfoWork *playerWork(beBaseInfoRam *ram, const beNDMWMdlPlayerPool &pool)
{
    return static_cast<beNDMWMdlPlayerInfoWork *>(ramDataOf(ram, pool.ONE)->_work);
}

// Asks the panel manager to open a panel for this player's work; a reply means it opened.
static inline void openPanel(beNDMWMdlPlayer *self, beBaseInfoRam *ram, beNDMWMdlPlayerInfoWork *work, const beNDMWMdlPlayerPool &pool, const char *command)
{
    fn_80305344(self->_messenger, pool.NDMWPANEL, 0, ram->_ramNo);
    fn_80306E2C(self->_messenger, work);
    fn_80305A28(self->_messenger, command);
    if (fn_8030690C(self->_messenger) != 0) work->_isPanel = true;
}

// Closes this player's panel if one is open.
static inline void closePanel(beNDMWMdlPlayer *self, beBaseInfoRam *ram, beNDMWMdlPlayerInfoWork *work, const beNDMWMdlPlayerPool &pool)
{
    if (work->_isPanel) {
        work->_isPanel = false;
        fn_80305ED0(self->_messenger, pool.NDMWPANEL, 0, ram->_ramNo, pool.REMOVE);
    }
}

// Plays the "not allowed" cursor sound.
static inline void playCursorNG(beNDMWMdlPlayer *self, const beNDMWMdlPlayerPool &pool)
{
    fn_80305EA8(self->_messenger, pool.SOUND);
    fn_80306FDC(self->_messenger, pool.CURSOR_NG);
    fn_80305A28(self->_messenger, pool.PLAY);
}

extern "C" {

// OFCTRL: closes the player's panel.
void beNDMWMdlPlayer_virtualA8(beNDMWMdlPlayer *self, beBaseInfoRam *ram)
{
    const beNDMWMdlPlayerPool &pool = lbl_80456EA0;
    closePanel(self, ram, playerWork(ram, pool), pool);
}

// ONFREEZE: closes the player's panel.
void beNDMWMdlPlayer_virtualAC(beNDMWMdlPlayer *self, beBaseInfoRam *ram)
{
    const beNDMWMdlPlayerPool &pool = lbl_80456EA0;
    closePanel(self, ram, playerWork(ram, pool), pool);
}

// After a sequence starts. SQ_WAIT shows the player's number icon (i_pcnumic, SQ_OPENP<n>) over the player; a
// sequence of PanelCloseSeqList (the damage, death, sleep and stun sequences) closes the panel.
void beNDMWMdlPlayer_virtualB8(beNDMWMdlPlayer *self, beBaseInfoRam *ram)
{
    const beNDMWMdlPlayerPool &pool = lbl_80456EA0;
    beBaseInfo *info = ram->_parentInfo;
    beNDMWMdlPlayerInfoWork *work = playerWork(ram, pool);
    if (strcmp(work->_seqCodeName, pool.SQ_WAIT) == 0) {
        int ramNo = ram->_ramNo;
        fn_80305344(self->_messenger, pool.MODELCTRL, nameOf(info), ramNo);
        fn_80306FDC(self->_messenger, pool.i_pcnumic);
        char sequence[12];
        sprintf(sequence, pool.SQ_OPENP_d, ram->_ramNo);
        fn_80306FDC(self->_messenger, sequence);
        fn_80306B28(self->_messenger, pool.iconScale);
        float offset[3];
        offset[0] = pool.zero;
        offset[1] = pool.iconHeight;
        offset[2] = pool.zero;
        fn_80306C84(self->_messenger, offset);
        fn_80306964(self->_messenger, true);
        fn_80306964(self->_messenger, true);
        fn_80305A28(self->_messenger, pool.SETEFFECT);
    }
    if (work->_isPanel) {
        unsigned int value;
        igResult found(fn_800633C8(fn_80338AB0(), work->_seqCodeName, &value));
        if (found.value == kSuccess__3Gap.value) {
            work->_isPanel = false;
            fn_80305ED0(self->_messenger, pool.NDMWPANEL, 0, ram->_ramNo, pool.REMOVE);
        }
    }
    fn_803AE1A4(self, ram);
}

// SQ_ERAS: the player leaves a background chip (g_000bcaps) where it stood, which plays the player's entry
// sequence; a running chip pays out its bits and experience (BKCHIPBITEXP). Closes the panel.
void beNDMWMdlPlayer_virtualB4(beNDMWMdlPlayer *self, beBaseInfoRam *ram)
{
    const beNDMWMdlPlayerPool &pool = lbl_80456EA0;
    beModelCtrlInfoRamData *data = ramDataOf(ram, pool.ONE);
    beNDMWMdlPlayerInfoWork *work = static_cast<beNDMWMdlPlayerInfoWork *>(data->_work);
    fn_80305344(self->_messenger, pool.MODELCTRL, pool.g_000bcaps, ram->_ramNo);
    fn_80306D68(self->_messenger, data->_node->_m);
    fn_80306FDC(self->_messenger, lbl_804E7CA4[ram->_ramNo]);
    fn_80305A28(self->_messenger, pool.GENERATE);
    fn_80305ED0(self->_messenger, pool.MODELCTRL, pool.g_000bcaps, ram->_ramNo, pool.ISRUN);
    if (fn_8030690C(self->_messenger) != 0 && fn_80306A1C(self->_messenger, 0) == true) {
        fn_80305EA8(self->_messenger, pool.GAMERAM);
        fn_80306A40(self->_messenger, ram->_ramNo);
        fn_80305A28(self->_messenger, pool.BKCHIPBITEXP);
    }
    closePanel(self, ram, work, pool);
}

// REMOVE: closes the player's panel.
void beNDMWMdlPlayer_virtualB0(beNDMWMdlPlayer *self, beBaseInfoRam *ram)
{
    const beNDMWMdlPlayerPool &pool = lbl_80456EA0;
    closePanel(self, ram, playerWork(ram, pool), pool);
}

igMetaObject *beNDMWMdlPlayer_virtual58(beNDMWMdlPlayer *) { return metaVar(beNDMWMdlPlayer_meta); }

}
