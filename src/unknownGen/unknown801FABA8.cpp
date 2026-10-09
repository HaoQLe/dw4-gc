#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
}
extern "C" {
UnknownGenHolder *fn_801FABA8(UnknownGenHolder *object,short flags){
 if(object){
  UnknownGenValue *value=object->unknown00;
  if(value){
   --value->unknown04;
   if(!(reinterpret_cast<volatile unsigned int *>(value)[1]&0x7FFFFF)) fn_80066E1C(value);
  }
  if(flags>0) __dl__FPv(object);
 }
 return object;
}
void *fn_801FAC1C(int p0){
 if(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16)){
  return *reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16))+8);
 }
 return (void *)0;
}
}
#pragma pop
