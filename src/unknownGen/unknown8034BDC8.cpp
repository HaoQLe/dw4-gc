#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800A325C(void *);
void *fn_803AE1A4();
}
extern "C" {
UnknownGenHolder *dtor_8034BDC8(UnknownGenHolder *object,short flags){
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
void *beNDMWMdlEnemy_virtualB8(){return fn_803AE1A4();}
}
#pragma pop
