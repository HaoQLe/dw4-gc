#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80053F28(void *);
void *fn_80054094(void *,void *);
void *fn_80054140(int);
extern void *lbl_80562140;
}
extern "C" {
void *fn_80064790(int p0,int p1){
 void *value1;
 void *value2;
 void *value0;
 void *value3;
 void *value4;
 void *value5;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+12);
 if(!value0){
  value2=(void *)0;
 } else {
  if(!lbl_80562140){
   value3=fn_80054140(16);
   value1=value3;
   if((int)(int)value3!=0){
    value4=fn_80053F28(value3);
    value1=value4;
   }
   lbl_80562140=value1;
  }
  value5=fn_80054094(lbl_80562140,value0);
  value2=value5;
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=value2;
 return value2;
}
}
#pragma pop
