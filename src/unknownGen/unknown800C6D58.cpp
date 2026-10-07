#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_800A325C(void *);
void fn_800C70C0();
extern char lbl_8047E744[];
extern void *lbl_805621F4;
extern char lbl_80562B20[1];
extern char lbl_80562B21[1];
extern void *lbl_80562B24;
void fn_800C6F28();
void *fn_800C6FD0();
void fn_800C700C();
void fn_800C7034();
void *fn_800C70A0();
}
extern "C" {
UnknownGenHolder *fn_800C6D58(UnknownGenHolder *object,short flags){
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
UnknownGenHolder *fn_800C6DCC(UnknownGenHolder *object,short flags){
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
UnknownGenHolder *fn_800C6E40(UnknownGenHolder *object,short flags){
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
UnknownGenHolder *fn_800C6EB4(UnknownGenHolder *object,short flags){
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
void *fn_800C6FD0(){
 if(!lbl_80562B24 || !(reinterpret_cast<unsigned int *>(lbl_80562B24)[0x24/4]&4)) fn_800C700C();
 return lbl_80562B24;
}
void fn_800C700C(){
 fn_80066188((int)fn_800C7034);
}
void fn_800C7034(){
 fn_800C6F28();
 fn_80066204(1,(int)&lbl_80562B24,(int)fn_80066B08,(int)fn_800237D0,(int)fn_800C70A0,(int)lbl_8047E744,12,0,(int)fn_800C70C0,0,0);
}
void *fn_800C70A0(){return fn_800C6FD0();}
}
#pragma pop
