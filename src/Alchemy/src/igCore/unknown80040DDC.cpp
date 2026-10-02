#include <igGap.h>
#include <igCore/igStringPoolItem.h>

// Synthetic aggregate/string views; field meanings and unused slots remain unknown.

extern "C" {
    void *fn_80054140(Gap::igUnsignedInt);
    void *fn_80053F28(void *);
    const char *fn_80054094(void *, const char *);
    void *fn_80068254(void *, Gap::igInt, Gap::igInt);
    char *fn_800681C4(void *, Gap::igUnsignedInt);
    void fn_80068390(void *, void *);
    Gap::igUnsignedInt strlen(const char *);
    char *strcpy(char *, const char *);
    extern void *lbl_80562140;
    extern char lbl_8055D7DC[4], lbl_8055D7E0[4];
}

inline const char *unknown80040DDCAcquire(const char *text){
    if(reinterpret_cast<unsigned long>(text) == 0) return NULL;
    if(!lbl_80562140){
        void *storage = fn_80054140(0x10);
        if(storage) storage = fn_80053F28(storage);
        lbl_80562140 = storage;
    }
    return fn_80054094(lbl_80562140, text);
}

struct Unknown80040DDCString {
    const char *unknown00;
    inline Unknown80040DDCString(const char *text) : unknown00(unknown80040DDCAcquire(text)) {}
    inline Unknown80040DDCString(const Unknown80040DDCString& value) : unknown00(value.unknown00) {
        if(unknown00) ++reinterpret_cast<Gap::igUnsignedInt*>(const_cast<char*>(unknown00))[-1];
    }
    inline bool isPooled() const { return unknown00 != NULL; }
    inline Gap::Core::igStringPoolItemId getId() const { return reinterpret_cast<Gap::Core::igStringPoolItemId>(unknown00 - sizeof(Gap::Core::igStringPoolItem)); }
    inline void release() const { if(isPooled()) getId()->release(); }
    inline ~Unknown80040DDCString() { release(); }
    inline Unknown80040DDCString& operator=(const Unknown80040DDCString& value){
        if(value.unknown00) ++reinterpret_cast<Gap::igUnsignedInt*>(const_cast<char*>(value.unknown00))[-1];
        release();
        unknown00 = value.unknown00;
        return *this;
    }
};

class Unknown80040DDCElement {
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
    virtual void slotD4();
    virtual void slotD8();
    virtual void slotDC();
    virtual void slotE0();
    virtual Unknown80040DDCString slotE4(Gap::igInt, Gap::igInt);
    unsigned char unknown04[4];
    Gap::igInt unknown08;
};
struct Unknown80040DDCStorage {
    unsigned char unknown00[8];
    Gap::igInt unknown08;
    unsigned char unknown0C[4];
    Unknown80040DDCElement **unknown10;
};
class Unknown80040DDC {
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
    virtual Unknown80040DDC *slot5C();
    unsigned char unknown04[0x30];
    Unknown80040DDCStorage *unknown34;
};

extern "C" Unknown80040DDCString fn_80040DDC(Unknown80040DDC *object, Gap::igInt first, Gap::igInt second){
    Unknown80040DDCStorage *storage;
    Gap::igInt count;
    const char *prefix;
    const char *suffix;
    prefix = lbl_8055D7DC;
    suffix = lbl_8055D7E0;
    storage = object->slot5C()->unknown34;
    count = storage->unknown08;
    Unknown80040DDCString *strings = reinterpret_cast<Unknown80040DDCString*>(fn_80068254(object, count, 4));
    Gap::igInt size = 9;
    Gap::igInt index = 0;
    while(index < count){
        Unknown80040DDCElement *element = storage->unknown10[index];
        strings[index] = element->slotE4(first + element->unknown08, second);
        size += strlen(strings[index].unknown00) + 1;
        ++index;
    }
    char *buffer = fn_800681C4(object, size);
    strcpy(buffer, prefix);
    buffer[3] = 0x20;
    char *current = buffer + 4;
    index = 0;
    while(index < count){
        const char *text = strings[index].unknown00;
        strcpy(current, text);
        current += strlen(strings[index].unknown00);
        *current = 0x20;
        ++current;
        ++index;
    }
    strcpy(current, suffix);
    Unknown80040DDCString result(buffer);
    fn_80068390(object, buffer);
    return result;
}
