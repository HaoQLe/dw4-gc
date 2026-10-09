#include "unknown80042DEC.h"

extern "C" Unknown80042DECValue *fn_80043B00(void *, void *);
extern "C" int kSuccess__3Gap;

// Construct the key inside the inline adapter to preserve hidden-result stack order.
inline int unknown80043DE4FindPointer(Unknown80042DECStorage *storage, Unknown80042DECValue *value){
    return unknown80042DECFind(storage, Unknown80042DECPointer(value));
}

#pragma push
#pragma auto_inline off
extern "C" void *igDirEntry_virtual58(){ return lbl_80561D00; }
extern "C" int fn_800439BC(Unknown80042DECOwner *object, Unknown80042DECValue *entry){
    Unknown80042DECValue *value;
    int index=fn_800432E8(object,lbl_80561D10,entry->unknown18);
    if(object->unknown08 > 0 && index < object->unknown08){
        value=entry->unknown18;
        if(fn_80042A14(object,index)==value) return -1;
    }
    Unknown80042DECValue *copy=entry;
    unknown80042DECRetain(copy);
    fn_80041A44(object,index,1,&copy);
    entry->unknown0C=index;
    return entry->unknown0C;
}
extern "C" Unknown80042DECValue *fn_80043A68(void *storage, void *key){
    Unknown80042DECValue *entry=fn_800695CC(storage,lbl_80561748,key);
    if(entry==NULL) return NULL;
    else return entry->unknown18;
}
extern "C" Unknown80042DECValue *fn_80043AA4(void *storage, void *key){
    Unknown80042DECValue *entry=fn_800695CC(storage,lbl_80561748,key);
    if(!entry) return NULL;
    if(fn_80068128(entry,lbl_80561710)) return entry->unknown18;
    return NULL;
}
extern "C" Unknown80042DECValue *fn_80043B00(void *storage, void *key){ return fn_800695CC(storage,lbl_80561748,key); }
extern "C" Unknown80042DECValue *fn_80043B28(void *storage, void *key){ return fn_800696C8(storage,lbl_80561D10,key); }
extern "C" void fn_80043B50(Unknown80042DECOwner *object){
    if(object->unknown38==1) return;
    unsigned int count=object->unknown08;
    for(unsigned int index=0; index<count; ++index){
        Unknown80042DECValue *entry=fn_80042B1C(object,index);
        if(entry && fn_80068128(entry,lbl_80561710)){
            Unknown80042DECMetadata *metadata=entry->unknown1C;
            if(metadata && metadata->unknown3C) entry->unknown18->slot50(metadata);
        }
    }
    object->unknown38=1;
}
extern "C" void fn_80043BFC(Unknown80042DECOwner *object, const char *text){
    const char *next=unknown80042DECAcquire(text);
    if(object->unknown14) reinterpret_cast<Gap::Core::igStringPoolItemId>(object->unknown14-sizeof(Gap::Core::igStringPoolItem))->release();
    object->unknown14=next;
}
extern "C" unsigned char igDirectory_virtual64(Unknown80042DECOwner *object, Unknown80042DECValue *entry){
    if(entry->unknown20){
        Unknown80042DECValue *found=fn_80043B00(object,entry->unknown20);
        if(found){ entry->slot5C(found->unknown18); return 1; }
    }else{
        int index=entry->unknown24;
        int count=object->unknown08;
        if(index>=0 && index<count){ entry->slot5C(fn_80042B1C(object,index)->unknown18); return 1; }
    }
    return 0;
}
extern "C" int fn_80043D38(Unknown80042DECOwner *object){ return object->unknown1C->unknown08; }
extern "C" int fn_80043D44(Unknown80042DECOwner *object){
    if(!object->unknown44) return ++object->unknown34;
    int result=object->unknown44->slot84(1).unknown00;
    int count=object->unknown34;
    if(result==kSuccess__3Gap){
        count=++object->unknown34;
        object->unknown44->slot7C();
    }
    return count;
}
extern "C" int fn_80043DE4(Unknown80042DECOwner *object){
    int count;
    if(!object->unknown44) count=--object->unknown34;
    else{
        object->unknown44->slot84(1);
        count=--object->unknown34;
    }
    if(count < 1){
        if(object->unknown44) object->unknown44->slot7C();
        if(object->unknown20){
            struct { int index; Unknown80042DECStorage *storage; } state;
            state.storage=reinterpret_cast<Unknown80042DECStorage *>(object->unknown20->unknown10);
            state.index=unknown80043DE4FindPointer(state.storage,reinterpret_cast<Unknown80042DECValue *>(object));
            unknown80042DECRemove(state.storage,state.index);
        }
    }else if(object->unknown44) object->unknown44->slot7C();
    return count;
}
extern "C" void fn_80043F4C(Unknown80042DECOwner *object){
    if(!object->unknown44){
        unknown80042DECRelease(reinterpret_cast<Unknown80042DECValue *>(object->unknown44));
        object->unknown44=fn_80025FE8(NULL);
        object->unknown44->slot5C();
    }
}
extern "C" void igDoubleArrayMetaField_virtualD0(Unknown80042DECOwner *object, void *value, int count){
    fn_800321EC(object)->slotD0(value,count*object->unknown34);
}
#pragma pop
