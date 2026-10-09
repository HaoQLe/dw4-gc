#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80068128(void *,void *);
extern void *lbl_80564A14;
extern void *lbl_80565468;
}
extern "C" {
void *fn_80184EA8(int p0,int p1,int p2,int p3,int p4,int p5){
 void *value0;
 void *value1;
 void *value2;
 value1=fn_80068128((void *)p1,lbl_80564A14);
 value2=fn_80068128((void *)p1,lbl_80565468);
 value0=(void *)0;
 if(((unsigned char)(int)value1||(unsigned char)(int)value2)){
  value0=(void *)1;
 }
 return value0;
}
}
#pragma pop
