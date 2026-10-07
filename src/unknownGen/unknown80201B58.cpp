#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_801D6834(void *);
void fn_801FAE18(void *,void *);
void *fn_80201ADC();
extern void *lbl_805627E0;
extern void *lbl_805627F4;
}
extern "C" {
void *fn_80201B58(int p0){
 void *value0;
 void *value1;
 void *value2;
 if((unsigned int)p0==(unsigned int)(int)lbl_805627F4){
  value1=(void *)1;
 } else {
  if((unsigned int)p0==(unsigned int)(int)lbl_805627E0){
   value2=fn_80201ADC();
   value0=value2;
  } else {
   value0=(void *)0;
  }
  value1=value0;
 }
 return value1;
}
void fn_80201BA0(int p0,int p1){
 fn_801FAE18((void *)p0,(void *)p1);
 if(!(unsigned char)p1){
  fn_801D6834(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+52));
  return;
 } else {
  return;
 }
}
}
#pragma pop
