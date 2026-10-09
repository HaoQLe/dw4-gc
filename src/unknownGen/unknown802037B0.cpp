#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void *fn_8020B06C(void *,void *);
}
extern "C" {
void *fn_802037B0(int p0,int p1){
 void *value0;
 void *value1;
 value0=(void *)0;
 if(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12)){
  value1=fn_8020B06C((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12));
  value0=value1;
 }
 return value0;
}
UnknownGenHolder *dtor_802037E8(UnknownGenHolder *object,short flags){
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
void igAttrSet_virtual94(void *object,UnknownGenValue *value){
 if(value) ++value->unknown04;
 UnknownGenValue *old=*reinterpret_cast<UnknownGenValue **>(reinterpret_cast<char *>(object)+0x20);
 if(old) unknownGenDrop(old);
 *reinterpret_cast<UnknownGenValue **>(reinterpret_cast<char *>(object)+0x20)=value;
}
}
#pragma pop
