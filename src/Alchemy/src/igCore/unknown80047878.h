#ifndef UNKNOWN80047878_H
#define UNKNOWN80047878_H
#include "unknown800496E8.h"
extern "C" {
 int fn_800744AC(void *,const char *);
 void fn_80041790(void *,int,const void *,int);
 int fn_8004C11C(void *,int);
 int fn_8004C140(void *,int);
 unsigned int fn_8004C19C(void *,int);
 const char *fn_8004C1F8(void *,int);
 extern void *lbl_8055D820;
 extern char lbl_804692E4[];
}
inline char *unknown80047878Unsigned(char *p,unsigned int value){
 do {*p=value&0x7F;value>>=7;if(value) *p|=0x80;++p;}while(value);
 return p;
}
inline char *unknown80047878Signed(int value,char *p){
 int sign;char bit;
 if(value<0){sign=-1;bit=0x40;}else{sign=0;bit=0;}
 for(;;){
  *p=value&0x7F;value>>=7;
  if(value==sign){
   if((*p&0x40)!=bit){*p|=0x80;*++p=sign&0x7F;}
   break;
  }
  *p|=0x80;++p;
 }
 return p+1;
}
inline char *unknown80047878Word(char *p,unsigned int value){p[0]=value;p[1]=value>>8;p[2]=value>>16;p[3]=value>>24;return p+4;}
inline unsigned char unknown80047878Mask(unsigned int mask,int bit){return ((mask&(1<<bit))!=0)&0xFF;}
#endif
