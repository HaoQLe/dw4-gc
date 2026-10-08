#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802A25A0();
void fn_802A25EC();
void *fn_802A41A4(void *);
extern char lbl_8041AF4C[];
extern char lbl_8041AF78[];
}
extern "C" {
void fn_802A3A08(int p0){
 void *value0;
 void *value1;
 void *value2;
 void *value3;
 fn_802A25EC();
 if((unsigned int)p0==0){
  value2=fn_802A41A4(lbl_8041AF4C);
  value1=value2;
 } else {
  if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+4)==0){
   value3=fn_802A41A4(lbl_8041AF78);
   value0=value3;
  } else {
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+12)=(void *)0;
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+16)=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+32);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+20)=(void *)0;
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+24)=(void *)0;
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+40)=(void *)0;
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+44)=(void *)0;
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+48)=(void *)0;
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+52)=(void *)0;
   value0=(void *)0;
  }
  value1=value0;
 }
 fn_802A25A0();
}
}
#pragma pop
