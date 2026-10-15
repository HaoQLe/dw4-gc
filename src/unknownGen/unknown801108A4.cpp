#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8010CBD4();
void *fn_8010E6DC();
void igMousePosObserver_fieldInit();
void *igMousePosObserver_getMeta();
void igMousePosObserver_vtableRead();
void igView_register();
extern char lbl_80494D74[];
extern char igMousePosObserver_className[];
extern void *igMousePosObserver_meta;
void igMousePosObserver_register();
void *igMousePosObserver_getMetaCall();
}
extern "C" {
UnknownGenHolder *fn_801108A4(UnknownGenHolder *object,short flags){
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
UnknownGenHolder *dtor_80110918(UnknownGenHolder *object,short flags){
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
void igMousePosObserver_registerNow(){
 meta_registerNow((int)igMousePosObserver_register);
}
void igMousePosObserver_register(){
 fn_8010CBD4();
 meta_registerClass(0,(int)&igMousePosObserver_meta,(int)igView_register,(int)fn_8010E6DC,(int)igMousePosObserver_getMetaCall,(int)igMousePosObserver_className,100,(int)igMousePosObserver_vtableRead,(int)igMousePosObserver_fieldInit,0,(int)lbl_80494D74);
}
void *igMousePosObserver_getMetaCall(){return igMousePosObserver_getMeta();}
}
#pragma pop
