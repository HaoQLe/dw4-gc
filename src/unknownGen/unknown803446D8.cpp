#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800A325C(void *);
void *fn_802B381C();
void fn_802E3908();
void fn_803250AC();
void *fn_80344308();
void fn_80344354();
void fn_80344810();
extern char lbl_804555A0[];
extern char lbl_804E4098[];
extern char lbl_805367F0[];
void fn_80344774();
void *fn_803447F0();
}
extern "C" {
UnknownGenHolder *dtor_803446D8(UnknownGenHolder *object,short flags){
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
void fn_8034474C(){
 fn_80066188((int)fn_80344774);
}
void fn_80344774(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_805367F0,(int)fn_802E3908,(int)fn_802B381C,(int)fn_803447F0,(int)lbl_804555A0,76,(int)fn_80344354,(int)fn_80344810,0,(int)lbl_804E4098);
}
void *fn_803447F0(){return fn_80344308();}
}
#pragma pop
