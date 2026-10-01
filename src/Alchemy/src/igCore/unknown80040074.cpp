#include <igGap.h>

// Synthetic views containing only the observed aggregate and virtual layout.
class Unknown80040074Element {
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
    virtual Gap::igInt slot6C();
    virtual void slot70(Gap::igInt);
    virtual void slot74();
    virtual void slot78(Gap::igInt);
    virtual void slot7C(Gap::igInt);
    virtual void slot80(Gap::igInt);
    virtual void slot84(Gap::igInt);
    virtual void slot88(Gap::igInt);
    virtual void slot8C();
    virtual void slot90(Gap::igInt, Gap::igInt);
    virtual void slot94(Gap::igInt, Gap::igInt);
    virtual void slot98();
    virtual void slot9C(Gap::igInt, Gap::igInt);
    virtual void slotA0(Gap::igInt, Gap::igInt);
    virtual void slotA4(Gap::igInt, Gap::igInt, Gap::igInt);
    virtual void slotA8(Gap::igInt, Gap::igInt, Gap::igInt);
    virtual Gap::igInt slotAC(Gap::igInt, Gap::igInt);
    virtual Gap::igInt slotB0(Gap::igInt, Gap::igInt);
    virtual Gap::igBool slotB4(Gap::igInt, Gap::igInt);
    virtual Gap::igBool slotB8(Gap::igInt, Gap::igInt);
    virtual Gap::igBool slotBC(Gap::igInt, Gap::igInt);
    virtual Gap::igBool slotC0(Gap::igInt, Gap::igInt);
    virtual Gap::igInt slotC4(Gap::igInt);
};

struct Unknown80040074Storage {
    unsigned char unknown00[8];
    Gap::igInt unknown08;
    unsigned char unknown0C[4];
    Unknown80040074Element **unknown10;
};

struct Unknown80040074 {
    unsigned char unknown00[0x34];
    Unknown80040074Storage *unknown34;
};

static inline Unknown80040074Element *unknownElement(Unknown80040074 *object, Gap::igInt offset){
    return *reinterpret_cast<Unknown80040074Element **>(reinterpret_cast<char *>(object->unknown34->unknown10) + offset);
}

extern "C" Gap::igInt fn_80040074(Unknown80040074 *object){
    Gap::igInt offset;
    Gap::igInt result;
    Gap::igInt index;
    result = 0;
    index = 0;
    offset = 0;
    while(index < object->unknown34->unknown08){
        Gap::igInt value = unknownElement(object, offset)->slot6C();
        if(value > result) result = value;
        ++index;
        offset += 4;
    }
    return result;
}

extern "C" void fn_800400F4(Unknown80040074 *object, Gap::igInt value){
    Gap::igInt offset;
    Gap::igInt index;
    index = 0;
    offset = 0;
    while(index < object->unknown34->unknown08){
        unknownElement(object, offset)->slot70(value);
        ++index;
        offset += 4;
    }
}

extern "C" void fn_80040168(Unknown80040074 *object, Gap::igInt value){
    Gap::igInt offset;
    Gap::igInt index;
    index = 0;
    offset = 0;
    while(index < object->unknown34->unknown08){
        unknownElement(object, offset)->slot78(value);
        ++index;
        offset += 4;
    }
}

extern "C" void fn_800401DC(Unknown80040074 *object, Gap::igInt value){
    Gap::igInt offset;
    Gap::igInt index;
    index = 0;
    offset = 0;
    while(index < object->unknown34->unknown08){
        unknownElement(object, offset)->slot7C(value);
        ++index;
        offset += 4;
    }
}

extern "C" void fn_80040250(Unknown80040074 *object, Gap::igInt value){
    Gap::igInt offset;
    Gap::igInt index;
    index = 0;
    offset = 0;
    while(index < object->unknown34->unknown08){
        unknownElement(object, offset)->slot80(value);
        ++index;
        offset += 4;
    }
}

extern "C" void fn_800402C4(Unknown80040074 *object, Gap::igInt value){
    Gap::igInt offset;
    Gap::igInt index;
    index = 0;
    offset = 0;
    while(index < object->unknown34->unknown08){
        unknownElement(object, offset)->slot84(value);
        ++index;
        offset += 4;
    }
}

extern "C" void fn_80040338(Unknown80040074 *object, Gap::igInt value){
    Gap::igInt offset;
    Gap::igInt index;
    index = 0;
    offset = 0;
    while(index < object->unknown34->unknown08){
        unknownElement(object, offset)->slot88(value);
        ++index;
        offset += 4;
    }
}

extern "C" void fn_800403AC(Unknown80040074 *object, Gap::igInt first, Gap::igInt second){
    Gap::igInt offset;
    Gap::igInt index;
    index = 0;
    offset = 0;
    while(index < object->unknown34->unknown08){
        unknownElement(object, offset)->slot90(first, second);
        ++index;
        offset += 4;
    }
}

extern "C" void fn_80040428(Unknown80040074 *object, Gap::igInt first, Gap::igInt second){
    Gap::igInt offset;
    Gap::igInt index;
    index = 0;
    offset = 0;
    while(index < object->unknown34->unknown08){
        unknownElement(object, offset)->slot94(first, second);
        ++index;
        offset += 4;
    }
}

extern "C" void fn_800404A4(Unknown80040074 *object, Gap::igInt first, Gap::igInt second){
    Gap::igInt offset;
    Gap::igInt index;
    index = 0;
    offset = 0;
    while(index < object->unknown34->unknown08){
        unknownElement(object, offset)->slot9C(first, second);
        ++index;
        offset += 4;
    }
}

extern "C" void fn_80040520(Unknown80040074 *object, Gap::igInt first, Gap::igInt second){
    Gap::igInt offset;
    Gap::igInt index;
    index = 0;
    offset = 0;
    while(index < object->unknown34->unknown08){
        unknownElement(object, offset)->slotA0(first, second);
        ++index;
        offset += 4;
    }
}

extern "C" void fn_8004059C(Unknown80040074 *object, Gap::igInt first, Gap::igInt second, Gap::igInt third){
    Gap::igInt offset;
    Gap::igUnsignedInt count;
    Gap::igUnsignedInt index;
    index = 0;
    count = object->unknown34->unknown08;
    offset = 0;
    while(index < count){
        unknownElement(object, offset)->slotA4(first, second, third);
        ++index;
        offset += 4;
    }
}

extern "C" void fn_80040624(Unknown80040074 *object, Gap::igInt first, Gap::igInt second, Gap::igInt third){
    Gap::igInt offset;
    Gap::igInt index;
    index = 0;
    offset = 0;
    while(index < object->unknown34->unknown08){
        unknownElement(object, offset)->slotA8(first, second, third);
        ++index;
        offset += 4;
    }
}

extern "C" Gap::igInt fn_800406A8(Unknown80040074 *object, Gap::igInt first, Gap::igInt second){
    Gap::igInt offset;
    Gap::igInt result;
    Gap::igInt index;
    result = 0;
    index = 0;
    offset = 0;
    while(index < object->unknown34->unknown08){
        result += unknownElement(object, offset)->slotAC(first, second);
        ++index;
        offset += 4;
    }
    return result;
}

extern "C" Gap::igInt fn_80040730(Unknown80040074 *object, Gap::igInt first, Gap::igInt second){
    Gap::igInt offset;
    Gap::igInt index;
    index = 0;
    offset = 0;
    while(index < object->unknown34->unknown08){
        if(unknownElement(object, offset)->slotB0(first, second)) return -1;
        ++index;
        offset += 4;
    }
    return 0;
}

extern "C" Gap::igBool fn_800407C0(Unknown80040074 *object, Gap::igInt first, Gap::igInt second){
    Gap::igInt offset;
    Gap::igInt index;
    index = 0;
    offset = 0;
    while(index < object->unknown34->unknown08){
        if(!unknownElement(object, offset)->slotB4(first, second)) return false;
        ++index;
        offset += 4;
    }
    return true;
}

extern "C" Gap::igBool fn_80040850(Unknown80040074 *object, Gap::igInt first, Gap::igInt second){
    Gap::igInt offset;
    Gap::igInt index;
    index = 0;
    offset = 0;
    while(index < object->unknown34->unknown08){
        if(!unknownElement(object, offset)->slotB8(first, second)) return false;
        ++index;
        offset += 4;
    }
    return true;
}

extern "C" Gap::igBool fn_800408E0(Unknown80040074 *object, Gap::igInt first, Gap::igInt second){
    Gap::igInt offset;
    Gap::igInt index;
    index = 0;
    offset = 0;
    while(index < object->unknown34->unknown08){
        if(!unknownElement(object, offset)->slotBC(first, second)) return false;
        ++index;
        offset += 4;
    }
    return true;
}

extern "C" Gap::igBool fn_80040970(Unknown80040074 *object, Gap::igInt first, Gap::igInt second){
    Gap::igInt offset;
    Gap::igInt index;
    index = 0;
    offset = 0;
    while(index < object->unknown34->unknown08){
        if(!unknownElement(object, offset)->slotC0(first, second)) return false;
        ++index;
        offset += 4;
    }
    return true;
}

extern "C" Gap::igInt fn_80040A00(Unknown80040074 *object, Gap::igInt value){
    Gap::igInt offset;
    Gap::igInt result;
    Gap::igInt index;
    result = 0;
    index = 0;
    offset = 0;
    while(index < object->unknown34->unknown08){
        result += unknownElement(object, offset)->slotC4(value);
        ++index;
        offset += 4;
    }
    return result;
}
