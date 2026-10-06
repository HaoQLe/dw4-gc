#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800A325C(void *);
void fn_802B1AC8();
void *fn_802B2B2C();
void *fn_802C13B4();
void fn_802C1400();
void fn_802C169C();
void fn_802E3284();
extern char lbl_8041E490[];
extern char lbl_804D0058[];
extern char lbl_80534A74[];
void fn_802C1600();
void *fn_802C167C();
}
extern "C" {
UnknownGenHolder *dtor_802C1564(UnknownGenHolder *object,short flags){
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
void fn_802C15D8(){
 fn_80066188((int)fn_802C1600);
}
void fn_802C1600(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534A74,(int)fn_802E3284,(int)fn_802B2B2C,(int)fn_802C167C,(int)lbl_8041E490,56,(int)fn_802C1400,(int)fn_802C169C,0,(int)lbl_804D0058);
}
void *fn_802C167C(){return fn_802C13B4();}
}
#pragma pop
