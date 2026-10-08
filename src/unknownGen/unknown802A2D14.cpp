#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802A25A0(void *);
void fn_802A25EC(void *);
void *fn_802A41A4(void *);
extern char lbl_8041AAF0[];
extern char lbl_8041AB1C[];
void *memset(void *,int,int);
}
extern "C" {
void fn_802A2D14(int p0){
 void *value0;
 void *value1;
 void *value2;
 void *value3;
 void *value4;
 fn_802A25EC((void *)p0);
 if((unsigned int)p0==0){
  value2=fn_802A41A4(lbl_8041AAF0);
  value1=value2;
 } else {
  if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+4)==0){
   value3=fn_802A41A4(lbl_8041AB1C);
   value0=value3;
  } else {
   value4=memset((void *)p0,0,36);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+4)=(void *)0;
   value0=value4;
  }
  value1=value0;
 }
 fn_802A25A0(value1);
}
}
#pragma pop
