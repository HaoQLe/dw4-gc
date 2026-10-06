#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800A325C(void *);
void *fn_802B2B2C();
void fn_802E3284();
void fn_803250AC();
void *fn_8032ACB0();
void fn_8032ACFC();
void fn_8032AF18();
extern char lbl_804536C8[];
extern char lbl_804E1A58[];
extern char lbl_80535DC0[];
void fn_8032AE7C();
void *fn_8032AEF8();
}
extern "C" {
UnknownGenHolder *dtor_8032ADE0(UnknownGenHolder *object,short flags){
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
void fn_8032AE54(){
 fn_80066188((int)fn_8032AE7C);
}
void fn_8032AE7C(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535DC0,(int)fn_802E3284,(int)fn_802B2B2C,(int)fn_8032AEF8,(int)lbl_804536C8,48,(int)fn_8032ACFC,(int)fn_8032AF18,0,(int)lbl_804E1A58);
}
void *fn_8032AEF8(){return fn_8032ACB0();}
}
#pragma pop
