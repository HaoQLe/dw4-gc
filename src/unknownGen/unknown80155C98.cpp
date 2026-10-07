#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800A325C(void *);
}
extern "C" {
UnknownGenHolder *dtor_80155C98(UnknownGenHolder *object,short flags){
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
void *fn_80155D0C(int p0,int p1){
 if((unsigned int)p1==0){
  return (void *)0;
 }
 if((unsigned int)p1==(unsigned int)p0){
  return (void *)0;
 }
 if(((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+20)&0x40)){
  return (void *)0;
 }
 return (void *)(int)((unsigned int)__cntlzw(((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+20)-(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20)))>>5);
}
}
#pragma pop
