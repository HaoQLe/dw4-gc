#ifndef UNKNOWN800442F8_H
#define UNKNOWN800442F8_H
#include "unknown80042DEC.h"

extern "C" const char *lbl_8055DC4C;

// Observed layouts and calling conventions for these synthetic recovery units.
struct Unknown800442F8String {
    const char *value;
    inline Unknown800442F8String(const char *text) : value(reinterpret_cast<unsigned long>(text)==0 ? NULL : unknown80042DECAcquire(text)) {}
    inline Unknown800442F8String(const Unknown800442F8String& other) : value(other.value) { if(value) ++reinterpret_cast<unsigned int *>(const_cast<char *>(value))[-1]; }
    inline void release() const { const char *p=value; if(p) reinterpret_cast<Gap::Core::igStringPoolItemId>(p-sizeof(Gap::Core::igStringPoolItem))->release(); }
    inline ~Unknown800442F8String(){ release(); }
    inline void adopt(const char *text){ const char *p=unknown80042DECAcquire(text); release(); value=p; }
    inline const char *textBranch() const { return value ? value : lbl_8055DC4C; }
    inline const char *text() const { const char *p=value; if(!p) p=lbl_8055DC4C; return p; }
};
struct Unknown800442F8Reference {
    Unknown80042DECValue *value;
    inline Unknown800442F8Reference() : value(NULL) {}
    inline Unknown800442F8Reference(Unknown80042DECValue *p) : value(p) {}
    inline Unknown800442F8Reference(const Unknown800442F8Reference& p) : value(p.value){ unknown80042DECRetain(value); }
    inline ~Unknown800442F8Reference(){ unknown80042DECRelease(value); }
    inline void adopt(Unknown80042DECValue *p){ unknown80042DECRelease(value); value=p; }
    inline void assign(Unknown80042DECValue *p){ unknown80042DECRetain(p); unknown80042DECRelease(value); value=p; }
};
class Unknown800442F8Stream {
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
    virtual Unknown800442F8Reference slot5C(const char *);
    virtual void slot60();
    virtual void *slot64(const char *,const char *);
    virtual void slot68();
    virtual void slot6C(void *);
    virtual void slot70();
    virtual void slot74();
    virtual void slot78();
    virtual void slot7C();
    virtual void slot80();
    virtual int slot84();
    unsigned int unknown04;
    Unknown800442F8String unknown08;
    void *unknown0C;
};
struct Unknown800442F8Node;
struct Unknown800442F8NodeVtable { void *unknown00[2]; void (*slot08)(Unknown800442F8Node *, int); };
struct Unknown800442F8NodeBase { int unknown00; };
struct Unknown800442F8Node : Unknown800442F8NodeBase { virtual ~Unknown800442F8Node(); };
struct Unknown800442F8Nodes { unsigned char unknown00[4]; unsigned int unknown04; int unknown08; int unknown0C; Unknown800442F8Node **unknown10; };
struct Unknown800442F8Owner {
    unsigned char unknown00[8];
    Unknown80042DECStorage *unknown08;
    Unknown80042DECStorage *unknown0C;
    Unknown80042DECStorage *unknown10;
    void *unknown14;
    int unknown18;
    int unknown1C;
    Unknown800442F8Stream *unknown20;
    Unknown800442F8Stream *unknown24;
    Unknown800442F8Stream *unknown28;
    int unknown2C;
    unsigned char unknown30[4];
    const char *unknown34;
};
extern "C" {
    Unknown80042DECValue *fn_80024B5C(void *);
    Unknown80042DECValue *fn_80024FB4(void *);
    Unknown800442F8Stream *fn_8002FFC8(void *);
    Unknown800442F8Stream *fn_8002F744(void *);
    Unknown80042DECValue *fn_80026ADC(void *);
    Unknown800442F8Nodes *fn_800338FC(void *);
    int fn_8004270C(void *, const Unknown800442F8String &, int);
    void fn_8002080C(void *, const Unknown800442F8String &);
    Unknown800442F8String fn_800218F4(void *, int);
    void fn_800442A0(void *, int, const char *);
    unsigned char fn_80045574(void *);
    unsigned char fn_800455A0(void *);
    unsigned char fn_800455C8(void *);
    void fn_80071F9C(void *, const char *);
    void fn_80071FF4(void *);
    void fn_80072038(void *, const char *, int, unsigned int);
    const char *fn_8003D49C(void *);
    const char *fn_8003D4A4(void *);
    void fn_8004540C(Unknown800442F8Owner *, Unknown800442F8Stream *);
    void fn_800454C0(Unknown800442F8Owner *, const char *);
    void fn_8004513C(Unknown800442F8Owner *);
    Unknown800442F8Nodes *fn_80045160(Unknown800442F8Owner *);
    void fn_80045210(void *,Unknown800442F8Nodes *);
    Unknown800442F8Node *fn_8004577C(Unknown800442F8Owner *);
    void fn_80041660(void *, int, int);
    void fn_800564E8(void *);
    void fn_8004595C(Unknown800442F8Owner *,void *,void *,void *);
    void fn_8006D17C(void *, void *, void *);
    bool fn_800455F4(void *, Unknown800442F8Stream *, char *, int);
    bool fn_800456D4(void *, const char **, char *, int);
    unsigned int strlen(const char *);
    extern void *_arkCore__Q23Gap4Core;
    extern char lbl_80468F58[], lbl_80468F64[], lbl_80472C3C[];
    extern char lbl_8055D7FC[2], lbl_8055D800[4];
}
inline void unknown800442F8Store(Unknown80042DECStorage *storage,int index,Unknown80042DECValue *p){
    unknown80042DECRetain(p);
    unknown80042DECRelease(storage->unknown10[index]);
    if(storage->unknown08!=0 && index>=0 && index<storage->unknown08) storage->unknown10[index]=p;
}
#endif
