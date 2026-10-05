#include "unknown800442F8.h"
#pragma push
#pragma auto_inline off
inline void unknown800442F8Put(Unknown80042DECStorage *storage,int index,const Unknown800442F8Reference &ref){
    Unknown80042DECValue *p=ref.value;
    unknown80042DECRetain(p);
    unknown80042DECRelease(storage->unknown10[index]);
    if(storage->unknown08!=0 && index>=0 && index<storage->unknown08) storage->unknown10[index]=p;
}
inline void unknown800442F8SetString(Unknown80042DECStorage *storage,int index,const Unknown800442F8String &string){
    if(storage->unknown08!=0 && index>=0 && index<storage->unknown08){
        const char **array=reinterpret_cast<const char **>(storage->unknown10)+index;
        if(string.value) ++reinterpret_cast<unsigned int *>(const_cast<char *>(string.value))[-1];
        if(*array) reinterpret_cast<Gap::Core::igStringPoolItemId>(*array-sizeof(Gap::Core::igStringPoolItem))->release();
        *array=string.value;
    }
}
inline void unknown800442F8Create(Unknown800442F8Reference &ref,void *context){
    unknown80042DECRelease(ref.value);
    ref.value=fn_80024B5C(context);
}
extern "C" void fn_800442F8(Unknown800442F8Owner *object, int index, const char *key, const char *text){
    Unknown800442F8Reference first, second;
    Unknown80042DECValue *value=unknown800442F8At(object->unknown0C,index);
    if(!value){
        unknown800442F8Create(first,fn_80068430(object));
        unknown800442F8Create(second,fn_80068430(object));
        Unknown80042DECStorage *storage=object->unknown0C;
        unknown800442F8Put(storage,index,first);
        Unknown80042DECStorage *other=object->unknown10;
        unknown800442F8Store(other,index,second.value);
    }else{
        first.assign(value);
        Unknown80042DECValue *element=object->unknown10->unknown10[index];
        second.assign(element);
    }
    int found=fn_8004270C(first.value,Unknown800442F8String(key),0);
    if(found>=0){
        unknown800442F8SetString(reinterpret_cast<Unknown80042DECStorage *>(second.value),found,Unknown800442F8String(text));
    }else{
        fn_8002080C(first.value,Unknown800442F8String(key));
        fn_8002080C(second.value,Unknown800442F8String(text));
    }
}
#pragma pop
