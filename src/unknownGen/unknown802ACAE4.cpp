#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void *fn_800284EC();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802AA788();
void igInfo_register();
void igMovieInfo_fieldInit();
void *igMovieInfo_getMeta();
void igMovieInfo_vtableRead();
extern char igMovieInfo_className[];
extern char lbl_804CDBDC[];
extern char igMovieInfo_meta[];
void igMovieInfo_register();
void *igMovieInfo_getMetaCall();
}
extern "C" {
UnknownGenHolder *dtor_802ACAE4(UnknownGenHolder *object,short flags){
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
UnknownGenHolder *dtor_802ACB58(UnknownGenHolder *object,short flags){
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
void igMovieInfo_registerNow(){
 meta_registerNow((int)igMovieInfo_register);
}
void igMovieInfo_register(){
 fn_802AA788();
 meta_registerClass(0,(int)igMovieInfo_meta,(int)igInfo_register,(int)fn_800284EC,(int)igMovieInfo_getMetaCall,(int)igMovieInfo_className,104,(int)igMovieInfo_vtableRead,(int)igMovieInfo_fieldInit,0,(int)lbl_804CDBDC);
}
void *igMovieInfo_getMetaCall(){return igMovieInfo_getMeta();}
}
#pragma pop
