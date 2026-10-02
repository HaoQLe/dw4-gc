#include <igGap.h>

// Synthetic storage/metadata views; field meanings and unused slots are unknown.
struct Unknown8004155CMetadata;
class Unknown8004155CVirtual {
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
    virtual Unknown8004155CMetadata *slot58();
    virtual void slot5C();
    virtual void slot60();
    virtual unsigned short slot64();
};
struct Unknown8004155CMetadata {
    unsigned char unknown00[0x3C];
    Unknown8004155CVirtual *unknown3C;
};
struct Unknown8004155CIndex {
    unsigned char unknown00[0x12];
    short unknown12;
};
struct Unknown8004155C {
    unsigned char unknown00[8];
    Gap::igInt unknown08;
    Gap::igInt unknown0C;
    void *unknown10;
};
struct Unknown8004155CResult {
    Gap::igInt unknown00;
    Unknown8004155CResult(const Unknown8004155CResult&);
};
extern "C" {
    extern Unknown8004155CIndex *lbl_80561D48;
    void fn_80068390(void *, void *);
    void *fn_80068430(void *);
    Unknown8004155CMetadata *fn_800658E4(Unknown8004155CMetadata *, Gap::igInt);
    Unknown8004155CResult fn_80062BB8(Unknown8004155CMetadata *, void *, Gap::igUnsignedInt, void *);
    void *memcpy(void *, const void *, unsigned long);
}

#pragma push
#pragma auto_inline off
extern "C" void fn_8004155C(Unknown8004155C *object, Gap::igInt count, Gap::igInt width){
    if(!count){
        fn_80068390(object, object->unknown10);
        object->unknown10 = NULL;
    }else{
        Unknown8004155CVirtual *value;
        void *previous;
        Unknown8004155CMetadata *metadata;
        previous = object->unknown10;
        const short &index = static_cast<short>(lbl_80561D48->unknown12);
        metadata = fn_800658E4(reinterpret_cast<Unknown8004155CVirtual *>(object)->slot58(), static_cast<short>(index));
        value = metadata->unknown3C;
        fn_80062BB8(metadata, object, static_cast<Gap::igUnsignedInt>(count * width) / value->slot64(), fn_80068430(object));
        if(previous){
            Gap::igInt copied;
            Gap::igInt previousCount;
            previousCount = object->unknown0C;
            copied = count;
            if(previousCount < count) copied = previousCount;
            memcpy(object->unknown10, previous, copied * width);
            fn_80068390(object, previous);
        }
    }
    object->unknown0C = count;
}
#pragma pop
