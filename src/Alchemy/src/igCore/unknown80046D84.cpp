#include "unknown800442F8.h"
#pragma push
#pragma auto_inline off
class Unknown80046D84Object { public:
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
 virtual void slot8C(int);
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
 virtual int slotD0(void *,int);
 unsigned char unknown04[0x1C];
 unsigned int *unknown20;
 unsigned int unknown24,unknown28,unknown2C,unknown30;
 void *(*unknown34)();
 int unknown38;
};
class Unknown8004714CStream { public:
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
 virtual Unknown80042DECResult slot60();
 virtual unsigned char slot64();
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
class Unknown8004714COwner { public:
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
 virtual void slotC8(int);
 unsigned int unknown04;
 Unknown8004714CStream *unknown08;
 unsigned int unknown0C;
 unsigned char unknown10[0x14];
 int unknown24,unknown28,unknown2C,unknown30;
 Unknown80042DECStorage *unknown34,*unknown38;
 unsigned int unknown3C;
 Unknown80042DECStorage *unknown40,*unknown44,*unknown48,*unknown4C,*unknown50,*unknown54;
 void (*unknown58)();
 Unknown8004714CStream *unknown5C;
 unsigned char unknown60[0x22C8];
 char unknown2328[0x100];
 int unknown2428;
 char unknown242C[0x100];
 int unknown252C;
};
struct Unknown8004730CLock {
 Unknown8004714CStream *value;
 inline Unknown8004730CLock(Unknown8004714CStream *p):value(p){if(value) value->slot84(1);}
 inline ~Unknown8004730CLock(){if(value) value->slot7C();}
};
extern "C" {
Unknown80046D84Object *fn_80031728(void *);
void fn_80063B1C(void *);
void fn_8006388C(void *);
void fn_800638E0(void *);
void fn_800639E4(void *);
void *fn_80046FD8(void *);
void *fn_800470F4();
void *fn_800607F4(void *);
Unknown80042DECValue *fn_8003119C(void *);
extern Unknown80042DECValue *lbl_80562120;
extern void *lbl_80561C2C,*lbl_805621F0;
extern unsigned char lbl_80562124;
extern void *lbl_804758E4[];
extern char lbl_8055D794[5];
extern int kSuccess__3Gap;
int sscanf(const char *,const char *,...);
Unknown80042DECResult fn_800633C8(void *,const char *,unsigned int *);
Unknown80042DECResult fn_800634A4(void *,unsigned int);


















char *strncpy(char *,const char *,unsigned int);
int fn_800744AC(void *,const char *);
void fn_8004714C(Unknown8004714COwner *,unsigned char);
void fn_800740F4(void *,int);
void fn_800740FC(void *,int);
void fn_80074104(void *);
void fn_80074160(void *);
void fn_80074218(void *);
void fn_8003ECA4(void *,int);
void fn_8003ECAC(void *,int);
void fn_8003ECB4(void *);
void fn_8003ED10(void *);
void fn_8003EDF0(void *);
void fn_800541C8(void *,int);
void fn_800541D0(void *,int);
void fn_800541D8(void *);
void fn_8005427C(void *);
void fn_8004155C(void *,int,int);







int fn_80046D84(Unknown80046D84Object *object,void *buffer,int count){ return fn_80031728(object)->slotD0(buffer,count*object->unknown38); }
unsigned int fn_80046DDC(Unknown80046D84Object *object){return (object->unknown38&0x3FFF)*4;}
void fn_80046DE8(Unknown80046D84Object *object,unsigned int value){ object->slot8C(0);unsigned int *p=object->unknown20;for(int i=0;i<object->unknown38;++i) p[i]=value; }
void fn_80046E58(Unknown80046D84Object *object,int value){object->slot8C(value);}
int fn_80046E84(Unknown80046D84Object *object,unsigned int *value,const char *text){
 int count=0;
 int result=sscanf(text,lbl_8055D794,value,&count);
 if((result==0 || result==-1) && text){
  unsigned int parsed;
  const Unknown80042DECResult &outcome=fn_800633C8(object->unknown34(),text,&parsed);
  if(kSuccess__3Gap==outcome.unknown00){*value=parsed;count=strlen(text);}
 }
 return count;
}
Unknown80042DECResult fn_80046F3C(Unknown80046D84Object *object,unsigned int *value){return fn_800634A4(object->unknown34(),*value);}
void *fn_80046F8C(void *object){ fn_8006388C(object);*reinterpret_cast<void ***>(object)=lbl_804758E4;if(object) fn_80046FD8(object);return object;}
void *fn_80046FD8(void *object){fn_800638E0(object);*reinterpret_cast<void ***>(object)=lbl_804758E4;return object;}
void *fn_80047014(void *object){fn_800639E4(object);*reinterpret_cast<void ***>(object)=lbl_804758E4;return object;}
void fn_80047050(void *object){fn_80063B1C(object);}
int fn_80047070(){return 4;}
int fn_80047078(){return 4;}
void *fn_80047080(){return fn_800470F4();}
void fn_800470A0(){unknown80042DECRelease(lbl_80562120);lbl_80562120=NULL;lbl_80562124=1;}
void *fn_800470F4(){if(!lbl_80562120 && lbl_80561C2C && !lbl_80562124) lbl_80562120=fn_8003119C(fn_800607F4(lbl_805621F0));return lbl_80562120;}
void fn_80047148(){}
void fn_8004714C(Unknown8004714COwner *object,unsigned char active){
 if(active){
  if(!object->unknown08){
   Unknown800442F8Reference reference(static_cast<const Unknown800442F8Reference &>(Unknown800442F8Reference(reinterpret_cast<Unknown80042DECValue *>(fn_80025FE8(fn_80068430(object))))));
   reinterpret_cast<Unknown8004714CStream *>(reference.value)->slot5C();
   Unknown80042DECValue *p=reference.value;
   unknown80042DECRetain(p);
   unknown80042DECRelease(reinterpret_cast<Unknown80042DECValue *>(object->unknown08));
   object->unknown08=reinterpret_cast<Unknown8004714CStream *>(p);
  }
 }else if(object->unknown08){
  Unknown800442F8Reference reference(reinterpret_cast<Unknown80042DECValue *>(object->unknown08));
  unknown80042DECRetain(reference.value);
  unknown80042DECRelease(reinterpret_cast<Unknown80042DECValue *>(object->unknown08));
  object->unknown08=NULL;
  if(reference.value) reinterpret_cast<Unknown8004714CStream *>(reference.value)->slot60();
 }
}
void fn_800472FC(Unknown80046D84Object *object,unsigned int value){object->unknown24=value;}
unsigned int fn_80047304(Unknown80046D84Object *object){return object->unknown28;}
void fn_8004730C(Unknown8004714COwner *object,const char *text){
 Unknown8004730CLock lock(object->unknown08);
 if((object->unknown0C>>1)&1) return;
 object->unknown0C|=2;
 if(text) strncpy(object->unknown2328,text,0xFF);else object->unknown2328[0]=0;
 if(object->unknown2328[0]) object->unknown2428=fn_800744AC(object->unknown34,object->unknown2328);else object->unknown2428=-1;
 object->unknown0C&=~2;
}
void fn_80047418(Unknown8004714COwner *object,const char *text){
 Unknown8004730CLock lock(object->unknown08);
 if((object->unknown0C>>1)&1) return;
 object->unknown0C|=2;
 if(text) strncpy(object->unknown242C,text,0xFF);else object->unknown242C[0]=0;
 if(object->unknown242C[0]) object->unknown252C=fn_800744AC(object->unknown38,object->unknown242C);else object->unknown252C=-1;
 object->unknown0C&=~2;
}
void fn_80047524(Unknown8004714COwner *object){
 fn_800740F4(object->unknown34,0x100);fn_800740FC(object->unknown34,0x20);fn_80074104(object->unknown34);
 fn_800740F4(object->unknown38,0x1000);fn_800740FC(object->unknown38,0x100);fn_80074104(object->unknown38);
 fn_800740F4(object->unknown44,0x200);fn_800740FC(object->unknown44,0x20);fn_80074104(object->unknown44);
 fn_800740F4(object->unknown40,0x10000);fn_800740FC(object->unknown40,0x1000);fn_80074104(object->unknown40);
 fn_800740F4(object->unknown44,0x2000);fn_800740FC(object->unknown44,0x100);fn_80074104(object->unknown44);
 fn_8003ECA4(object->unknown48,0x10000);fn_8003ECAC(object->unknown48,0x1000);fn_8003ECB4(object->unknown48);
 if(object->unknown5C->slot64()){fn_800541C8(object->unknown4C,0x4000);fn_800541D0(object->unknown4C,0x4000);fn_800541D8(object->unknown4C);}
 int capacity=object->unknown24*20;
 if(capacity>=object->unknown50->unknown08) fn_8004155C(object->unknown50,capacity,1);
 object->slotC8(object->unknown24*2);
 fn_80047148();
 object->unknown58=fn_80047148;
 fn_8004714C(object,1);
}
void fn_800476A0(Unknown8004714COwner *object){
 if((object->unknown0C>>1)&1) return;
 object->unknown0C|=2;
 fn_80074160(object->unknown34);fn_80074160(object->unknown38);fn_80074160(object->unknown44);fn_80074160(object->unknown40);fn_80074160(object->unknown44);
 fn_8003ED10(object->unknown48);
 if(object->unknown5C->slot64()) fn_8005427C(object->unknown4C);
 if(object->unknown50->unknown0C>=0) object->unknown50->unknown08=0;else fn_80041660(object->unknown50,0,1);
 if(object->unknown50->unknown08<=0) fn_8004155C(object->unknown50,0,1);
 fn_8004714C(object,0);
 object->unknown0C&=~2;
}
void fn_8004778C(Unknown8004714COwner *object){
 Unknown8004730CLock lock(object->unknown08);
 object->unknown28=0;
 fn_80074218(object->unknown34);fn_80074218(object->unknown38);fn_80074218(object->unknown44);fn_80074218(object->unknown40);fn_80074218(object->unknown44);
 fn_8003EDF0(object->unknown48);
 if(object->unknown50->unknown0C>=0) object->unknown50->unknown08=0;else fn_80041660(object->unknown50,0,1);
 object->slotC8(object->unknown54->unknown0C);
}
}
#pragma pop
