// Gap::Bec::beModelCtrl (0x803082A4..0x8030F9F0): the model controller, which runs the game's characters,
// bullets, effects and objects. Each model is a RAM (beBaseInfoRam) of a beModelCtrlInfo; its state is the RAM's
// "ONE" data (beModelCtrlInfoRamData: the scene node and a beModelCtrlInfoWork). The subclasses (beNDMWMdl*)
// choose the model kinds they take (virtual94) and build their work (virtual98).
#ifndef GAME_BEC_BEMODELCTRL_H
#define GAME_BEC_BEMODELCTRL_H
#include <meta/beModelCtrl.h>
#include <meta/beModelCtrlInfo.h>
#include <meta/beModelCtrlInfoWork.h>
#include <meta/beModelCtrlInfoRamData.h>
#include <meta/beModelCtrlInfoAI.h>
#include <meta/beModelCtrlInfoDataAIH.h>
#include <meta/beModelCtrlInfoDataAIM.h>
#include <meta/beModelCtrlInfoDataHit.h>
#include <meta/beModelCtrlInfoDataSeq.h>
#include <meta/beModelCtrlInfoDataTrc.h>
#include <meta/beModelCtrlInfoHitBody.h>
#include <meta/beModelCtrlInfoRideOn.h>
#include <meta/beModelCtrlInfoRideOn2.h>
#include <meta/beModelCtrlInfoRideOn3.h>
#include <meta/beModelCtrlInfoRideOn4.h>
#include <meta/beModelCtrlAIMap_2.h>
#include <meta/beModelCtrlAIMapList.h>
#include <meta/beModelCtrlAIData.h>
#include <meta/beModelCtrlAIDataList.h>
#include <meta/beModelCtrlData.h>
#include <meta/beModelCtrlNode2.h>
#include <meta/beModelCtrlMoveObject.h>
#include <meta/beModelCtrlMoveObjectList.h>
#include <meta/beModelCtrlSubCom.h>
#include <meta/beModelCtrlSubComBase.h>
#include <meta/beBaseInfo.h>
#include <meta/beBaseInfoRam.h>
#include <meta/beBaseInfoData.h>
#include <meta/beBaseInfoDataList.h>
#include <meta/beMessenger.h>
#include <meta/beSystem.h>
#include <meta/beLua.h>
#include <meta/beTargetObj.h>
#include <meta/beDataObjInt.h>
#include <meta/igRandomNumber.h>
#include <meta/igAABox.h>
#include <meta/beModelCtrlMOVE.h>
#include <meta/beModelCtrlMOVEEX.h>
#include <meta/beModelCtrlMOVERL.h>
#include <meta/beModelCtrlPDMOVE.h>
#include <meta/beModelCtrlLABELCTRL.h>
#include <meta/beModelCtrlLUACALL.h>
#include <meta/beModelCtrlMUTEKI.h>
#include <meta/igNamedObjectList.h>
#include <meta/igTransformRecorder.h>
#include <meta/igStringRefList.h>
#include <meta/igIntList.h>
#include <igCore/igStringRef.h>
#include <meta/igFloatList.h>
#include <game/Ref.h>
#include <game/List.h>
#include <game/Pool.h>
#include <game/StringPool.h>
#include <game/Virtual.h>

using namespace Meta;

// The constant pool of beModelCtrl's file (0x80426678): its strings and floating-point constants, in the order
// the original file first uses them. Code reads them as offsets from the pool's address, so the pool is
// declared as one object.
struct beModelCtrlPool {
    char HIT[4];
    float zero;                     // 0.0f
    float half;                     // 0.5f
    char MODELCTRL[12];
    char HITPLAYERBULLET[16];
    char HITPLAYERTALK[16];
    char HITENEMYBULLET[16];
    char ONE[4];                    // the name of a model RAM's data
    char AITIMER[8];
    char NEAR[8];
    char WPOS[8];
    char PLAYER[8];
    float nanosecondsPerSecond;     // 1e9f
    float framesPerSecond;          // 60.0f
    char SQ_WALK[8];
    char KIND_EBULLET[16];
    char ENEMY[12];
    double sqrtHalf;                // MSL's sqrtf: 0.5
    double sqrtThree;               // 3.0
    double sqrtZero;                // 0.0
    char onWalk[8];
    char toWalk[8];
    char toWait[8];
    char isLive[8];
    char onFall[8];
    char noFall[8];
    char AIM[4];
    char AIH[4];
    char SQ_NONE[8];
    char SQ_WAIT[8];
    char ACTION[8];
    char GETMATRIX[12];
    float one;                      // 1.0f
    float f110;                     // 0.36f
    float f114;                     // 0.6f
    char HITWALL[8];
    char HITWALLFULL[12];
    char HITLANDDELIVER[16];
    char WHit[8];
    char HITFLOORCHECK[16];
    char HITFLOORADJUST[16];
    char SQ_SLEP[8];
    char SQ_FALL[8];
    char FHit[8];
    float three;                    // 3.0f
    char KEIKATIMER[12];
    float degreesToRadians;         // 0.0174533f
    float f190;                     // 1.25f
    char Stop[8];
    char Move[8];
    char Push[8];
    char Back[8];
    char Jump[8];
    char Fall[8];
    char JOINT[8];
    char GETTRCDATA[12];
    char luaFileFormat[12];         // "%s_%s.lua"
    char BHit[8];
    char aim[4];
    char WPos[8];
    char TurnY[8];
    char Landing[8];
    char Action[8];
    char ISCOMEND[12];
    char Moving[8];
    char Rotation[12];
    char AllClear[12];
    char Set[4];
    char OFFWALL[8];
    char ONWALL[8];
    char OFFFLOOR[12];
    char ONFLOOR[8];
    float twoPi;                    // 6.2831855f
    char SQ_ERAS[8];
    char REMOVE[8];
    char GETBONEMATRIX[16];
    char NDSP[8];
    char SEQ[4];
    char TRC[4];
    char ONFREEZE[12];
    char OFFREEZE[12];
    float minusOne;                 // -1.0f
    char GETRECNO[12];
    char hit[4];
    char Hit[4];
    char SQ_ERAS2[12];
};
extern "C" const beModelCtrlPool lbl_80426678;
#define MC lbl_80426678

// Pool constants a function reads only once are addressed through their own symbols instead.
extern "C" {
extern const float lbl_8042667C[];   // MC.zero
extern const float lbl_80426680[];   // MC.half
extern const char lbl_80426684[];    // MC.MODELCTRL
extern const char lbl_804266C0[];    // MC.ONE
extern const char lbl_80426770[];    // MC.ACTION
extern const char lbl_80426778[];    // MC.GETMATRIX
extern const float lbl_804267F4[];   // MC.three
extern const char lbl_804267F8[];    // MC.KEIKATIMER
extern const float lbl_80426804[];   // MC.degreesToRadians
extern const char lbl_80426814[];    // MC.Move
extern const char lbl_80426850[];    // MC.luaFileFormat
extern const char lbl_804268A8[];    // MC.AllClear
extern const char lbl_804268B4[];    // MC.Set
}
#define kZero (lbl_8042667C[0])
#define kHalf (lbl_80426680[0])
#define kMODELCTRL lbl_80426684
#define kONE lbl_804266C0
#define kACTION lbl_80426770
#define kGETMATRIX lbl_80426778
#define kThree (lbl_804267F4[0])
#define kKEIKATIMER lbl_804267F8
#define kDegreesToRadians (lbl_80426804[0])
#define kMove lbl_80426814
#define kLuaFileFormat lbl_80426850
#define kAllClear lbl_804268A8
#define kSet lbl_804268B4

extern "C" {
int strcmp(const char *a, const char *b);
int sprintf(char *, const char *, ...);

// Metaobjects (the variables holding them) and other globals.
extern char beModelCtrlInfo_meta[];
extern char beLua_meta[];
extern char beTargetObj_meta[];
extern char beModelCtrlCTRL_meta[];
extern char beModelCtrlACTION_meta[];
extern char beModelCtrlMOVE_meta[];
extern char beModelCtrlMOVEEX_meta[];
extern char beModelCtrlMOVERL_meta[];
extern char beModelCtrlPDMOVE_meta[];
extern char beModelCtrlWCHECK_meta[];
extern char beModelCtrlHITBOX_meta[];
extern char beModelCtrlMUTEKI_meta[];
extern char beModelCtrlLABELCTRL_meta[];
extern char beModelCtrlLUACALL_meta[];
extern char beModelCtrlAIMAP_meta[];
extern char beModelCtrlMSGBOX_meta[];
extern char beModelCtrlLABEL_meta[];
extern char beModelCtrlJUMP_meta[];
extern char beModelCtrlSCHitBox_meta[];
extern char lbl_80561748[];         // [0]: igNamedObject's _name field (a metafield), the key fn_800695CC compares
extern char lbl_805646FC[];         // [0]: igTransformRecorder's matrix field (a metafield)
extern const char lbl_80567330[1];  // ""
extern char lbl_8056225C[];         // the pool source this file allocates from
extern float lbl_804DEBA0[];        // 0.0f: a new pad-move entry
extern int lbl_804DEBA4[];          // -1: a label with no offset
extern int lbl_804DEBA8[];          // -1

// Managers and object creation.
igObject *fn_8028A730(igInsightCore *insight, void *meta);    // the manager of a class
bool fn_802F251C(beBaseInfoManager *self, igObject *info);    // beBaseInfoManager's virtual6C: takes an info
beBaseInfoDataList *beBaseInfoDataList_create(void *pool);
beModelCtrlInfoRideOn *beModelCtrlInfoRideOn_create(void *pool);
beModelCtrlMoveObject *beModelCtrlMoveObject_create(void *pool);
igStringRefList *igStringRefList_create(void *pool);
igIntList *igIntList_create(void *pool);
igAABox *igAABox_create(void *pool);

// Lists.
igObject *fn_800695CC(void *list, void *field, const char *value);   // the first object whose string field equals value
int fn_8004270C(void *list, void *value, int start);           // the index of a value (compared as a word) from start, or -1

// The messenger (see the sound subsystem's notes). A request is opened, its arguments appended, and sent; the
// reply's arguments are read back.
void fn_80305308(beMessenger *messenger, beBaseInfoRam *ram, const char *command);   // a command to a RAM's own manager
void fn_80305344(beMessenger *messenger, const char *target, const char *infoName, int ramNo);   // opens a request to target's RAM
void fn_80305A28(beMessenger *messenger, const char *command); // sends the request
void fn_80305ED0(beMessenger *messenger, const char *target, const char *infoName, int ramNo, const char *command);   // a request to target's RAM, sent at once
void fn_80306FDC(beMessenger *messenger, const char *value);   // appends a string argument
int fn_8030690C(beMessenger *messenger);                       // the number of bool arguments
bool fn_80306A1C(beMessenger *messenger, int index);           // bool argument index of the reply
int fn_80306B00(beMessenger *messenger, int index);            // integer argument index
int fn_80306C74(beMessenger *messenger);                       // the number of vector arguments
int fn_80306D58(beMessenger *messenger);                       // the number of matrix arguments
int fn_80306E1C(beMessenger *messenger);                       // the number of object arguments
igObject *fn_80306FB4(beMessenger *messenger, int index);      // object argument index
int fn_80306FCC(beMessenger *messenger);                       // the number of string arguments
const char *fn_8030709C(beMessenger *messenger, int index);    // string argument index

// 4x4 matrices (float[16], rows of 4; the translation in the last row) and 3D vectors (float[3]).
void fn_80128CF4(float *to, const float *from);                // copies a matrix
void fn_80128D90(float *matrix, const float *translation);     // sets the translation
void fn_80128DAC(const float *matrix, float *translation);     // gets the translation
void fn_80128DC8(float *matrix, const float *offset);          // moves by offset in the matrix's own axes
void fn_801285A0(float *matrix);                               // the identity
void fn_80128690(float *to, const float *a, const float *b);   // to = a * b
void fn_80128774(float *matrix, const float *by);              // multiplies a matrix in place
void fn_80129134(float *matrix, float x, float y, float z);    // sets the rotation from angles around X, Y and Z
void fn_801292D4(float *matrix, float x, float y, float z);    // sets the rotation from angles (another order)
void fn_801298F0(float *matrix, const float *axis, float angle);   // rotates around an axis
void fn_8012D434(float *to, const float *vector, const float *matrix);   // a direction turned by a matrix's rotation
void fn_80122D04(igAABox *box, const float *matrix);           // transforms a box
extern float lbl_804F8AE0[3];                                  // the zero vector
extern float lbl_804F8AF8[3];                                  // the X axis
extern float lbl_804F8B04[3];                                  // the Y axis
extern float lbl_804F8B10[3];                                  // the Z axis (forward)

// RAM timers (beBaseInfoRam's timer data), by name.
void fn_8031DE44(beBaseInfoRam *ram, const char *name, unsigned long long nanoseconds);   // starts a timer
bool fn_8031E138(beBaseInfoRam *ram, const char *name);        // whether a timer exists
bool fn_8031E238(beBaseInfoRam *ram, const char *name);        // whether a timer has run out
float fn_8031E4C4(beBaseInfoRam *ram, const char *name);       // frames since a timer was last read (restarting it)
bool fn_8031E8BC(beBaseInfoRam *ram, const char *name);        // restarts a timer

// Subcommands and Lua.
void fn_803107E0(beModelCtrlSubCom *subCommand, beBaseInfoRam *ram);  // runs the subcommands
void fn_80310A68(beModelCtrlSubCom *subCommand, beBaseInfoRam *ram, igMetaObject *meta);   // removes the subcommands of a class
void fn_80310DAC(beModelCtrlSubCom *subCommand, igNamedObject *command);                  // adds a hit-box subcommand
void fn_80301FA4(beLua *lua, const char *file, const char *directory);   // runs a Lua file
}

// Classes by value: Alchemy's igMatrix44f (copying goes through fn_80128CF4; the default is the identity),
// igVec3f, and igResult (kSuccess or kFailure). Each is returned through a hidden pointer, as a class with a copy
// constructor.
struct Matrix44 {
    float m[16];
    Matrix44() { fn_801285A0(m); }
    Matrix44(const float *matrix) { fn_80128CF4(m, matrix); }
    Matrix44(const Matrix44 &other) { fn_80128CF4(m, other.m); }
    Matrix44 &operator=(const Matrix44 &other) { fn_80128CF4(m, other.m); return *this; }
};
struct Vec3f {
    float x, y, z;
    Vec3f(const Vec3f &other) : x(other.x), y(other.y), z(other.z) {}
};
struct igResult {
    int value;
    inline igResult(const igResult &other) : value(other.value) {}
};
extern "C" {
Vec3f fn_80306D28(beMessenger *messenger, int index);          // vector argument index of the reply
Matrix44 fn_80306DE8(beMessenger *messenger, int index);       // matrix argument index of the reply
igResult fn_8012A92C(float *to, const float *from);            // inverts a matrix
}

// A 3D vector copied as a whole (a plain aggregate).
struct Vec3 {
    float x, y, z;
};

// A metafield's offset in its object (igMetaField::_offset at +8).
struct MetaFieldView {
    void *__vtable;
    unsigned int _refCount;
    int _offset;
};
static inline MetaFieldView *recorderMatrixField() { return *reinterpret_cast<MetaFieldView **>(lbl_805646FC); }

static inline igMetaObject *metaVar(char *meta) { return *reinterpret_cast<igMetaObject **>(meta); }

// Whether an object's class is exactly the class of the metaobject variable meta (read before the call).
static inline bool isA(igObject *object, char *meta)
{
    igMetaObject *metaObject = metaVar(meta);
    return metaObject == metaOf(object);
}

// igNamedObject's _name field, for fn_800695CC.
static inline void *nameField() { return *reinterpret_cast<void **>(lbl_80561748); }

// Assigns a counted reference: the new object first gains a reference, then the old one is released.
template <class T> static inline void setRef(T *&member, T *value)
{
    if (value) addRef(value);
    if (member) release(member);
    member = value;
}

// Releases a counted reference and clears it.
template <class T> static inline void clearRef(T *&member)
{
    if (member) release(member);
    member = 0;
}

// An object's name, or "" when it has none.
static inline const char *nameOrEmpty(igNamedObject *object) { return object->_name ? object->_name : lbl_80567330; }

using Gap::Core::igStringRef;
extern "C" void fn_8002080C(igStringRefList *list, igStringRef string);   // appends a string (by value)
extern "C" igStringRef fn_800218F4(igStringRefList *list, int index);     // element index of a string list

// A pooled copy of text, or null for null text.
static inline const char *pooledOrNull(const char *text) { return text == 0 ? 0 : pooledString(text); }

// A string reference to a pooled copy of text, or null.
#define POOLED_REF(name, text) igStringRef name(pooledOrNull(text))

// Sets element index of a string list when the index is in range, holding a new reference to the string.
static inline void setStringAt(igStringRefList *list, int index, const igStringRef &value)
{
    if (list->_count != 0 && index >= 0 && index < list->_count) {
        const char **slot = &static_cast<const char **>(list->_data)[index];
        if (value.getString()) value.getId()->addRef();
        if (*slot) reinterpret_cast<const Gap::Core::igStringPoolItem *>(*slot - 8)->release();
        *slot = value.getString();
    }
}

// The index of the first element equal to *value from start, or -1: igObjectList's search, which fn_8004270C
// is an out-of-line copy of.
static inline int indexOf(igDataList *list, const void *value, int start)
{
    void *key = *static_cast<void *const *>(value);
    for (int i = start; i < list->_count; i++) {
        if (key == static_cast<void **>(list->_data)[i]) return i;
    }
    return -1;
}

// Creates the RAM's data list when it has none.
static inline void ensureDataList(beBaseInfoRam *ram)
{
    if (!ram->_dataList) {
        beBaseInfoDataList *list = beBaseInfoDataList_create(poolFor(ram, lbl_8056225C));
        Ref<beBaseInfoDataList> holder(list);
        if (ram->_dataList) release(ram->_dataList);
        ram->_dataList = list;
    }
}

// A model RAM's state: its "ONE" data (one is that string: MC.ONE, or kONE where the original reads it alone).
static inline beModelCtrlInfoRamData *ramDataOf(beBaseInfoRam *ram, const char *one)
{
    ensureDataList(ram);
    return static_cast<beModelCtrlInfoRamData *>(fn_800695CC(ram->_dataList, nameField(), one));
}

// beModelCtrl's virtual functions after igObject's, as declarations (slot offsets in the comments).
class beModelCtrlVirtuals : public igObjectVirtuals {
public:
    virtual void v5C(); virtual void v60(); virtual void v64(); virtual void v68();
    virtual bool takeInfo(igObject *info);                 // 0x6C
    virtual void v70(); virtual void v74(); virtual void v78();
    virtual void ramStart(beBaseInfoRam *ram);             // 0x7C
    virtual igMetaObject *infoMeta();                      // 0x80: beModelCtrlInfo
    virtual void v84(); virtual void v88();
    virtual void playSequence(beBaseInfoRam *ram, const char *sequence);   // 0x8C
    virtual void v90();
    virtual bool isKind(const char *kind);                 // 0x94: whether this controller takes models of kind
    virtual void makeWork(beBaseInfoRam *ram);             // 0x98: builds a RAM's work
    virtual void ramStarted(beBaseInfoRam *ram);           // 0x9C
    virtual void runAI(beBaseInfoRam *ram);                // 0xA0
    virtual void step(beBaseInfoRam *ram);                 // 0xA4: the subclass's step when no check waits
    virtual void vA8(); virtual void vAC(); virtual void vB0(); virtual void vB4();
    virtual void vB8(); virtual void vBC();
    virtual void beforeMove(beBaseInfoRam *ram);           // 0xC0
    virtual void vC4();
};
static inline beModelCtrlVirtuals *virtuals(beModelCtrl *self) { return reinterpret_cast<beModelCtrlVirtuals *>(self); }

// igRandomNumber's next number (virtual 0x60).
class igRandomVirtuals : public igObjectVirtuals {
public:
    virtual void v5C();
    virtual int next();   // 0x60
};

// igTransform's matrix setter (virtual 0x94).
class igTransformVirtuals : public igObjectVirtuals {
public:
    virtual void v5C(); virtual void v60(); virtual void v64(); virtual void v68(); virtual void v6C();
    virtual void v70(); virtual void v74(); virtual void v78(); virtual void v7C(); virtual void v80();
    virtual void v84(); virtual void v88(); virtual void v8C(); virtual void v90();
    virtual void setMatrix(const float *matrix);   // 0x94
};
static inline void setMatrix(beModelCtrlNode2 *node, const float *matrix) { reinterpret_cast<igTransformVirtuals *>(node)->setMatrix(matrix); }

// A ride-on's update with the rider's matrix (virtual 0x5C).
class beModelCtrlInfoRideOnVirtuals : public igObjectVirtuals {
public:
    virtual void follow(const float *matrix);   // 0x5C
};

// The context a model's Lua hit script reads (0x80535914): set before the script runs.
struct ModelLuaContext {
    beBaseInfoRam *ram;         // 0x00
    int ramNo;                  // 0x04
    float *matrix;              // 0x08: the model node's matrix
    int maxHp;                  // 0x0C
    int hp;                     // 0x10: the script may change it
    int recNo;                  // 0x14
    const char *infoName;       // 0x18
    int argument1C;             // 0x1C
    int argument20;
    int argument24;
    int argument28;
    int argument2C;
    bool isSet;                 // 0x30
    const char *kind;           // 0x34: "BHit", "WHit", "FHit"
    float *position;            // 0x38: where a script writes a position (the "aim" script), or null
};
extern "C" ModelLuaContext lbl_80535914;

// Functions of beModelCtrl's file.
extern "C" {
beBaseInfoData *fn_8030F8CC(beBaseInfoRam *ram, const char *name);   // a RAM's named data, or null (the list is created on first use)
void fn_8030949C(beModelCtrlInfoRideOn *rideOn, const char *modelName, int ramNo, beMessenger *messenger);
bool fn_803095D0(beModelCtrlInfoRideOn *rideOn, const char *modelName, int ramNo);
bool fn_8030A0A0(beModelCtrl *self, beBaseInfoRam *ram, beModelCtrlInfoWork *work, int mode);
void fn_8030A1F4(beModelCtrlMoveObject *move, int mode, float value, float frames, float endTime);
void fn_8030A254(beModelCtrlMoveObject *move);
float fn_8030A2D8(beModelCtrlMoveObject *move, float frames);
void fn_8030B6EC(beModelCtrl *self, beBaseInfoRam *ram, const char *script, const char *kind, const char *infoName, int, int, int, int, int);
void fn_8030C3AC(beModelCtrl *self, beModelCtrlInfo *info, beBaseInfoRam *ram, beModelCtrlInfoWork *work);
void fn_8030C85C(beModelCtrl *self, beModelCtrlInfo *info, beBaseInfoRam *ram, beModelCtrlInfoWork *work, bool immediate);
void fn_8030D7F4(beModelCtrl *self, beModelCtrlNode2 *node, igAABox *box);
}

#endif
