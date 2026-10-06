#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800A325C(void *);
void fn_803113E0(void *,void *);
extern void *lbl_80534BF8;
extern void *lbl_80534C04;
extern void *lbl_80534C20;
}
extern "C" {
UnknownGenHolder *dtor_803110D0(UnknownGenHolder *object,short flags){
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
void *fn_80311144(){return lbl_80534BF8;}
void *fn_80311154(){return lbl_80534C20;}
void *fn_80311164(){return lbl_80534C04;}
void fn_80311174(int p0,int p1){
 fn_803113E0((void *)p1,(void *)p0);
}
}
#pragma pop
