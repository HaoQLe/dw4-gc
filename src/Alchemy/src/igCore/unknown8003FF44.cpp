#include <igGap.h>

// Synthetic partition with observed fields and used virtual slots only.
class Unknown8003FF44 {
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
    virtual void slot7C();
    virtual void slot80();
    virtual void slot84();
    virtual void slot88();
    virtual void slot8C(unsigned char *);
    unsigned char unknown04[0x10];
    unsigned short unknown14;
};
extern "C" {
    void fn_8006388C(void *);
    void fn_800638E0(void *);
    void fn_800639E4(void *, const void *);
    void fn_80063B1C(void *);
    extern char lbl_80473F24[];
    Unknown8003FF44 *fn_8003FF90(Unknown8003FF44 *);
}

#pragma push
#pragma auto_inline off
extern "C" Unknown8003FF44 *fn_8003FF44(Unknown8003FF44 *object){
    fn_8006388C(object);
    *reinterpret_cast<void **>(object) = lbl_80473F24;
    if(object) fn_8003FF90(object);
    return object;
}

extern "C" Unknown8003FF44 *fn_8003FF90(Unknown8003FF44 *object){
    fn_800638E0(object);
    *reinterpret_cast<void **>(object) = lbl_80473F24;
    return object;
}
#pragma pop

extern "C" Unknown8003FF44 *fn_8003FFCC(Unknown8003FF44 *object, const void *value){
    fn_800639E4(object, value);
    *reinterpret_cast<void **>(object) = lbl_80473F24;
    return object;
}

extern "C" void igCharArrayMetaField_virtual08(void *object){ fn_80063B1C(object); }
extern "C" int fn_80040028(){ return 1; }
extern "C" void fn_80040030(Unknown8003FF44 *object, unsigned char value){ object->slot8C(&value); }
extern "C" int igCharArrayMetaField_virtual6C(){ return 1; }
extern "C" unsigned short fn_8004006C(Unknown8003FF44 *object){ return object->unknown14; }
