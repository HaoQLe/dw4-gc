#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_803FA27C(void *,...);
void *fn_803FE1A4();
void *fn_803FF4FC(void *);
extern char lbl_80461A54[];
extern char lbl_805597E4[];
}
extern "C" {
void *fn_803FF5B4(int p0){
 void *value0;
 void *value1;
 void *value2;
 void *value3;
 void *value4;
 void *value5;
 void *value6;
 if((int)(int)*reinterpret_cast<void **>((lbl_805597E4+0))!=1){
  value4=(void *)0;
 } else {
  if((unsigned int)p0==0){
   fn_803FA27C(lbl_80461A54);
   value3=(void *)0;
  } else {
   if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+4)!=1){
    value2=(void *)0;
   } else {
    if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+100)==1){
     value1=(void *)0;
    } else {
     value5=fn_803FE1A4();
     if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value5)+36)==1){
      value0=(void *)0;
     } else {
      value6=fn_803FF4FC((void *)p0);
      value0=value6;
     }
     value1=value0;
    }
    value2=value1;
   }
   value3=value2;
  }
  value4=value3;
 }
 return value4;
}
}
#pragma pop
