#include <igGap.h>

class Unknown80040C84;

class Unknown80040C84Element {
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
    virtual void slotD0();
    virtual void slotD4(Gap::igInt);
    virtual void slotD8();
    virtual void slotDC();
    virtual void slotE0(Gap::igInt, const char *, Gap::igInt);

    unsigned char unknown04[4];
    Gap::igInt unknown08;
};

struct Unknown80040C84Storage {
    unsigned char unknown00[8];
    Gap::igInt unknown08;
    unsigned char unknown0C[4];
    Unknown80040C84Element **unknown10;
};

class Unknown80040C84 {
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
    virtual Unknown80040C84 *slot5C();

    unsigned char unknown04[0x30];
    Unknown80040C84Storage *unknown34;
};

extern "C" {
    extern Unknown80040C84 *lbl_80561E14;
    extern char lbl_8055D7D4[4], lbl_8055D7D8[4];
    int sscanf(const char *, const char *, ...);
}

static inline Unknown80040C84Element *unknownElement(Unknown80040C84Storage *storage, Gap::igInt offset) {
    return *reinterpret_cast<Unknown80040C84Element **>(reinterpret_cast<char *>(storage->unknown10) + offset);
}

extern "C" Unknown80040C84 *fn_80040C84() {
    return lbl_80561E14;
}

extern "C" void fn_80040C8C(Unknown80040C84 *object, Gap::igInt value) {
    Gap::igInt offset;
    Gap::igInt index;
    index = 0;
    offset = 0;
    while (index < object->unknown34->unknown08) {
        unknownElement(object->unknown34, offset)->slotD4(value);
        ++index;
        offset += 4;
    }
}

extern "C" Gap::igInt fn_80040D00(Unknown80040C84 *object, Gap::igInt first, const char *text, Gap::igInt third) {
    Gap::igInt secondOffset;
    Gap::igInt firstOffset;
    Gap::igInt offset;
    Unknown80040C84Storage *storage;
    Gap::igInt index;
    firstOffset = 0;
    sscanf(text, lbl_8055D7D4, &firstOffset);
    storage = object->slot5C()->unknown34;
    index = 0;
    offset = 0;
    while (index < storage->unknown08) {
        Unknown80040C84Element *element = unknownElement(storage, offset);
        element->slotE0(first + element->unknown08, text + firstOffset, third);
        ++index;
        offset += 4;
    }
    sscanf(text, lbl_8055D7D8, &secondOffset);
    return firstOffset + secondOffset;
}
