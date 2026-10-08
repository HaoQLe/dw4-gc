#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802A25A0();
void fn_802A25EC();
void *fn_802A41A4(void *);
extern char lbl_8041A9E8[];
extern char lbl_8041AA14[];
}
extern "C" {
void fn_802A2BA8(int p0){
 void *value1;
 void *value2;
 void *value3;
 void *value4;
 void *value0;
 fn_802A25EC();
 if((unsigned int)p0==0){
  value3=fn_802A41A4(lbl_8041A9E8);
  value2=value3;
 } else {
  if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+4)==0){
   value4=fn_802A41A4(lbl_8041AA14);
   value1=value4;
  } else {
   value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+12)=value0;
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+16)=(void *)0;
   value1=value0;
  }
  value2=value1;
 }
 fn_802A25A0();
}
}
#pragma pop
