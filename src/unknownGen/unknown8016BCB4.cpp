#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80068128(void *,void *);
void *fn_80182484(void *,void *);
extern void *lbl_80564A14;
extern void *lbl_80565468;
}
extern "C" {
void *fn_8016BCB4(int p0,int p1){
 void *value0;
 void *value1;
 void *value2;
 void *value3;
 void *value4;
 value2=fn_80068128((void *)p1,lbl_80565468);
 if((unsigned char)(int)value2){
  value1=(void *)1;
 } else {
  value3=fn_80068128((void *)p1,lbl_80564A14);
  if((unsigned char)(int)value3){
   value4=fn_80182484((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+20));
   value0=value4;
  } else {
   value0=(void *)0;
  }
  value1=value0;
 }
 return value1;
}
}
#pragma pop
