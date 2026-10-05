#ifndef UNKNOWN800489E4_H
#define UNKNOWN800489E4_H
#include "unknown800496E8.h"
extern "C" {
 void fn_8004C0BC(void *);
 const char *fn_80074398(void *,int);
 int fn_8004C11C(void *,int);
 void fn_8004C160(void *,int,int);
 void fn_8004C1BC(void *,int,unsigned int);
 void fn_8004C218(void *,int,const char *);
}
inline int unknown800489E4Unsigned(const char *&source){
 int value;const char *p;unsigned int shift;
 p=source;shift=0;value=0;
 for(;;){int byte=*p++;value|=(byte&0x7F)<<shift;if(!(byte&0x80)) break;shift+=7;}
 source=p;return value;
}
inline int unknown800489E4Signed(const char *&source){
 int byte;unsigned int shift;int value;const char *p;
 p=source;shift=0;value=0;
 for(;;){
  byte=*p;
  value|=(byte&0x7F)<<shift;
  if(!(byte&0x80)){
   if(byte&0x40){int mask=0x80000000;while(!(value&mask)) mask>>=1;value|=mask;}
   break;
  }
  ++p;shift+=7;
 }
 source=p+1;return value;
}
inline const char *unknown800489E4Signed(const char *p,int *out){
 int value;int byte;unsigned int shift;
 shift=0;value=0;
 for(;;){
  byte=*p;
  value|=(byte&0x7F)<<shift;
  if(!(byte&0x80)){
   if(byte&0x40){int mask=0x80000000;while(!(value&mask)) mask>>=1;value|=mask;}
   break;
  }
  ++p;shift+=7;
 }
 *out=value;return p+1;
}
inline int unknown800489E4SignedValue(const char *&source){
 int value;int byte;unsigned int shift;const char *p;
 p=source;shift=0;value=0;
 for(;;){
  byte=*p;
  value|=(byte&0x7F)<<shift;
  if(!(byte&0x80)){
   if(byte&0x40){int mask=0x80000000;while(!(value&mask)) mask>>=1;value|=mask;}
   break;
  }
  ++p;shift+=7;
 }
 source=p+1;return value;
}
inline int unknown800489E4SignedNext(const char *&source){
 int value;int byte;const char *p;unsigned int shift;
 p=source;shift=0;value=0;
 for(;;){
  byte=*p;
  value|=(byte&0x7F)<<shift;
  if(!(byte&0x80)){
   if(byte&0x40){int mask=0x80000000;while(!(value&mask)) mask>>=1;value|=mask;}
   break;
  }
  ++p;shift+=7;
 }
 source=p+1;return value;
}
inline const char *unknown800489E4SignedInto(const char *p,int &value){
 int byte;unsigned int shift;
 shift=0;value=0;
 for(;;){
  byte=*p;
  value|=(byte&0x7F)<<shift;
  if(!(byte&0x80)){
   if(byte&0x40){int mask=0x80000000;while(!(value&mask)) mask>>=1;value|=mask;}
   break;
  }
  ++p;shift+=7;
 }
 return p+1;
}
inline const char *unknown800489E4UnsignedInto(const char *p,int &value){
 unsigned int shift;
 shift=0;value=0;
 for(;;){int byte=*p++;value|=(byte&0x7F)<<shift;if(!(byte&0x80)) break;shift+=7;}
 return p;
}
class Unknown800489E4Lookup {
public:
 virtual void slot08();virtual void slot0C();virtual void slot10();virtual void slot14();
 virtual void slot18();virtual void slot1C();virtual void slot20();virtual void slot24();
 virtual void slot28();virtual void slot2C();virtual void slot30();virtual void slot34();
 virtual void slot38();virtual void slot3C();virtual void slot40();virtual void slot44();
 virtual void slot48();virtual void slot4C();virtual void slot50();virtual void slot54();
 virtual void slot58();virtual void slot5C();virtual void slot60();virtual void **slot64(int);
};
#endif
