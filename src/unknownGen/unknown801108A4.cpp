#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void __dl__FPv(void *);
void fn_8010CBD4();
void *fn_8010E6DC();
void igMousePosObserver_fieldInit();
void *igMousePosObserver_getMeta();
void igMousePosObserver_vtableRead();
void igView_register();
extern char lbl_80494D74[];
extern char lbl_80494D88[];
extern void *lbl_805636BC;
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
void fn_8011098C(){
 fn_80066188((int)igMousePosObserver_register);
}
void igMousePosObserver_register(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_805636BC,(int)igView_register,(int)fn_8010E6DC,(int)igMousePosObserver_getMetaCall,(int)lbl_80494D88,100,(int)igMousePosObserver_vtableRead,(int)igMousePosObserver_fieldInit,0,(int)lbl_80494D74);
}
void *igMousePosObserver_getMetaCall(){return igMousePosObserver_getMeta();}
}
#pragma pop
