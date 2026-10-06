#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800A325C(void *);
void *fn_80272768();
extern void *lbl_805350F8;
}
extern "C" {
UnknownGenHolder *dtor_803029FC(UnknownGenHolder *object,short flags){
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
UnknownGenHolder *dtor_80302A70(UnknownGenHolder *object,short flags){
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
void *fn_80302AE4(){return fn_80272768();}
void *fn_80302B04(){return lbl_805350F8;}
}
#pragma pop
