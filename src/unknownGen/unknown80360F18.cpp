#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800A325C(void *);
void *fn_803409B0(void *);
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
void *fn_80360F94(int p0,int p1){
 void *value0=fn_803409B0(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+0));
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=value0;
 return (void *)p0;
}
void fn_80360FCC(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+0)=value;}
}
#pragma pop
