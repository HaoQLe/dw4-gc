#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void MIXSetInput(void *,void *,void *);
void fn_800CA38C(void *,void *,void *);
extern char lbl_80566880[4];
}
extern "C" {
void fn_800CA4CC(int p0,int p1){
 void *value0;
 void *value1;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+0);
 value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+32);
 if(value1){
  if((int)(((unsigned int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p1)+38)>>5)&0x1)!=0){
   fn_800CA38C((void *)p0,(void *)p1,value1);
   return;
  } else {
   MIXSetInput(value1,(void *)(int)(64-(int)(*reinterpret_cast<float *>((lbl_80566880+0))**reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p1)+48))),value1);
   return;
  }
 }
}
}
#pragma pop
