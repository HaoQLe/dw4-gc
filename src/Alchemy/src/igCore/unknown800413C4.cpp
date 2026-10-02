#include <igGap.h>

// Synthetic creation/storage views; field meanings and unused slots are unknown.
struct Unknown800413C4Metadata;
class Unknown800413C4;
class Unknown800413C4Value {
public:
    virtual void slot08();
    virtual void slot0C();
    virtual void slot10();
    virtual void slot14();
    virtual void slot18();
    virtual void slot1C();
    virtual void slot20();
    virtual void slot24();
    virtual void slot28();
    virtual void slot2C();
    virtual void slot30();
    virtual void slot34();
    virtual void slot38();
    virtual void slot3C();
    virtual void slot40();
    virtual void slot44();
    virtual void slot48();
    virtual void slot4C();
    virtual void slot50();
    virtual void slot54();
    virtual void slot58();
    virtual void slot5C();
    virtual void slot60();
    virtual void slot64();
    virtual void slot68();
    virtual void slot6C();
    virtual unsigned char slot70(Unknown800413C4 *);
    virtual void slot74(Unknown800413C4 *);
    Gap::igUnsignedInt unknown04;
};
struct Unknown800413C4Storage {
    unsigned char unknown00[8];
    Gap::igInt unknown08;
    unsigned char unknown0C[4];
    Unknown800413C4Value **unknown10;
};
struct Unknown800413C4 {
    unsigned char unknown00[0x10];
    Unknown800413C4Storage *unknown10;
};
extern "C" {
    Unknown800413C4Metadata *fn_800412F8(Unknown800413C4 *, const char *);
    Unknown800413C4Value *fn_800414D0(Unknown800413C4 *, Unknown800413C4Metadata *);
    void *fn_80068430(void *);
    Unknown800413C4Value *fn_8006546C(Unknown800413C4Metadata *, void *);
    void fn_80066E1C(void *);
    void fn_80069128(Unknown800413C4Storage *, Unknown800413C4Value *);
    unsigned char fn_80068128(Unknown800413C4Value *, Unknown800413C4Metadata *);
}
inline void unknown800413C4ReleaseValue(Unknown800413C4Value *value){
    --value->unknown04;
    if(!(reinterpret_cast<volatile Gap::igUnsignedInt *>(value)[1] & 0x7FFFFF)) fn_80066E1C(value);
}

#pragma push
#pragma auto_inline off
extern "C" Unknown800413C4Value *fn_800413C4(Unknown800413C4 *object, const char *name){
    Unknown800413C4Metadata *metadata = fn_800412F8(object, name);
    if(!metadata) return NULL;
    Unknown800413C4Value *value = fn_800414D0(object, metadata);
    if(!value){
        value = fn_8006546C(metadata, fn_80068430(object));
        if(value){
            if(!value->slot70(object)){
                unknown800413C4ReleaseValue(value);
                value = NULL;
            }else{
                fn_80069128(object->unknown10, value);
                unknown800413C4ReleaseValue(value);
                value->slot74(object);
            }
        }
    }
    return value;
}
extern "C" void fn_800414C4(Unknown800413C4 *){}
extern "C" unsigned char fn_800414C8(Unknown800413C4 *){ return 1; }
extern "C" Unknown800413C4Value *fn_800414D0(Unknown800413C4 *object, Unknown800413C4Metadata *metadata){
    for(Gap::igInt index = 0; index < object->unknown10->unknown08; ++index){
        if(fn_80068128(object->unknown10->unknown10[index], metadata)) return object->unknown10->unknown10[index];
    }
    return NULL;
}
extern "C" Gap::igInt fn_80041554(Unknown800413C4 *){ return -1; }
#pragma pop
