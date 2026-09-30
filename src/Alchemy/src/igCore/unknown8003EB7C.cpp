#include <igGap.h>

// Synthetic partition with observed fields and used virtual slots only.
struct Unknown8003ECB4Storage {
    unsigned char unknown00[8];
    Gap::igInt unknown08;
};
class Unknown8003EB7C {
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
    virtual void slot70();
    virtual void slot74();
    virtual void slot78();
    virtual void slot7C(Gap::igInt);
    virtual void slot80();
    virtual void slot84();
    virtual void slot88();
    virtual void slot8C(Gap::igBool *);
    Gap::igUnsignedInt unknown04;
    Gap::igInt unknown08;
    Gap::igInt unknown0C;
    Unknown8003ECB4Storage *unknown10;
};
extern "C" {
    void fn_8006388C(void *);
    void fn_800638E0(void *);
    void fn_800639E4(void *, const void *);
    void fn_80063B1C(void *);
    void fn_8004155C(void *, Gap::igInt, Gap::igInt);
    extern char lbl_80473E30[];
    Unknown8003EB7C *fn_8003EBC8(Unknown8003EB7C *);
}

#pragma push
#pragma auto_inline off
extern "C" Unknown8003EB7C *fn_8003EB7C(Unknown8003EB7C *object){
    fn_8006388C(object);
    *reinterpret_cast<void **>(object) = lbl_80473E30;
    if(object) fn_8003EBC8(object);
    return object;
}

extern "C" Unknown8003EB7C *fn_8003EBC8(Unknown8003EB7C *object){
    fn_800638E0(object);
    *reinterpret_cast<void **>(object) = lbl_80473E30;
    return object;
}
#pragma pop

extern "C" Unknown8003EB7C *fn_8003EC04(Unknown8003EB7C *object, const void *value){
    fn_800639E4(object, value);
    *reinterpret_cast<void **>(object) = lbl_80473E30;
    return object;
}

extern "C" void fn_8003EC40(void *object){ fn_80063B1C(object); }
extern "C" int fn_8003EC60(){ return 1; }
extern "C" void fn_8003EC68(Unknown8003EB7C *object, Gap::igBool value){ object->slot8C(&value); }
extern "C" int fn_8003EC9C(){ return 1; }
extern "C" void fn_8003ECA4(Unknown8003EB7C *object, Gap::igInt value){ object->unknown08 = value; }
extern "C" void fn_8003ECAC(Unknown8003EB7C *object, Gap::igInt value){ object->unknown0C = value; }
extern "C" void fn_8003ECB4(Unknown8003EB7C *object){
    if(object->unknown08 >= object->unknown10->unknown08)
        fn_8004155C(object->unknown10, object->unknown08, 4);
    object->slot7C(object->unknown0C);
}
