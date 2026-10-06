#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_800A325C(void *);
void fn_802B1AC8();
void *fn_802C1800();
void fn_802C184C();
void fn_802C1A10();
extern char lbl_8041E4C4[];
extern char lbl_804D0098[];
extern char lbl_80534A84[];
void fn_802C1974();
void *fn_802C19F0();
}
extern "C" {
UnknownGenHolder *dtor_802C18D8(UnknownGenHolder *object,short flags){
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
void fn_802C194C(){
 fn_80066188((int)fn_802C1974);
}
void fn_802C1974(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534A84,(int)fn_80066B08,(int)fn_800237D0,(int)fn_802C19F0,(int)lbl_8041E4C4,24,(int)fn_802C184C,(int)fn_802C1A10,0,(int)lbl_804D0098);
}
void *fn_802C19F0(){return fn_802C1800();}
}
#pragma pop
