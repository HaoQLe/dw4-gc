#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void MIXSetPan(void *,void *,void *);
void fn_800CA38C(void *,void *,void *);
}
extern "C" {
void fn_800CA530(int p0,int p1){
 void *value0;
 void *value1;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+0);
 value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+32);
 if(value1){
  if((int)(((unsigned int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p1)+38)>>5)&0x1)!=0){
   fn_800CA38C((void *)p0,(void *)p1,value1);
   return;
  } else {
   MIXSetPan(value1,(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p1)+56),value1);
   return;
  }
 }
}
}
#pragma pop
