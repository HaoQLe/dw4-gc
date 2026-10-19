// beFileListInfoManager (0x802F82D8..0x802FA6D8): declarations and helpers shared by its files.
#ifndef GAME_BEC_BEFILELIST_H
#define GAME_BEC_BEFILELIST_H
#include <meta/beFileListInfoManager.h>
#include <meta/beFileListInfo.h>
#include <meta/beSystem.h>
#include <meta/beFont.h>
#include <meta/beMessenger.h>
#include <meta/igViewerSceneInfoManager.h>
#include <meta/igInsightCore.h>
#include <meta/igInfoList.h>
#include <game/Ref.h>
#include <game/List.h>
#include <game/Virtual.h>
#include <meta/igStringRefList.h>
#include <meta/igDirectoryList.h>
#include <meta/igDirectory.h>
#include <meta/igResource.h>
#include <meta/igMemoryPool.h>
#include <meta/igSceneInfo.h>
#include <meta/igNode.h>
#include <meta/igGraphPathList.h>
#include <meta/igStringObj.h>
#include <meta/igViewerParameters.h>
#include <meta/igGroup.h>
#include <meta/igNodeList.h>
#include <meta/beLoadingNode.h>
#include <meta/beLua.h>
#include <meta/igNamedObjectList.h>
#include <igCore/igStringRef.h>
#include <game/Pool.h>
#include <game/StringPool.h>

using namespace Meta;

extern "C" {
void fn_8028A398(igInsightCore *insight, igObject *manager);    // registers a manager
void fn_8028A400(igInsightCore *insight, igObject *manager);    // unregisters a manager
igObject *fn_8028A730(igInsightCore *insight, void *meta);       // the manager of a class
void fn_80041A44(void *list, int index, int count, void *values); // inserts count values at index
void fn_802FB510(beFont *font, igObject *info);                  // gives beFont a font info
void fn_8028A7DC(igInsightCore *insight, igObject *info);         // gives an info to the insight core
bool fn_80068128(igObject *object, void *meta);                    // whether an object is of a class
extern igResource *lbl_80562104[];        // [0]: Alchemy's resource manager (loads files into directories)
bool fn_80070130(igResource *resource, igDirectory *directory);   // whether a directory has finished loading
void fn_80070140(igResource *resource, const char *name);         // releases a loaded file
igDirectory *fn_8006FD34(igResource *resource, const char *name);  // starts loading a file
extern char lbl_80562258[];               // a pool source
extern char lbl_8056225C[];               // a pool source
extern const char lbl_805672F0[1];        // ""
extern char beLuaInfo_meta[];
extern char beLua_meta[];
extern char beLoadingNode_meta[];
extern const char *lbl_8055DC4C[];        // [0]: the text of an empty string object
void fn_8006F794(igResource *resource);
void fn_8006F8CC(igResource *resource);
void fn_80071F9C(igStringObj *string, const char *text);                     // sets the text
void fn_80072840(igStringObj *string, int start, int length);                // deletes length characters at start
void fn_80072038(igStringObj *string, const char *text, int at, int length); // inserts text
int strlen(const char *);
int sprintf(char *, const char *, ...);
void fn_80302224(beLua *lua);
void fn_80301FA4(beLua *lua, const char *file, const char *directory);       // runs a Lua file
bool fn_80311674(beLoadingNode *node);    // the loading screen may end
void fn_80311660(beLoadingNode *node);    // ends the loading screen
void fn_801EAC44(void *layerNode, igNode *graph);   // attaches a scene graph to a layer node
// The messenger: requests to another manager and their replies.
void fn_80305F58(void *messenger, const char *target, const char *command);  // a request, sent at once
void fn_80305EA8(void *messenger, const char *target);                       // opens a request
void fn_80306FDC(void *messenger, const char *value);                        // appends a string argument
void fn_80305A28(void *messenger, const char *command);                      // sends the request
int fn_8030690C(void *messenger);                                            // the number of bool results
bool fn_80306A1C(void *messenger, int index);                                // bool result index
int fn_80306E1C(void *messenger);                                            // the number of object results
void *fn_80306FB4(void *messenger, int index);                               // object result index
extern char igSceneInfo_meta[];
extern char beFileListInfo_meta[];
extern char igNamedObjectInfo_meta[];
extern char beFont_meta[];
extern char beSystem_meta[];
extern char beMessenger_meta[];
extern char igViewerSceneInfoManager_meta[];
}


// Empties a string list, releasing its strings.
static inline void clearStrings(igStringRefList *names)
{
    int count = names->_count;
    for (int i = 0; i < count; i++) setString(static_cast<const char **>(names->_data)[i], 0);
    names->_count = 0;
}

static inline igMetaObject *metaVar(char *meta) { return *reinterpret_cast<igMetaObject **>(meta); }

using Gap::Core::igStringRef;
extern "C" igStringRef fn_800218F4(igStringRefList *list, int index);   // element index of a string list
extern "C" void fn_8002080C(igStringRefList *list, igStringRef string);   // appends a string

// An object's name, or "" when it has none.
static inline const char *nameOf(igNamedObject *object) { return object->_name ? object->_name : lbl_805672F0; }

// The object as an igSceneInfo, or null when it is not one.
static inline igSceneInfo *asSceneInfo(igObject *object)
{
    if (object && fn_80068128(object, *reinterpret_cast<void **>(igSceneInfo_meta))) return static_cast<igSceneInfo *>(object);
    return 0;
}

// Inserts an object at index (the list takes a reference).
static inline void insertAt(void *list, int index, igObject *object)
{
    if (object) addRef(object);
    fn_80041A44(list, index, 1, &object);
}

// Points a memory-pool member of the resource manager at a pool.
static inline void setPool(igMemoryPool *&member, void *pool)
{
    igObject *object = static_cast<igObject *>(pool);
    if (object) addRef(object);
    if (member) release(member);
    member = static_cast<igMemoryPool *>(pool);
}

// A string object's text, or the shared empty text.
static inline const char *textOf(igStringObj *string)
{
    const char *text = static_cast<const char *>(string->_buffer);
    if (!text) text = lbl_8055DC4C[0];
    return text;
}

// A string reference to a pooled copy of text, or null.
#define POOLED_REF(name, text) igStringRef name(!(text) ? 0 : pooledString(text))

// The beLua manager, or null.
static inline beLua *luaOf(beFileListInfoManager *self) { return static_cast<beLua *>(fn_8028A730(self->_insight, *reinterpret_cast<void **>(beLua_meta))); }

// Functions of beFileListInfoManager's files.
extern "C" {
bool fn_802F9E98(beFileListInfoManager *self, igStringRefList *names);
bool fn_802FA53C(beFileListInfoManager *self);
}

#endif
