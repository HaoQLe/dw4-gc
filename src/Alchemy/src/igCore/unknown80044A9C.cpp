#include "unknown800442F8.h"
#pragma push
#pragma auto_inline off
extern "C" void fn_80044A9C(Unknown800442F8Owner *object,Unknown80042DECStorage *storage){
    Unknown800442F8Reference entry(fn_80024FB4(fn_80068430(object)));
    if(fn_80045574(entry.value)) fn_800442A0(object,0,reinterpret_cast<Unknown800442F8Stream *>(entry.value)->unknown08.textElse());
    if(fn_800455A0(entry.value)) fn_800442A0(object,6,reinterpret_cast<Unknown800442F8Stream *>(entry.value)->unknown08.textElse());
    if(fn_800455C8(entry.value)) fn_800442A0(object,7,reinterpret_cast<Unknown800442F8Stream *>(entry.value)->unknown08.textElse());
    if(!storage || storage->unknown08==0) return;
    for(int index=0;index<storage->unknown08;++index) reinterpret_cast<Unknown800442F8Stream *>(storage->unknown10[index])->slot6C(object);
}
extern "C" void fn_80044C0C(void *){}
inline void unknown80044C10Assign(Unknown800442F8Stream *stream, const char *text){
    const char *p=unknown80042DECAcquire(text);
    stream->unknown08.release();
    stream->unknown08.value=p;
}
inline void *unknown80044C10Load(Unknown800442F8Stream *loader,const Unknown800442F8String &name){
    return loader->slot64(name.text(),lbl_8055D7FC);
}
extern "C" unsigned char fn_80044C10(Unknown800442F8Owner *object,const char *name,const char *path){
    Unknown800442F8String string(name);
    if(!string.value || strlen(string.value)==0) string.adopt(lbl_80468F58);
    void *context=fn_80068430(object);
    unknown80042DECRelease(reinterpret_cast<Unknown80042DECValue *>(object->unknown20));
    object->unknown20=fn_8002FFC8(context);
    void *result=object->unknown20->slot64(string.value,lbl_8055D7FC);
    if(!result){
        if(!path || strlen(path)==0) path=fn_8003D49C(_arkCore__Q23Gap4Core);
        if(path && strlen(path)!=0){
            Unknown800442F8Reference reference(reinterpret_cast<Unknown80042DECValue *>(fn_8002F744(fn_80068430(object))));
            unknown80044C10Assign(reinterpret_cast<Unknown800442F8Stream *>(reference.value),path);
            result=unknown80044C10Load(object->unknown20,reinterpret_cast<Unknown800442F8Stream *>(reinterpret_cast<Unknown800442F8Stream *>(reference.value)->slot5C(string.value).value)->unknown08);
        }
    }
    if(!result){
        Unknown800442F8Reference reference(reinterpret_cast<Unknown80042DECValue *>(fn_8002F744(fn_80068430(object))));
        unknown80044C10Assign(reinterpret_cast<Unknown800442F8Stream *>(reference.value),fn_8003D4A4(_arkCore__Q23Gap4Core));
        result=unknown80044C10Load(object->unknown20,reinterpret_cast<Unknown800442F8Stream *>(reinterpret_cast<Unknown800442F8Stream *>(reference.value)->slot5C(string.value).value)->unknown08);
    }
    if(!result){
        unknown80042DECRelease(reinterpret_cast<Unknown80042DECValue *>(object->unknown20));
        object->unknown20=NULL;
        return 0;
    }
    fn_80071F9C(object->unknown24,reinterpret_cast<const char *>(reinterpret_cast<Unknown800442F8Stream *>(result)->unknown0C));
    fn_8004540C(object,object->unknown20);
    object->unknown20->slot68();
    unknown80042DECRelease(reinterpret_cast<Unknown80042DECValue *>(object->unknown20));
    object->unknown20=NULL;
    return 1;
}
#pragma pop
