#ifndef UNKNOWN8003ED10_H
#define UNKNOWN8003ED10_H

#include <igGap.h>

// Synthetic recovery view; field meanings and unused virtual slots are unknown.
struct Unknown8003ED10Result {
    Gap::igInt unknown00;
    inline Unknown8003ED10Result(Gap::igInt value) : unknown00(value) {}
    Unknown8003ED10Result(const Unknown8003ED10Result&);
};
struct Unknown8003ED10Storage {
    unsigned char unknown00[8];
    Gap::igInt unknown08;
    Gap::igInt unknown0C;
    Gap::igUnsignedInt *unknown10;
};
class Unknown8003ED10 {
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
    virtual Unknown8003ED10Result slot60(Gap::igInt);
    virtual void slot64();
    virtual Gap::igInt slot68(const Gap::igUnsignedInt *);
    virtual void slot6C();
    virtual Gap::igInt slot70(const Gap::igUnsignedInt *);
    virtual Gap::igInt slot74(const Gap::igUnsignedInt *);
    virtual Gap::igBool slot78(const Gap::igUnsignedInt *, Gap::igInt);
    virtual void slot7C(Gap::igInt);
    Gap::igUnsignedInt unknown04;
    Gap::igInt unknown08;
    Gap::igInt unknown0C;
    Unknown8003ED10Storage *unknown10;
    Unknown8003ED10Storage *unknown14;
};
extern "C" {
    void fn_8004155C(void *, Gap::igInt, Gap::igInt);
    void fn_80041660(void *, Gap::igInt, Gap::igInt);
    extern Gap::igInt kSuccess__3Gap;
    extern Gap::igInt kFailure__3Gap;
}

#endif
