#include "unknown80042DEC.h"

struct Unknown80044130 {
    unsigned char unknown00[8];
    Unknown80042DECStorage *unknown08;
    Unknown80042DECStorage *unknown0C;
    Unknown80042DECStorage *unknown10;
    unsigned char unknown14[0x1C];
    unsigned char unknown30;
};
struct Unknown80044068String { const char *unknown00; };
extern "C" {
    int sscanf(const char *, const char *, ...);
    int sprintf(char *, const char *, ...);
    extern char lbl_8055D7E4[6], lbl_8055D7EC[3], lbl_80468F40[];
    extern const char *lbl_8055DC4C;
    extern void *_arkCore__Q23Gap4Core;
    void fn_800667D0(void *);
    void fn_800667D4(void *);
    void fn_8006DC50(void *, int, const char *, unsigned char *, unsigned char, int);
    void fn_800691E8(void *, int);
    Unknown80042DECValue *fn_80024FB4(void *);
    void fn_8004513C(void *);
    void fn_80071F9C(void *, void *);
}

#pragma push
#pragma auto_inline off
extern "C" unsigned int fn_8004401C(Unknown80042DECOwner *object){ return (object->unknown34 & 0x1FFF)<<3; }
extern "C" int fn_80044028(void *, void *value, const char *text){
    int result=0;
    sscanf(text,lbl_8055D7E4,value,&result);
    return result;
}
extern "C" void fn_80044068(Unknown80044068String *result, void *, const double *value){
    char buffer[0x400];
    sprintf(buffer,lbl_8055D7EC,*value);
    result->unknown00=reinterpret_cast<unsigned long>(buffer)==0 ? NULL : unknown80042DECAcquire(buffer);
}
extern "C" int fn_800440EC(void *){ return 8; }
extern "C" void fn_800440F4(Unknown80042DECValue *object, double value){ object->slot8C(&value); }
extern "C" int fn_80044128(void *){ return 8; }
extern "C" void fn_80044130(Unknown80044130 *object){
    fn_800667D0(object);
    unsigned char value;
    fn_8006DC50(reinterpret_cast<void **>(_arkCore__Q23Gap4Core)[0x38/4],2,lbl_80468F40,&value,object->unknown30,1);
    object->unknown30=value;
    fn_800691E8(object->unknown08,13);
    fn_800691E8(object->unknown0C,13);
    fn_800691E8(object->unknown10,13);
    for(int index=0; index<13; ++index){
        Unknown80042DECValue *entry=fn_80024FB4(fn_80068430(object));
        Unknown80042DECStorage *storage=object->unknown08;
        Unknown80042DECReference reference(entry);
        unknown80042DECRelease(storage->unknown10[index]);
        if(storage->unknown08!=0 && index>=0 && index<storage->unknown08) storage->unknown10[index]=entry;
    }
}
extern "C" void fn_8004426C(Unknown80044130 *object){ fn_8004513C(object); fn_800667D4(object); }
extern "C" void fn_800442A0(Unknown80044130 *object, int index, void *value){ fn_80071F9C(object->unknown08->unknown10[index],value); }
extern "C" const char *fn_800442D4(Unknown80044130 *object, int index){
    const char *value=reinterpret_cast<const char **>(object->unknown08->unknown10[index])[2];
    if(value) return value;
    return lbl_8055DC4C;
}
#pragma pop
