#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800A325C(void *);
extern void *lbl_80535660;
}
extern "C" {
UnknownGenHolder *dtor_802F3FAC(UnknownGenHolder *object,short flags){
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
void *fn_802F4020(){return lbl_80535660;}
}
#pragma pop
