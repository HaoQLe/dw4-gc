#include <igGap.h>

// Synthetic partition with observed byte-storage offsets and virtual slots.
class Unknown8003FD40Provider {
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
    virtual void slot8C();
    virtual void slot90();
    virtual void slot94();
    virtual void slot98();
    virtual void slot9C();
    virtual void slotA0();
    virtual void slotA4();
    virtual void slotA8();
    virtual void slotAC();
    virtual void slotB0();
    virtual void slotB4();
    virtual void slotB8();
    virtual void slotBC();
    virtual void slotC0();
    virtual void slotC4();
    virtual void slotC8();
    virtual void slotCC();
    virtual void slotD0(void *, Gap::igUnsignedInt);
};
class Unknown8003FD40 {
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
    virtual void slot8C(void *);
    unsigned char unknown04[0x1C];
    char *unknown20;
    unsigned char unknown24[0x10];
    Gap::igInt unknown34;
};
extern "C" {
    Unknown8003FD40Provider *fn_80037E48(void *);
    int sscanf(const char *, const char *, ...);
    int sprintf(char *, const char *, ...);
    void *fn_80054140(Gap::igUnsignedInt);
    void *fn_80053F28(void *);
    const char *fn_80054094(void *, const char *);
    extern void *lbl_80562140;
    extern char lbl_8055D794[5], lbl_8055D7C0[3];
}

extern "C" void igCharArrayMetaField_virtualD0(Unknown8003FD40 *object, void *value, Gap::igUnsignedInt count){
    fn_80037E48(object)->slotD0(value, count * object->unknown34);
}

extern "C" Gap::igUnsignedInt igCharArrayMetaField_virtual64(Unknown8003FD40 *object){
    return object->unknown34 & 0xFFFF;
}

extern "C" void fn_8003FDA4(Unknown8003FD40 *object, Gap::igInt index, char value){
    object->slot8C(NULL);
    object->unknown20[index] = value;
}

extern "C" void fn_8003FDF8(Unknown8003FD40 *object, char value){
    object->slot8C(NULL);
    char *bytes = object->unknown20;
    Gap::igInt index = 0;
    while(index < object->unknown34){
        *bytes = value;
        ++index;
        ++bytes;
    }
}

extern "C" int igCharArrayMetaField_virtualE0(void *, char *value, const char *text){
    int consumed = 0;
    int number = 0;
    sscanf(text, lbl_8055D794, &number, &consumed);
    *value = number;
    return consumed;
}

inline const char *unknown8003FEBCAcquire(const char *text){
    if(reinterpret_cast<unsigned long>(text) == 0) return NULL;
    if(!lbl_80562140){
        void *storage = fn_80054140(0x10);
        if(storage) storage = fn_80053F28(storage);
        lbl_80562140 = storage;
    }
    return fn_80054094(lbl_80562140, text);
}

struct Unknown8003FEBCString {
    const char *unknown00;
    Unknown8003FEBCString(const Unknown8003FEBCString&);
    inline Unknown8003FEBCString(const char *text) : unknown00(unknown8003FEBCAcquire(text)) {}
};

extern "C" Unknown8003FEBCString igCharArrayMetaField_virtualE4(void *, const signed char *value){
    char buffer[0x400];
    sprintf(buffer, lbl_8055D7C0, *value);
    return Unknown8003FEBCString(buffer);
}
