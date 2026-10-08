#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80069128(void *,void *,void *);
}
extern "C" {
void fn_802F7BDC(int p0,int p1,int p2,int p3,int p4,int p5){
 void *value0;
 void *value1;
 if(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24)){
  if((unsigned int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+32)!=1){
   fn_80069128(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+28),*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24),(void *)p2);
   value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24);
   if(value0){
    value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+4)=(reinterpret_cast<char *>(value1)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4)&0x7FFFFF)){
     fn_80066E1C(value0);
    }
   }
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+24)=(void *)0;
   *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+32)=0;
   return;
  } else {
   return;
  }
 }
}
}
#pragma pop
