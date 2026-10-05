#ifndef UNKNOWN8004944C_H
#define UNKNOWN8004944C_H
#include "unknown800442F8.h"
struct Unknown8004944CResult {
 int unknown00;
 inline Unknown8004944CResult(int value):unknown00(value){}
 Unknown8004944CResult(const Unknown8004944CResult &);
};
struct Unknown8004944COwner {unsigned char unknown00[0x50];Unknown80042DECStorage *unknown50;};
extern "C" {extern int kSuccess__3Gap,kFailure__3Gap,lbl_8055D81C;}
inline const char *unknown8004944CDecode(const char *p,int *result){unsigned int value=0;int shift=0;for(;;){int byte=*p++;value|=(byte&0x7F)<<shift;if(!(byte&0x80)) break;shift+=7;}*result=value;return p;}
inline int unknown8004944CWord(const char *p){return ((p[3]&0xFF)<<24)|((p[1]&0xFF)<<8)|(p[0]&0xFF)|((p[2]&0xFF)<<16);}
#endif
