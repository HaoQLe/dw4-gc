#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80068128(void *,void *);
void *fn_80182848(void *,void *);
void *fn_801829C4(void *,void *);
extern void *lbl_80564A14;
extern void *lbl_80565468;
}
extern "C" {
void *fn_80182748(int p0,int p1){
 void *value0;
 void *value1;
 void *value2;
 void *value3;
 value0=fn_80068128((void *)p1,lbl_80564A14);
 if((unsigned char)(int)value0){
  value1=fn_801829C4((void *)p1,(void *)p0);
 } else {
  value2=fn_80068128((void *)p1,lbl_80565468);
  if((unsigned char)(int)value2){
   value3=fn_80182848((void *)p1,(void *)p0);
   return value3;
  } else {
   return (void *)0;
  }
 }
 return value1;
}
}
#pragma pop
