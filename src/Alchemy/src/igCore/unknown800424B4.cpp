#include <igGap.h>
#include <igCore/igStringPoolItem.h>

// Synthetic storage/result views; semantic types and field meanings are unknown.
struct Unknown800424B4Result {
    int unknown00;
    inline Unknown800424B4Result(int value) : unknown00(value) {}
    inline Unknown800424B4Result(const Unknown800424B4Result& value) : unknown00(value.unknown00) {}
};
struct Unknown800424B4Pair { void *unknown00; void *unknown04; };
struct Unknown800424B4Storage {
    unsigned char unknown00[8];
    int unknown08;
    int unknown0C;
    Unknown800424B4Pair *unknown10;
};
struct Unknown800424B4 {
    unsigned char unknown00[8];
    Unknown800424B4Storage *unknown08;
    Unknown800424B4Storage *unknown0C;
    void *unknown10;
    void *unknown14;
    unsigned char unknown18;
};
extern "C" {
    Unknown800424B4Result fn_800692E0(void *, void *, unsigned char);
    void fn_80041810(void *, int, int);
    void fn_80042134(void *);
    void fn_80042010(void *);
    extern int kSuccess__3Gap, kFailure__3Gap;
    void *fn_80054140(unsigned int);
    void *fn_80053F28(void *);
    const char *fn_80054094(void *, const char *);
    void fn_8002080C(void *, const char **);
    extern void *lbl_80562140;
    void fn_800667D0(void *);
    void fn_80066490(void *, int);
    void igDirEntry_getMeta();
    void igObjectDirEntry_getMeta();
    void igMemoryDirEntry_getMeta();
    void igExternalDirEntry_getMeta();
    void igExternalIndexedEntry_getMeta();
    void igExternalInfoEntry_getMeta();
    void igInfo_getMeta();
    void igResource_getMeta();
}
inline unsigned char unknown800424B4Equal(const Unknown800424B4Pair& pair, void *first, void *second){
    return first == pair.unknown00 && second == pair.unknown04;
}
inline int unknown800424B4Find(Unknown800424B4Storage *storage, void *first, void *second){
    for(int index = 0; index < storage->unknown08; ++index){
        if(unknown800424B4Equal(storage->unknown10[index], first, second)) return index;
    }
    return -1;
}
extern "C" Unknown800424B4Result fn_800424B4(Unknown800424B4 *object, void *value){
    return fn_800692E0(object->unknown08, value, 0);
}
extern "C" Unknown800424B4Result fn_800424E8(Unknown800424B4 *object, void *first, void *second){
    Unknown800424B4Storage *storage = object->unknown0C;
    int index = unknown800424B4Find(storage, first, second);
    int result;
    if(index >= 0){
        fn_80041810(storage, index, 8);
        result = kSuccess__3Gap;
    }else result = kFailure__3Gap;
    if(object->unknown18){ fn_80042134(object); fn_80042010(object); }
    return result;
}
extern "C" void fn_800425BC(Unknown800424B4 *object, void *value){
    for(int index = object->unknown0C->unknown08 - 1; index >= 0; --index){
        Unknown800424B4Storage *storage = object->unknown0C;
        Unknown800424B4Pair &pair = storage->unknown10[index];
        void *first = pair.unknown00;
        void *second = pair.unknown04;
        if(first == value || second == value) fn_80041810(storage, index, 8);
    }
    if(object->unknown18){ fn_80042134(object); fn_80042010(object); }
}
inline const char *unknown800424B4Acquire(const char *text){
    if(reinterpret_cast<unsigned long>(text) == 0) return NULL;
    if(!lbl_80562140){
        void *storage = fn_80054140(0x10);
        if(storage) storage = fn_80053F28(storage);
        lbl_80562140 = storage;
    }
    return fn_80054094(lbl_80562140, text);
}
extern "C" void fn_80042660(Unknown800424B4 *object, const char *text){
    const char *value = unknown800424B4Acquire(text);
    fn_8002080C(object->unknown14, &value);
    if(value){
        Gap::Core::igStringPoolItemId item = reinterpret_cast<Gap::Core::igStringPoolItemId>(value - sizeof(Gap::Core::igStringPoolItem));
        item->release();
    }
}
inline int unknown800424B4FindValue(Unknown800424B4Storage *storage, void *const &value, int index){
    int count = storage->unknown08;
    void *target = value;
    for(; index < count; ++index){
        if(target == reinterpret_cast<void **>(storage->unknown10)[index]) return index;
    }
    return -1;
}
extern "C" int fn_8004270C(Unknown800424B4Storage *storage, void *const &value, int start){
    return unknown800424B4FindValue(storage, value, start);
}
extern "C" void igDirEntry_virtual6C(){}
extern "C" void igDirEntry_virtual70(){}
extern "C" void igDirEntry_virtual68(){}
extern "C" int igDirEntry_virtualA8(){ return 0; }
extern "C" void igDirEntry_virtual74(){}
extern "C" int igDirEntry_virtual78(){ return -1; }
extern "C" void igDirEntry_virtualA4(){}
extern "C" void igDirEntry_virtualA0(){}
extern "C" void igDirEntry_virtual98(){}
extern "C" void igDirEntry_virtual9C(){}
extern "C" void igDirEntry_virtual8C(){}
extern "C" void igDirEntry_virtual90(){}
extern "C" void igDirEntry_virtual94(){}
extern "C" void igDirEntry_virtual84(){}
extern "C" void igDirEntry_virtual88(){}
extern "C" void igDirEntry_virtual80(){}
extern "C" void igDirEntry_virtual7C(){}
extern "C" void igDirEntry_virtual2C(void *object){ fn_800667D0(object); fn_80066490(object, 0); }
extern "C" void igDirEntry_virtual5C(void *object, void *value){ reinterpret_cast<void **>(object)[6] = value; }
extern "C" void igDirEntry_virtual60(){}
extern "C" void igDirEntry_virtual64(){}
extern "C" void fn_800427E8(){
    igDirEntry_getMeta(); igObjectDirEntry_getMeta(); igMemoryDirEntry_getMeta(); igExternalDirEntry_getMeta();
    igExternalIndexedEntry_getMeta(); igExternalInfoEntry_getMeta(); igInfo_getMeta(); igResource_getMeta();
}
