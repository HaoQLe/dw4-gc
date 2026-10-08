#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802A25A0();
void *fn_802A25EC();
void *fn_802A41A4(void *);
extern char lbl_8041AA40[];
extern char lbl_8041AA6C[];
}
extern "C" {
void fn_802A2C1C(int p0,int p1,int p2){
 void *value0;
 void *value1;
 void *value2;
 void *value3;
 void *value4;
 value2=fn_802A25EC();
 if((unsigned int)p0==0){
  value3=fn_802A41A4(lbl_8041AA40);
  value1=value3;
 } else {
  if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+4)==0){
   value4=fn_802A41A4(lbl_8041AA6C);
   value0=value4;
  } else {
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+28)=(void *)p1;
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+32)=(void *)p2;
   value0=value2;
  }
  value1=value0;
 }
 fn_802A25A0();
}
}
#pragma pop
