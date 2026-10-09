#ifndef UNKNOWN80042DEC_H
#define UNKNOWN80042DEC_H
#include <igGap.h>
#include <igCore/igStringPoolItem.h>

// Synthetic views for this recovery range; meanings and unused slots are unknown.
struct Unknown80042DECResult {
    int unknown00;
    explicit inline Unknown80042DECResult(int value):unknown00(value){}
    Unknown80042DECResult(const Unknown80042DECResult&);
};
struct Unknown80042DECMetadata;
class Unknown80042DECValue {
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
    virtual void slot4C(void *);
    virtual void slot50(Unknown80042DECMetadata *);
    virtual void slot54();
    virtual Unknown80042DECMetadata *slot58();
    virtual void slot5C(Unknown80042DECValue *);
    virtual void slot60();
    virtual void slot64();
    virtual void slot68();
    virtual void slot6C();
    virtual void slot70();
    virtual void slot74(int);
    virtual void slot78();
    virtual int slot7C(Unknown80042DECValue *);
    virtual void slot80();
    virtual void slot84();
    virtual void slot88();
    virtual void slot8C(double *);
    virtual void slot90();
    virtual void slot94();
    virtual void slot98();
    virtual void slot9C();
    virtual void slotA0();
    virtual void slotA4();
    virtual void slotA8();
    virtual int slotAC(Unknown80042DECValue *);
    virtual void slotB0();
    virtual void slotB4();
    virtual void slotB8();
    virtual void slotBC();
    virtual void slotC0();
    virtual void slotC4();
    virtual void slotC8();
    virtual void slotCC();
    virtual void slotD0(void *, int);
    unsigned int unknown04;
    int unknown08;
    int unknown0C;
    int unknown10;
    int unknown14;
    Unknown80042DECValue *unknown18;
    Unknown80042DECMetadata *unknown1C;
    void *unknown20;
    int unknown24;
    void *unknown28;
    void *unknown2C;
    unsigned char unknown30[4];
    unsigned char unknown34;
};
struct Unknown80042DECMetadata {
    unsigned char unknown00[0x3C];
    void *unknown3C;
    void *(*unknown40)(Unknown80042DECMetadata *);
};
class Unknown80042DECTest {
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
    virtual unsigned char slot5C(void *, Unknown80042DECValue *);
};
class Unknown80042DECProvider {
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
    virtual Unknown80042DECResult slot5C();
    virtual void slot60();
    virtual void slot64();
    virtual void slot68();
    virtual void slot6C();
    virtual void slot70();
    virtual void slot74();
    virtual void slot78();
    virtual Unknown80042DECResult slot7C();
    virtual void slot80();
    virtual Unknown80042DECResult slot84(int);
    unsigned int unknown04;
};
struct Unknown80042DECStorage {
    unsigned char unknown00[8];
    int unknown08;
    int unknown0C;
    Unknown80042DECValue **unknown10;
};
struct Unknown80042DECOwner {
    unsigned char unknown00[8];
    int unknown08;
    int unknown0C;
    Unknown80042DECValue **unknown10;
    const char *unknown14;
    Unknown80042DECStorage *unknown18;
    Unknown80042DECStorage *unknown1C;
    Unknown80042DECOwner *unknown20;
    void *unknown24;
    void *unknown28;
    void *unknown2C;
    unsigned char unknown30[4];
    int unknown34;
    unsigned char unknown38;
    unsigned char unknown39[7];
    unsigned char unknown40;
    unsigned char unknown41;
    unsigned char unknown42;
    unsigned char unknown43;
    Unknown80042DECProvider *unknown44;
};
extern "C" {
    void fn_80066E1C(void *);
    void __dl__FPv(void *);
    void *fn_80068430(void *);
    Unknown80042DECValue *fn_800695CC(void *, void *, void *);
    Unknown80042DECValue *fn_800696C8(void *, void *, void *);
    void fn_80069128(void *, void *);
    void fn_80041C10(void *, int);
    Unknown80042DECValue *fn_8004291C(void *, void *);
    Unknown80042DECValue *fn_80042B1C(void *, int);
    Unknown80042DECValue *fn_80042A14(void *, int);
    void fn_80066490(void *, void *);
    void fn_80067F74(void *, bool (*)(Unknown80042DECValue *, Unknown80042DECValue *, void *), void *);
    int fn_800432E8(Unknown80042DECOwner *, void *, void *);
    int fn_800433BC(Unknown80042DECOwner *, Unknown80042DECValue *, void *, int);
    unsigned char fn_80043038(Unknown80042DECOwner *, void *, Unknown80042DECValue *);
    unsigned char fn_800430D8(Unknown80042DECOwner *, Unknown80042DECValue *);
    void fn_80042EAC(Unknown80042DECOwner *, Unknown80042DECValue *);
    bool fn_80043168(Unknown80042DECValue *, Unknown80042DECValue *, void *);
    void fn_80041A44(void *, int, int, const void *);
    unsigned char fn_80068128(void *, void *);
    Unknown80042DECValue *fn_800291C8(void *);
    Unknown80042DECValue *fn_8002C7D4(void *);
    Unknown80042DECValue *fn_80032C4C(void *);
    void *fn_80066180(void *);
    void *fn_80063244(void *);
    void *fn_80060834(void *);
    Unknown80042DECValue *fn_800607D4();
    void *fn_800590A0(void *);
    void *fn_80037E48();
    void fn_80057A28(void *, void *);
    Unknown80042DECMetadata *fn_8005641C(void *);
    void fn_80068900(void *, void *);
    Unknown80042DECProvider *fn_80025FE8(void *);
    Unknown80042DECValue *fn_800321EC(void *);
    void *fn_80054140(unsigned int);
    void *fn_80053F28(void *);
    const char *fn_80054094(void *, const char *);
    extern void *lbl_805622A4, *lbl_80561748, *lbl_80561D10, *lbl_80561A04, *lbl_80561D00, *lbl_80561710, *lbl_80562140;
}
inline void unknown80042DECRetain(Unknown80042DECValue *value){ if(value) ++value->unknown04; }
inline void unknown80042DECRelease(Unknown80042DECValue *value){
    if(value){
        --value->unknown04;
        if(!(reinterpret_cast<volatile unsigned int *>(value)[1] & 0x7FFFFF)) fn_80066E1C(value);
    }
}
struct Unknown80042DECReference {
    Unknown80042DECValue *value;
    // Factory paths assign the pointer before retaining it and calling insertion.
    inline Unknown80042DECReference(){}
    inline Unknown80042DECReference(Unknown80042DECValue *p) : value(p){ unknown80042DECRetain(value); }
    inline ~Unknown80042DECReference(){ unknown80042DECRelease(value); }
};
struct Unknown80042DECPointer {
    Unknown80042DECValue *value;
    inline Unknown80042DECPointer(Unknown80042DECValue *p) : value(p) {}
};
inline int unknown80042DECFind(Unknown80042DECStorage *source, const Unknown80042DECPointer &key){
    struct { int index; Unknown80042DECStorage *storage; } state;
    state.storage=source;
    // The standard-layout key and its first member are pointer-interconvertible.
    // Keep this address-taken view to preserve the original pointer temporary.
    for(state.index=0; state.index<state.storage->unknown08; ++state.index) if(reinterpret_cast<Unknown80042DECPointer const *>(&key.value)->value==state.storage->unknown10[state.index]) return state.index;
    return -1;
}
inline void unknown80042DECRemove(Unknown80042DECStorage *storage, int index){
    unknown80042DECRelease(storage->unknown10[index]);
    fn_80041C10(storage,index);
    storage->unknown10[storage->unknown08]=NULL;
}
inline const char *unknown80042DECAcquire(const char *text){
    if(!lbl_80562140){
        void *storage=fn_80054140(0x10);
        if(storage) storage=fn_80053F28(storage);
        lbl_80562140=storage;
    }
    return fn_80054094(lbl_80562140,text);
}
#endif
