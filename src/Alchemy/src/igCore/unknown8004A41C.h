#ifndef UNKNOWN8004A41C_H
#define UNKNOWN8004A41C_H
#include "unknown80047878.h"
struct Unknown8004A41CValue {int unknown00;int unknown04;const char *unknown08;};
extern "C" {
 const char *fn_8004B394(void *,int);
 const char *fn_8004B3E4(void *,int);
 const char *fn_8004B434(void *,int);
 const char *fn_8004B484(void *,int);
 const char *fn_8004B4D4(void *,int);
 int fn_8004C0E4(void *);
 void fn_8004C24C(void *,int,Unknown8004A41CValue *);
 extern char lbl_80463100[];
 extern const char *lbl_8055D824,*lbl_8055D828,*lbl_8055D82C,*lbl_8055D830;
 extern char lbl_8055D4C4[1],lbl_8055D7AC[3],lbl_8055D7B8[7],lbl_8055D7C0[3],lbl_8055D7D0[3];
 extern char lbl_8055D7C4[2],lbl_8055D7C8[2],lbl_8055D7CC[2];
 extern char lbl_8055D854[4],lbl_8055D858[6],lbl_8055D860[3],lbl_8055D864[2],lbl_8055D868[7];
 int sprintf(char *,const char *,...);
 char *strcat(char *,const char *);
 char *strncat(char *,const char *,unsigned int);
 char *strcpy(char *,const char *);
 const char *strstr(const char *,const char *);
 const char *strrchr(const char *,int);
 int strncmp(const char *,const char *,unsigned int);
}
inline const char *unknown8004A41CFormat(const char *custom,const char *fallback){if(*custom) fallback=custom;return fallback;}
inline void unknown8004A41CQuoted(char *buffer,const char *&p,char delimiter){
 int count=0;++p;
 while(*p && *p!=delimiter && count<0x7F){
  if(*p=='\\'){
   switch(*++p){case 'n':buffer[count++]=10;break;case 'r':buffer[count++]=13;break;case 't':buffer[count++]=9;break;}
  }else buffer[count++]=*p;
  ++p;
 }
 buffer[count]=0;if(*p==delimiter) ++p;
}
#endif
