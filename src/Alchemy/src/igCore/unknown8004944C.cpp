#include "unknown8004944C.h"
#pragma push
#pragma auto_inline off
extern "C" Unknown8004944CResult fn_8004944C(Unknown8004944COwner *object,int offset,int *value){
 const char *p=reinterpret_cast<const char *>(object->unknown50->unknown10)+offset;
 int shift=0;int decoded=0;
 for(;;){int byte=*p++;decoded|=(byte&0x7F)<<shift;if(!(byte&0x80)) break;shift+=7;}
 *value=decoded;
 if(*value>=32) return kFailure__3Gap;
 return kSuccess__3Gap;
}
extern "C" Unknown8004944CResult fn_800494B0(Unknown8004944COwner *object,int offset,unsigned int *value){
 const char *p=reinterpret_cast<const char *>(object->unknown50->unknown10)+offset;
 int shift=0;int decoded=0;
 for(;;){int byte=*p++;decoded|=(byte&0x7F)<<shift;if(!(byte&0x80)) break;shift+=7;}
 if(decoded>=32) return kFailure__3Gap;
 int kind=*p++;if(kind>lbl_8055D81C) return kFailure__3Gap;
 const char *q=p;int shift2=0;int decoded2=0;
 for(;;){int byte=*q++;decoded2|=(byte&0x7F)<<shift2;if(!(byte&0x80)) break;shift2+=7;}
 if(decoded2&1) *value=((q[3]&0xFF)<<24)|((q[2]&0xFF)<<16)|((q[1]&0xFF)<<8)|(q[0]&0xFF);else return kFailure__3Gap;
 return kSuccess__3Gap;
}
extern "C" Unknown8004944CResult fn_800495AC(Unknown8004944COwner *object,int offset,unsigned int *value){
 const char *p=reinterpret_cast<const char *>(object->unknown50->unknown10)+offset;
 int shift=0;int decoded=0;
 for(;;){int byte=*p++;decoded|=(byte&0x7F)<<shift;if(!(byte&0x80)) break;shift+=7;}
 if(decoded>=32) return kFailure__3Gap;
 int kind=*p++;if(kind>lbl_8055D81C) return kFailure__3Gap;
 const char *q=p;int shift2=0;int decoded2=0;
 for(;;){int byte=*q++;decoded2|=(byte&0x7F)<<shift2;if(!(byte&0x80)) break;shift2+=7;}
 if(decoded2&1){
  float unused;
  const char *next=q+4;decoded2=0;
  *reinterpret_cast<unsigned int *>(&unused)=((q[3]&0xFF)<<24)|((q[2]&0xFF)<<16)|((q[1]&0xFF)<<8)|(q[0]&0xFF);
  *value=0;
  for(;;){*value|=(*next&0x7F)<<decoded2;if(!(*next++&0x80)) break;decoded2+=7;}
 }else return kFailure__3Gap;
 return kSuccess__3Gap;
}
#pragma pop
