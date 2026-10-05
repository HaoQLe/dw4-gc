#include "unknown80042DEC.h"

#pragma push
#pragma auto_inline off
extern "C" int fn_800433BC(Unknown80042DECOwner *object, Unknown80042DECValue *value, void *name, int word){
    Unknown80042DECValue *target;
    int index=0;
    if(!value) return -1;
    if(object->unknown08 > 0){
        index=fn_800432E8(object,lbl_80561D10,value);
        if(index < object->unknown08 && fn_80042A14(object,index)==value) return -1;
    }
    if(value){
        value->slot48();
        if(fn_80068128(object,lbl_80561A04)){
            if(object->unknown40==1) value->slot3C();
            Unknown80042DECMetadata *metadata=value->slot58();
            void *(*callback)(Unknown80042DECMetadata *)=metadata->unknown40;
            if(callback){
                object->unknown38=0;
                value->slot4C(callback(metadata));
            }
        }
    }
    Unknown80042DECReference entry;
    entry.value=fn_800291C8(fn_80068430(object));
    entry.value->unknown0C=index;
    Unknown80042DECValue *copy=entry.value;
    unknown80042DECRetain(copy);
    fn_80041A44(object,index,1,&copy);
    if(name) fn_80066490(entry.value,name);
    entry.value->unknown10=word;
    entry.value->unknown14=0;
    entry.value->slot5C(value);
    if(object->unknown41){
        Unknown80042DECMetadata *metadata=value->slot58();
        void *context=NULL;
        if(object->unknown42 && metadata && fn_80066180(metadata)) context=fn_80060834(fn_80066180(metadata));
        if(!context) context=fn_80068430(value);
        if(context){
            int result=fn_800607D4()->slot7C(reinterpret_cast<Unknown80042DECValue *>(context));
            if(result==1 || result==2) result=-1;
            entry.value->slot74(result);
        }
    }
    if(value){
        target=entry.value;
        fn_80068900(target,value->slot58());
    }
    return index;
}
extern "C" int fn_8004366C(Unknown80042DECOwner *object, void *owner, Unknown80042DECValue *value, void *arg6, void *arg7, void *name, int word, unsigned char flag){
    if(!value) return -1;
    int index=0;
    if(object->unknown08 > 0){
        index=fn_800432E8(object,lbl_80561D10,value);
        if(index < object->unknown08 && fn_80042A14(object,index)==value) return -1;
    }
    if(!arg6) arg6=fn_80037E48();
    Unknown80042DECReference entry;
    entry.value=fn_8002C7D4(fn_80068430(object));
    entry.value->unknown0C=index;
    Unknown80042DECValue *copy=entry.value;
    unknown80042DECRetain(copy);
    fn_80041A44(object,index,1,&copy);
    if(name) fn_80066490(entry.value,name);
    entry.value->unknown10=word;
    entry.value->unknown14=1;
    fn_80057A28(entry.value,arg6);
    entry.value->unknown1C=fn_8005641C(value);
    entry.value->unknown2C=arg7;
    entry.value->slot5C(value);
    entry.value->unknown34=flag;
    if(object->unknown41){
        void *context=NULL;
        if(object->unknown42 && owner && fn_80063244(owner)) context=fn_80060834(fn_80063244(owner));
        if(!context) context=fn_800590A0(value);
        if(context){
            int result=fn_800607D4()->slot7C(reinterpret_cast<Unknown80042DECValue *>(context));
            if(result==1 || result==2) result=-1;
            entry.value->slot74(result);
        }
    }
    return entry.value->unknown0C;
}
extern "C" int fn_8004388C(Unknown80042DECOwner *object, Unknown80042DECValue *value, void *name, int word){
    if(!value) return -1;
    int index=fn_800432E8(object,lbl_80561D10,value);
    if(object->unknown08 > 0 && index < object->unknown08 && fn_80042A14(object,index)==value) return -1;
    Unknown80042DECReference entry;
    entry.value=fn_80032C4C(fn_80068430(object));
    fn_80066490(entry.value,name);
    entry.value->unknown10=word;
    entry.value->unknown14=2;
    entry.value->slot5C(value);
    entry.value->unknown0C=index;
    Unknown80042DECValue *copy=entry.value;
    unknown80042DECRetain(copy);
    fn_80041A44(object,index,1,&copy);
    return entry.value->unknown0C;
}
#pragma pop
