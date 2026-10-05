#ifndef UNKNOWN800496E8_H
#define UNKNOWN800496E8_H
#include "unknown8004944C.h"
struct Unknown800496E8Record;
extern "C" {
 void *fn_8004BF04(void *);
 void *fn_8004BF34(void *,const void *);
 void *fn_8004C080(void *,int);
 void fn_8004155C(void *,int,int);
 void fn_800472FC(void *,unsigned int);
 extern int lbl_8055D850;
 extern char lbl_8055D848[5];
}
struct Unknown800496E8Record {
 int unknown00,unknown04;
 unsigned int unknown08;
 int unknown0C,unknown10,unknown14,unknown18,unknown1C,unknown20,unknown24,unknown28;
 const char *unknown2C,*unknown30,*unknown34,*unknown38,*unknown3C,*unknown40,*unknown44;
 unsigned int unknown48;
 void **unknown4C;
 unsigned int unknown50;
 unsigned char unknown54[0x40];
 inline Unknown800496E8Record(){fn_8004BF04(this);}
 inline Unknown800496E8Record(const Unknown800496E8Record &other){fn_8004BF34(this,&other);}
 inline ~Unknown800496E8Record(){fn_8004C080(this,-1);}
};
class Unknown800496E8Stream {
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
 virtual void *slot60(void *,int);
 virtual unsigned char slot64();
 virtual void slot68();
 virtual int slot6C(void *);
 virtual void slot70();
 virtual void slot74();
 virtual void slot78();
 virtual Unknown80042DECResult slot7C();
 virtual void slot80();
 virtual Unknown80042DECResult slot84(int);
};
class Unknown800496E8Owner {
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
 virtual int slot68(const Unknown800496E8Record *,int);
 virtual Unknown80042DECResult slot6C(int,Unknown800496E8Record *);
 virtual Unknown80042DECResult slot70(int,int *);
 virtual Unknown80042DECResult slot74(int,unsigned int *);
 virtual Unknown80042DECResult slot78(int,int *);
 virtual int slot7C(unsigned int);
 virtual void slot80();
 virtual void slot84();
 virtual int slot88(int);
 virtual void slot8C();
 virtual void slot90();
 virtual void slot94();
 virtual void slot98(Unknown800496E8Record *,char *,int);
 virtual Unknown80042DECResult slot9C(void *,char *,char *,int);
 virtual Unknown80042DECResult slotA0(void *,char *,int,int *,char *,int,int *);
 virtual void slotA4(int);
 virtual void slotA8();
 virtual void slotAC();
 virtual void slotB0();
 virtual void slotB4();
 virtual void slotB8();
 virtual void slotBC();
 virtual int slotC0(unsigned int);
 virtual void slotC4(unsigned int,int);
 virtual void slotC8(int);
 unsigned int unknown04;
 Unknown800496E8Stream *unknown08;
 unsigned int unknown0C,unknown10,unknown14,unknown18,unknown1C;
 int unknown20,unknown24,unknown28,unknown2C;
 void *unknown30,*unknown34,*unknown38,*unknown3C,*unknown40,*unknown44;
 Unknown800496E8Stream *unknown48;
 void *unknown4C;
 Unknown80042DECStorage *unknown50,*unknown54;
 void (*unknown58)();
 Unknown800496E8Stream *unknown5C;
 unsigned char unknown60[0x22C8];
 char unknown2328[0x100];
 int unknown2428;
 char unknown242C[0x100];
 int unknown252C;
};
struct Unknown800496E8Lock {
 Unknown800496E8Stream *value;
 inline Unknown800496E8Lock(Unknown800496E8Stream *p):value(p){if(value) value->slot84(1);}
 inline ~Unknown800496E8Lock(){if(value) value->slot7C();}
};
inline void unknown800496E8Store(Unknown80042DECStorage *storage,int index,int value){
 if(storage->unknown08 && index>=0 && index<storage->unknown08) reinterpret_cast<int *>(storage->unknown10)[index]=value;
}
inline int unknown800496E8Size(Unknown80042DECStorage *storage){return storage->unknown08;}
inline char unknown800496E8Count(const char *p){return p[1];}
#endif
