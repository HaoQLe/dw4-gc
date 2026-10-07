#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800A325C(void *);
void fn_8011A314(void *,void *);
extern void *lbl_805638B8;
}
extern "C" {
UnknownGenHolder *dtor_80119DF8(UnknownGenHolder *object,short flags){
 if(object){
  UnknownGenValue *value=object->unknown00;
  if(value){
   --value->unknown04;
   if(!(reinterpret_cast<volatile unsigned int *>(value)[1]&0x7FFFFF)) fn_80066E1C(value);
  }
  if(flags>0) fn_800A325C(object);
 }
 return object;
}
int fn_80119E6C(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+12);}
void *fn_80119E74(int p0,int p1,int p2,int p3,int p4,int p5){
 void *value0=lbl_805638B8;
 if(value0){
  fn_8011A314(value0,(void *)p2);
 }
 return (void *)0;
}
}
#pragma pop
