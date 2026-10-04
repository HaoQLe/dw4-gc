#include <igGap.h>

// Synthetic metadata views; unused virtual slots and field meanings are unknown.
struct Unknown80042824Result {
    int unknown00;
    Unknown80042824Result(const Unknown80042824Result&);
};
class Unknown80042824Value {
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
    virtual Unknown80042824Value *slot58();
    virtual void slot5C(void *);
    virtual void slot60(void *);
    virtual unsigned char slot64();
    unsigned int unknown04;
    unsigned int unknown08;
    void *unknown0C;
    void *unknown10;
    void *unknown14;
    Unknown80042824Value *unknown18;
};
struct Unknown80042824Storage {
    unsigned char unknown00[8];
    int unknown08;
    int unknown0C;
    Unknown80042824Value **unknown10;
};
class Unknown80042824Provider {
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
    virtual Unknown80042824Result slot60();
    virtual unsigned char slot64();
};
struct Unknown80042824 {
    unsigned char unknown00[8];
    int unknown08;
    int unknown0C;
    Unknown80042824Value **unknown10;
    void *unknown14;
    Unknown80042824Storage *unknown18;
    void *unknown1C;
    void *unknown20;
    void *unknown24;
    void *unknown28;
    Unknown80042824Storage *unknown2C;
    unsigned char unknown30[0x14];
    Unknown80042824Provider *unknown44;
};
extern "C" {
    void fn_80070140(void *, void *);
    int fn_80043D38(void *);
    Unknown80042824Value *fn_80042FE4(void *, int);
    void fn_800667D4(void *);
    Unknown80042824Value *fn_80042B1C(Unknown80042824 *, int);
    Unknown80042824Value *fn_80069724(void *, void *);
    extern void *lbl_80561D10, *lbl_80561710, *lbl_805616E8;
    void fn_80066E1C(void *);
    unsigned char fn_80068128(void *, void *);
    int fn_80065D88(void *);
    Unknown80042824Value *fn_800658E4(void *, int);
    void fn_8006A47C(void *, void *, void *);
}
#pragma push
#pragma auto_inline off
extern "C" void fn_80042824(Unknown80042824 *object){
    if(object->unknown20){
        for(int index = 0; index < object->unknown18->unknown08; ++index)
            fn_80070140(object->unknown20, object->unknown18->unknown10[index]->unknown14);
    }
    int count = fn_80043D38(object);
    for(int index = 0; index < count; ++index){
        Unknown80042824Value *value = fn_80042FE4(object, index);
        if(value->unknown0C == object) value->unknown0C = NULL;
    }
    fn_800667D4(object);
    if(object->unknown44 && object->unknown44->slot64()) object->unknown44->slot60();
}
#pragma pop
