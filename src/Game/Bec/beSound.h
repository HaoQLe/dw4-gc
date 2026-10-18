// Gap::Bec::beSound: the sound manager: the BGM and effects requested by messages, played through beCri
// (0x80314904..0x80315D2C). Declarations and helpers shared by its files.
#ifndef GAME_BEC_BESOUND_H
#define GAME_BEC_BESOUND_H
#include <meta/beSound.h>
#include <meta/beSoundInfo.h>
#include <meta/beBaseInfoRam.h>
#include <meta/beCri.h>
#include <meta/bePlaySEList.h>
#include <meta/bePlaySE.h>
#include <meta/igInsightCore.h>
#include <meta/beBaseInfo.h>
#include <meta/beBaseInfoDataList.h>
#include <meta/igObjectList.h>
#include <meta/beSoundData.h>
#include <meta/beCriHandle.h>
#include <meta/beSystem.h>
#include <meta/igStringObj.h>
#include <meta/igStringRefList.h>
#include <meta/igNamedObjectList.h>
#include <meta/beBaseInfoDataList.h>
#include <meta/enums.h>
#include <game/Pool.h>
#include <game/List.h>
#include <game/Ref.h>
#include <igStringPoolItem.h>

using namespace Meta;

extern "C" {
igObject *fn_8028A730(igInsightCore *insight, void *meta);   // the manager of a class
extern char beCri_meta[];
extern char beSoundInfo_meta[];
extern char beSound_meta[];
void fn_803050A8(void *messenger, beBaseInfoRam *ram, const char *name, int, int);   // registers with the messenger
void fn_802F7244(beCri *cri, int volume);                      // sets the sound-file volume
extern void *lbl_80562140[];                                    // the string pool container, created on first use
void *fn_80054140(unsigned int size);                           // allocates
void *fn_80053F28(void *container);                             // the string pool container's constructor
const char *fn_80054094(void *container, const char *text);     // a pooled copy of text
int strcmp(const char *, const char *);
void fn_80305F58(void *messenger, const char *target, const char *command);   // a request to target
int fn_80306E1C(void *messenger);                    // the number of objects in the reply
igObjectList *fn_80306FB4(void *messenger, int index);   // object index of the reply
void fn_802F6F10(beCri *cri, const char *name);       // sets the reverb
extern const char lbl_80567360[1];                     // ""
void *fn_802B8E10();                                    // the beSound_Message enum (created on first use)
int fn_80304FD8(void *messenger, void *messageEnum, void *message);   // a message's value in an enum
// The request being answered: its typed argument lists, which the reply is appended to.
int fn_80306BB8(void *messenger);                      // the number of 64-bit arguments
long long fn_80306C54(void *messenger, int index);     // 64-bit argument index
int fn_80306B00(void *messenger, int index);            // integer argument index
int fn_80306B18(void *messenger);                      // the number of float arguments
float fn_80306BA0(void *messenger, int index);          // float argument index
int fn_80306FCC(void *messenger);                      // the number of string arguments
const char *fn_8030709C(void *messenger, int index);    // string argument index
void fn_80306964(void *messenger, bool value);          // appends a result
void fn_80306A40(void *messenger, int value);
void fn_80306BC8(void *messenger, long long value);
void fn_80306FDC(void *messenger, const char *value);
void fn_803065DC(void *messenger, const char *target); // a request to target
void fn_803061BC(void *messenger, const char *command, int, int);   // sends the request
extern char lbl_8056225C[];                             // this file's pool source
bePlaySE *bePlaySE_create(void *pool);
igStringRefList *igStringRefList_create(void *pool);
void fn_80071F9C(igStringObj *string, const char *text);   // sets a string object's text
void fn_8007249C(igStringObj *string);
void fn_80072840(igStringObj *string, int, int);
void fn_80072608(igStringObj *string);      // keeps the part after the last backslash
void fn_80072164(igStringObj *string);
extern const char *lbl_8055DC4C[];          // the text of an empty string object
// beCri
void fn_802F6038(beCri *cri, long long id);
long long fn_802F5828(beCri *cri, igNamedObjectList *names, beSoundData *data);
long long fn_802F5A04(beCri *cri, igNamedObjectList *names, beSoundData *data);
void fn_802F60FC(beCri *cri, int kind);
void fn_802F61F8(beCri *cri, const char *name);
void fn_802F6334(beCri *cri, const char *name, float a, float b, float c);
void fn_802F64F0(beCri *cri, long long id, float a, float b, float c);
void fn_802F68D0(beCri *cri, bool restore);
bool fn_802F6AA8(beCri *cri);
bool fn_802F6BAC(beCri *cri, bool all);
bool fn_802F6DF8(beCri *cri);
bool fn_802F6FB0(beCri *cri, const char *name);
}

#include <igCore/igStringRef.h>
using Gap::Core::igStringRef;
extern "C" {
igStringRef fn_800218F4(igStringRefList *list, int index);   // element index of a string list
void fn_8002080C(igStringRefList *list, igStringRef string);   // appends a string
}

// An object's name, or "" when it has none.
static inline const char *nameOf(igNamedObject *object) { return object->_name ? object->_name : lbl_80567360; }

// A pooled copy of text, creating the string pool on first use.
static inline const char *pooledString(const char *text)
{
    if (!lbl_80562140[0]) {
        void *container = fn_80054140(0x10);
        if (container) container = fn_80053F28(container);
        lbl_80562140[0] = container;
    }
    return fn_80054094(lbl_80562140[0], text);
}

// Assigns a pooled string to a string member, releasing the old one.
static inline void setString(const char *&member, const char *text)
{
    const char *value = pooledString(text);
    if (member) reinterpret_cast<const Gap::Core::igStringPoolItem *>(member - 8)->release();
    member = value;
}

struct FloatBits {
    unsigned char sign : 1;
};
// |value|, by clearing the sign bit.
static inline float absolute(float value)
{
    reinterpret_cast<FloatBits *>(&value)->sign = 0;
    return value;
}

// A string object's text, or the shared empty text.
static inline const char *textOf(igStringObj *string)
{
    const char *text = static_cast<const char *>(string->_buffer);
    if (!text) text = lbl_8055DC4C[0];
    return text;
}


// Functions of beSound's files.
extern "C" {
void beSound_virtual88(beSound *self);
void beSound_virtual7C(beSound *self, beBaseInfoRam *ram);
void *beSound_virtual80(beSound *);
void beSound_virtual84(beSound *self, beBaseInfoRam *ram);
bool beSound_virtual90(beSound *self, beBaseInfoRam *ram, void *message);
int fn_80315C94(beSound *, beBaseInfoRam *ram, const char *name);
void *beSound_virtual58(beSound *);
}

#endif
