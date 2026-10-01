#include <igGap.h>

class Unknown80040A80;

class Unknown80040A80Element {
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
    virtual Gap::igInt slotC8(Gap::igInt, Gap::igInt, Gap::igInt, Gap::igInt);
    virtual Gap::igInt slotCC(Gap::igInt, Gap::igInt, Gap::igInt, Gap::igInt);
    virtual void slotD0(Gap::igInt, Gap::igInt);

    unsigned char unknown04[4];
    Gap::igInt unknown08;
};

struct Unknown80040A80Storage {
    unsigned char unknown00[8];
    Gap::igInt unknown08;
    unsigned char unknown0C[4];
    Unknown80040A80Element **unknown10;
};

class Unknown80040A80 {
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
    virtual Unknown80040A80 *slot5C();

    unsigned char unknown04[4];
    Gap::igInt unknown08;
    unsigned char unknown0C[8];
    unsigned short unknown14;
    unsigned char unknown16[0x1E];
    Unknown80040A80Storage *unknown34;
};

static inline Unknown80040A80Element *unknownElement(Unknown80040A80 *object, Gap::igInt offset){
    return *reinterpret_cast<Unknown80040A80Element **>(reinterpret_cast<char *>(object->unknown34->unknown10) + offset);
}

extern "C" Gap::igInt fn_80040A80(Unknown80040A80 *object, Gap::igInt first, Gap::igInt second, Gap::igInt third, Gap::igInt fourth){
    Gap::igInt offset;
    Gap::igInt count;
    Gap::igInt base;
    Gap::igInt result;
    Gap::igInt index;
    base = object->unknown08;
    count = object->unknown34->unknown08;
    result = 0;
    index = 0;
    offset = 0;
    while(index < count){
        Unknown80040A80Element *element = unknownElement(object, offset);
        result += element->slotC8(first + element->unknown08 - base, second + element->unknown08 - base, third, fourth);
        ++index;
        offset += 4;
    }
    return result;
}

extern "C" Gap::igInt fn_80040B2C(Unknown80040A80 *object, Gap::igInt first, Gap::igInt second, Gap::igInt third, Gap::igInt fourth){
    Gap::igInt offset;
    Gap::igInt count;
    Gap::igInt base;
    Gap::igInt result;
    Gap::igInt index;
    base = object->unknown08;
    count = object->unknown34->unknown08;
    result = 0;
    index = 0;
    offset = 0;
    while(index < count){
        Unknown80040A80Element *element = unknownElement(object, offset);
        result += element->slotCC(first + element->unknown08 - base, second + element->unknown08 - base, third, fourth);
        ++index;
        offset += 4;
    }
    return result;
}

extern "C" void fn_80040BD8(Unknown80040A80 *object, Gap::igInt value, Gap::igInt count){
    Gap::igInt offset;
    Unknown80040A80Storage *storage;
    Gap::igInt currentValue;
    Gap::igInt outerIndex;
    Gap::igInt elementIndex;
    currentValue = value;
    storage = object->slot5C()->unknown34;
    outerIndex = 0;
    while(outerIndex < count){
        elementIndex = 0;
        offset = 0;
        while(elementIndex < storage->unknown08){
            Unknown80040A80Element *element = *reinterpret_cast<Unknown80040A80Element **>(reinterpret_cast<char *>(storage->unknown10) + offset);
            element->slotD0(currentValue + element->unknown08, 1);
            ++elementIndex;
            offset += 4;
        }
        currentValue += object->unknown14;
        ++outerIndex;
    }
}
