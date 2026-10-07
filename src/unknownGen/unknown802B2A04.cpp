#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800A325C(void *);
void fn_802B1AC8();
void *fn_802B291C();
void fn_802B2968();
void *fn_802B2B2C();
void fn_802E3284();
extern char lbl_8041C9D0[];
extern char lbl_80534538[];
void fn_802B2AA0();
void *fn_802B2B0C();
}
extern "C" {
UnknownGenHolder *dtor_802B2A04(UnknownGenHolder *object,short flags){
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
void fn_802B2A78(){
 fn_80066188((int)fn_802B2AA0);
}
void fn_802B2AA0(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534538,(int)fn_802E3284,(int)fn_802B2B2C,(int)fn_802B2B0C,(int)lbl_8041C9D0,44,(int)fn_802B2968,0,0,0);
}
void *fn_802B2B0C(){return fn_802B291C();}
}
#pragma pop
