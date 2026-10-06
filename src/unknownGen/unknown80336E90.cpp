#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_800A325C(void *);
void fn_803250AC();
void *fn_80336C64();
void fn_80336CB0();
void fn_80336FC8();
extern char lbl_804540B8[];
extern char lbl_804E23F4[];
extern char lbl_805360A4[];
void fn_80336F2C();
void *fn_80336FA8();
}
extern "C" {
UnknownGenHolder *dtor_80336E90(UnknownGenHolder *object,short flags){
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
void fn_80336F04(){
 fn_80066188((int)fn_80336F2C);
}
void fn_80336F2C(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_805360A4,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80336FA8,(int)lbl_804540B8,48,(int)fn_80336CB0,(int)fn_80336FC8,0,(int)lbl_804E23F4);
}
void *fn_80336FA8(){return fn_80336C64();}
}
#pragma pop
