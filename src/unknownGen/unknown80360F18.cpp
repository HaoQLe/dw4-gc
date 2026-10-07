#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800607F4(void *);
void fn_800A325C(void *);
void *fn_803409B0(void *);
extern char lbl_80562298[1];
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
void *fn_80360FD4(int p0,int p1){
 void *value0;
 void *value1;
 if((void *)(int)*reinterpret_cast<unsigned char *>((lbl_80562298+0))){
  value0=(void *)p1;
 } else {
  value1=fn_800607F4(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0));
  value0=value1;
 }
 return value0;
}
unsigned char fn_80361010(void *object){return *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(object)+73);}
void fn_80361018(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+48)=value;}
unsigned char fn_80361020(void *object){return *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(object)+16);}
int fn_80361028(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+20);}
}
#pragma pop
