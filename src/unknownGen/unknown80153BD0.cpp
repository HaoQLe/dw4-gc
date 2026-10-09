#include <unknownGen.h>
#include <meta/igMetaObject.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80053F28(void *);
void *fn_80054094(void *,void *);
void *fn_80054140(int);
extern void *lbl_80562140;
extern void *lbl_80564594;
}
extern "C" {
void *fn_80153BD0(int p0){
 void *value2;
 void *value3;
 void *value1;
 void *value4;
 void *value5;
 void *value6;
 void *value0=lbl_80564594;
 value1=(void *)reinterpret_cast<Meta::igMetaObject *>(value0)->_name;
 if(!value1){
  value3=(void *)0;
 } else {
  if(!lbl_80562140){
   value4=fn_80054140(16);
   value2=value4;
   if((int)(int)value4!=0){
    value5=fn_80053F28(value4);
    value2=value5;
   }
   lbl_80562140=value2;
  }
  value6=fn_80054094(lbl_80562140,value1);
  value3=value6;
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=value3;
 return value3;
}
}
#pragma pop
