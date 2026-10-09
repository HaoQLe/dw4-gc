#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void *fn_800237D0();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *igAudioContext_fieldInit();
void igObject_register();
extern char lbl_8047E744[];
extern void *lbl_805621F4;
extern char lbl_80562B20[1];
extern char lbl_80562B21[1];
extern void *lbl_80562B24;
void fn_800C6F28();
void *igAudioContext_getMeta();
void fn_800C700C();
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
void *fn_800C6F5C(void *object){
 fn_800C700C();
 return fn_8006546C(lbl_80562B24,object);
}
void *fn_800C6F94(){
 if(!lbl_80562B24) lbl_80562B24=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562B24;
}
void *igAudioContext_getMeta(){
 if(!lbl_80562B24 || !(reinterpret_cast<unsigned int *>(lbl_80562B24)[0x24/4]&4)) fn_800C700C();
 return lbl_80562B24;
}
void fn_800C700C(){
 fn_80066188((int)igAudioContext_register);
}
void igAudioContext_register(){
 fn_800C6F28();
 fn_80066204(1,(int)&lbl_80562B24,(int)igObject_register,(int)fn_800237D0,(int)igAudioContext_getMetaCall,(int)lbl_8047E744,12,0,(int)igAudioContext_fieldInit,0,0);
}
void *igAudioContext_getMetaCall(){return igAudioContext_getMeta();}
}
#pragma pop
