#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void fn_80305344(void *,void *,int,int);
void fn_80305A28(void *,void *);
void *fn_8030690C(void *);
void *fn_80306A40(void *,void *);
extern char lbl_80458920[];
extern char lbl_8045892C[];
}
extern "C" {
UnknownGenHolder *dtor_803677A4(UnknownGenHolder *object,short flags){
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
UnknownGenHolder *dtor_80367818(UnknownGenHolder *object,short flags){
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
UnknownGenHolder *dtor_8036788C(UnknownGenHolder *object,short flags){
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
void fn_80367900(int p0){
 void *value0;
 fn_80305344(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8),lbl_80458920,0,-1);
 fn_80306A40(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8),(void *)4);
 fn_80305A28(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8),lbl_8045892C);
 value0=fn_8030690C(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8));
 if((int)(int)value0>0){
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+12)=1;
 } else {
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+12)=0;
 }
}
}
#pragma pop
