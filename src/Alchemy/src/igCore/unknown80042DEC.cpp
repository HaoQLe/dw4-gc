#include "unknown80042DEC.h"

#pragma push
#pragma auto_inline off

extern "C" void *fn_80042DEC(){ return lbl_805622A4; }
extern "C" void *dtor_80042DF4(Unknown80042DECValue **reference, short flag){
    if(reference){
        unknown80042DECRelease(*reference);
        if(flag > 0) __dl__FPv(reference);
    }
    return reference;
}
extern "C" void fn_80042E68(Unknown80042DECOwner *object, void *key){
    fn_80042EAC(object, fn_800695CC(object->unknown1C, lbl_80561748, key));
}
extern "C" void fn_80042EAC(Unknown80042DECOwner *object, Unknown80042DECValue *value){
    Unknown80042DECStorage *storage;
    int index=unknown80042DECFind(object->unknown1C, value);
    if(index > -1){ storage=reinterpret_cast<volatile Unknown80042DECOwner *>(object)->unknown1C; unknown80042DECRemove(storage,index); }
}
extern "C" void fn_80042F78(Unknown80042DECOwner *object, Unknown80042DECValue *value){
    fn_80069128(object->unknown1C, value);
    value->unknown0C=reinterpret_cast<int>(object);
}
extern "C" Unknown80042DECValue *fn_80042FB8(Unknown80042DECOwner *object, void *key){
    return fn_800695CC(object->unknown1C, lbl_80561748, key);
}
extern "C" Unknown80042DECValue *fn_80042FE4(Unknown80042DECOwner *object, int index){
    if(index > -1 && index < object->unknown1C->unknown08) return object->unknown1C->unknown10[index];
    return NULL;
}
extern "C" void fn_80043014(Unknown80042DECOwner *object, void *value){ fn_80069128(object->unknown18, value); }
extern "C" unsigned char fn_80043038(Unknown80042DECOwner *object, void *owner, Unknown80042DECValue *value){
    for(int index=0; index<object->unknown1C->unknown08; ++index){
        Unknown80042DECValue *entry=object->unknown1C->unknown10[index];
        if(*reinterpret_cast<unsigned char *>(&entry->unknown10)==1 && reinterpret_cast<Unknown80042DECTest *>(entry)->slot5C(owner,value)==1) return 1;
    }
    return 0;
}
extern "C" unsigned char fn_800430D8(Unknown80042DECOwner *object, Unknown80042DECValue *value){
    Unknown80042DECReference reference(fn_8004291C(object,value));
    if(reference.value) return 1;
    return 0;
}
extern "C" bool fn_80043168(Unknown80042DECValue *value, Unknown80042DECValue *owner, void *context){
    int count;
    Unknown80042DECOwner *object=static_cast<Unknown80042DECOwner *>(context);
    if(!value) return 1;
    if(owner) return owner->slotAC(value)==-1;
    if(fn_800430D8(object,value)==1) return 1;
    count=object->unknown18->unknown08;
    for(int index=0; index<count; ++index) if(fn_80043038(reinterpret_cast<Unknown80042DECOwner *>(object->unknown18->unknown10[index]),object,value)==1) return 1;
    fn_800433BC(object,value,NULL,0);
    return 0;
}
extern "C" int fn_80043260(Unknown80042DECOwner *object, Unknown80042DECValue *value, void *name){
    if(value){
        fn_80067F74(value,fn_80043168,object);
        int index=fn_800432E8(object,lbl_80561D10,value);
        fn_80066490(fn_80042B1C(object,index),name);
        return index;
    }
    return -1;
}
extern "C" int fn_800432E8(Unknown80042DECOwner *object, void *field, void *value){
    if(!field) return -1;
    if(object->unknown08 < 1) return 0;
    int low;
    int high=object->unknown08-1;
    low=0;
    while(low < high){
        int middle=(low+high)>>1;
        void *current=*reinterpret_cast<void **>(reinterpret_cast<unsigned char *>(fn_80042B1C(object,middle))+reinterpret_cast<int *>(field)[2]);
        if(current < value) low=middle+1;
        else if(current > value) high=middle-1;
        else return middle;
    }
    void *current=*reinterpret_cast<void **>(reinterpret_cast<unsigned char *>(fn_80042B1C(object,low))+reinterpret_cast<int *>(field)[2]);
    int result=low;
    if(current < value) result=low+1;
    return result;
}

#pragma pop
