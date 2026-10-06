#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800A325C(void *);
}
extern "C" {
int fn_80360F18(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+0);}
UnknownGenHolder *dtor_80360F20(UnknownGenHolder *object,short flags){
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
}
#pragma pop
