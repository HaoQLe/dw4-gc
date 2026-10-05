#include "unknown800442F8.h"
#pragma push
#pragma auto_inline off
extern "C" const char *fn_800447F4(Unknown800442F8Owner *object,int index,const char *key){
    Unknown800442F8Reference first, second;
    Unknown80042DECValue *value=unknown800442F8At(object->unknown0C,index);
    if(!value) return NULL;
    first.assign(value);
    second.assign(object->unknown10->unknown10[index]);
    int found=fn_8004270C(first.value,Unknown800442F8String(key),0);
    if(found>=0){
        return fn_800218F4(second.value,found).value;
    }
    return NULL;
}
#pragma pop
