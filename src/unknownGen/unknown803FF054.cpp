#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_803F9D48(void *);
void fn_803FA27C(void *,...);
void *fn_803FFFA0(void *);
extern char lbl_804618F4[];
}
extern "C" {
void *fn_803FF054(int p0){
 void *value0;
 void *value1;
 void *value2;
 void *value3;
 void *value4;
 void *value5;
 if((int)p0==0){
  value0=(void *)0;
 } else {
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+4);
 }
 if((int)(int)value0==0){
  fn_803FA27C(lbl_804618F4);
  value3=(void *)0;
 } else {
  value4=fn_803F9D48((void *)p0);
  value5=fn_803FFFA0((reinterpret_cast<char *>((void *)p0)+660));
  if((int)(int)value4==(int)(int)value5){
   value2=value4;
  } else {
   value1=value5;
   if((int)(int)value4!=0){
    value1=value4;
   }
   value2=value1;
  }
  value3=value2;
 }
 return value3;
}
}
#pragma pop
