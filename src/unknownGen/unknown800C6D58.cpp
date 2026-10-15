#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void *fn_800237D0();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *igAudioContext_fieldInit();
void igObject_register();
extern char igAudioContext_className[];
extern void *lbl_805621F4;
extern char lbl_80562B20[1];
extern char lbl_80562B21[1];
extern void *igAudioContext_meta;
void fn_800C6F28();
void *igAudioContext_getMeta();
void igAudioContext_arkRegister();
void igAudioContext_register();
void *igAudioContext_getMetaCall();
}
extern "C" {
UnknownGenHolder *fn_800C6D58(UnknownGenHolder *object,short flags){
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
UnknownGenHolder *fn_800C6DCC(UnknownGenHolder *object,short flags){
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
UnknownGenHolder *fn_800C6E40(UnknownGenHolder *object,short flags){
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
UnknownGenHolder *fn_800C6EB4(UnknownGenHolder *object,short flags){
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
void fn_800C6F28(){
 if((int)*reinterpret_cast<signed char *>((lbl_80562B21+0))==0){
  *reinterpret_cast<unsigned char *>((lbl_80562B20+0))=0;
  *reinterpret_cast<unsigned char *>((lbl_80562B21+0))=1;
 }
 if((void *)(int)*reinterpret_cast<unsigned char *>((lbl_80562B20+0))){
  return;
 }
 *reinterpret_cast<unsigned char *>((lbl_80562B20+0))=1;
}
}
#pragma pop
