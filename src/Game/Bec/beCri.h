// Gap::Bec::beCri: the game's layer over the CRI audio library: the BGM and ambient-sound handles, sound
// effects, volumes, the DVD-error pause and sound-file transfers (0x802F4EF4..0x802F7334). Its functions are
// in several files only so that the ones matching the original can be linked while the others are not yet.
#ifndef GAME_BEC_BECRI_H
#define GAME_BEC_BECRI_H
#include <meta/igResource.h>
#include <meta/beCri.h>
#include <meta/beCriHandle.h>
#include <meta/beCriHandleList.h>
#include <meta/beCriAudio.h>
#include <meta/beCriVolume.h>
#include <meta/beSystem.h>
#include <meta/igInfoList.h>
#include <meta/igMetaObject.h>
#include <meta/beSoundData.h>
#include <meta/igNamedObjectList.h>
#include <meta/beCriSfpData.h>
#include <meta/igObjectList.h>
#include <meta/beCriFxInfo.h>
#include <meta/igAdxAudio.h>
#include <meta/igStringObj.h>
#include <meta/beSystem.h>
#include <game/List.h>
#include <game/Ref.h>
#include <game/Pool.h>
#include <game/Virtual.h>

using namespace Meta;


extern "C" {
igObject *fn_8028A730(igInsightCore *insight, void *meta);   // the manager of a class
void fn_8028A398(igInsightCore *insight, igObject *manager);  // registers a manager
void fn_8028A400(igInsightCore *insight, igObject *manager);  // unregisters a manager
extern char beSystem_meta[];
extern char beCri_meta[];
extern char beCriFxInfo_meta[];
extern char igFile_meta[];
extern char lbl_80562258[];                 // this file's pool source
extern void *lbl_80535A68[];                // igFile's creation callback, while beCri replaces it
extern unsigned int lbl_80535A6C[2][16];      // each port's table and data sizes
extern int lbl_80535AEC[16];
extern int lbl_80534324[];                  // the number of entries fn_802A96E4 takes
beCriHandle *beCriHandle_create(void *pool);
void *fn_802F4F48(void *pool);
void fn_802A9148(int);
void fn_802A91DC(int);
bool fn_802A96E4(int index, int value, int);
void fn_8031C99C(beCriAudio *audio, int);
void fn_8031D4F4(beCriAudio *audio);   // pauses
void fn_8031D3F0(beCriAudio *audio);   // resumes
int fn_8031D0F0(beCriAudio *audio);    // play state
int fn_8031D33C(beCriAudio *audio);
int fn_8031DDB8(beCriVolume *volume, int base);
int fn_8031DCB0(beCriVolume *volume, int base);
void fn_8031CF94(beCriAudio *audio, int volume);   // sets the volume
void fn_803C2734(int handle, unsigned int parameter, int value);   // CRI: sets a parameter
void fn_8031CE14(beCriAudio *audio);     // stops
void fn_8031D294(beCriAudio *audio, int);
bool fn_8031CC1C(beCriAudio *audio, const char *name);   // starts a sound file
void fn_8031D5D0(beCriVolume *volume, int base, float, float, float);
void fn_80066490(igObject *named, const char *name);   // sets an igNamedObject's name
void fn_802F5F98(beCri *self, beCriHandle *handle);
void fn_802F66C8(beCri *self);
void fn_802F6824(beCri *self);
void fn_802F60FC(beCri *self, int kind);
bool fn_802F6BAC(beCri *self, bool all);
void fn_802F6F10(beCri *self, const char *name);
void fn_8031CB84(beCriAudio *audio);       // frees the audio
void fn_803C1CC4(int port);                 // CRI: releases a port
int fn_803C1DD0(unsigned int *sizes);                // CRI: sets up the ports
int fn_803C2418(int port, void *data);      // CRI: transfers sound data to a port
void fn_80056378(void *memory);             // frees memory
int fn_803C5D2C(int port);                  // CRI: a port's transfer state (1 busy, 2 done)
extern char beCriSfpData_meta[];
extern char beCriAcxData_meta[];
extern char igAdxFile_meta[];
extern char igMemoryRefMetaField_meta[];
extern igResource *lbl_80562104[];           // [0]: Alchemy's resource manager
void fn_803C1A94(unsigned int parameter, int value);   // CRI: sets a parameter
int fn_802A8C18(igAdxAudio *adxt);          // an ADX stream's state (3: ready)
void fn_802A9200(void *);
void fn_802A9670(void *);
void fn_802A9320(int, int);
void fn_802A97FC(void *);
void fn_8006F428(igResource *resource, const char *poolName, int);   // creates a memory pool
void *fn_800658F8(void *meta, const char *name);           // a metaobject's field by name
bool fn_80068128(void *object, void *meta);                // whether an object is of a class
void fn_80062C90(void *field, const char *poolName);        // the pool a memory field allocates from
void fn_80071F9C(igStringObj *string, const char *text);   // sets a string object's text
void fn_80072608(igStringObj *string);      // keeps the part after the last backslash
void fn_80072164(igStringObj *string);
extern const char *lbl_8055DC4C[];          // the text of an empty string object
bool fn_8031CC9C(beCriAudio *audio, void *data, int index);      // starts an ACX sound in memory
bool fn_8031CCFC(beCriAudio *audio, int port, long long index);  // starts a sound-file sound
int strcmp(const char *, const char *);
int sprintf(char *, const char *, ...);
char *strcpy(char *, const char *);
char *strcat(char *, const char *);
unsigned int strlen(const char *);
}

extern "C" char lbl_805672E8[1];   // ""

// An object's name, or "" when it has none.
static inline const char *nameOf(igNamedObject *object) { return object->_name ? object->_name : lbl_805672E8; }

// A metaobject's memory field (igMemoryRefMetaField) by name, or null.
static inline void *memoryField(void *meta, const char *name)
{
    void *field = fn_800658F8(meta, name);
    if (field && fn_80068128(field, *reinterpret_cast<void **>(igMemoryRefMetaField_meta))) return field;
    return 0;
}

// The original strings and constants (this class's .rodata), for the files that are linked.
extern "C" {
extern char lbl_80425430[];   // "NONE"
extern const float lbl_80425438[];   // 0.0f
extern char lbl_804254A8[];   // "sndfBuffer"
extern char lbl_804254B4[];   // "_dataBuffer"

// This class's functions.
void beCri_virtual5C(beCri *self);
void beCri_virtual60(beCri *self);
void beCri_virtual64(beCri *self);
void beCri_virtual68(beCri *self);
bool beCri_virtual6C(beCri *self, igObject *info);
void beCri_virtual70(beCri *self);
void beCri_virtual74(beCri *self);
int fn_802F56B0(beCri *self, bool stream, short priority);
long long fn_802F5828(beCri *self, igNamedObjectList *names, beSoundData *data);
long long fn_802F5A04(beCri *self, igNamedObjectList *names, beSoundData *data);
void fn_802F5F98(beCri *, beCriHandle *handle);
void fn_802F6038(beCri *self, long long id);
void fn_802F60FC(beCri *self, int kind);
void fn_802F61F8(beCri *self, const char *name);
void fn_802F6334(beCri *self, const char *name, float a, float b, float c);
void fn_802F64F0(beCri *self, long long id, float a, float b, float c);
void fn_802F65F8(beCri *, void *a, void *b);
void fn_802F6630(beCri *, int index, int value);
void fn_802F667C(beCri *);
void fn_802F66A4(beCri *, void *a);
void fn_802F66C8(beCri *self);
void fn_802F6824(beCri *self);
void fn_802F68D0(beCri *self, bool restore);
bool fn_802F69B8(beCri *, beCriSfpData *data);
bool fn_802F6AA8(beCri *self);
bool fn_802F6BAC(beCri *self, bool all);
bool fn_802F6DF8(beCri *self);
void fn_802F6F10(beCri *self, const char *name);
bool fn_802F6FB0(beCri *self, const char *name);
void fn_802F7244(beCri *self, int volume);
void fn_802F7294(beCri *);
void *beCri_virtual58(beCri *);
}

#endif
