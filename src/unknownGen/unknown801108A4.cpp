#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800A325C(void *);
void fn_8010CBD4();
void fn_8010CFA4();
void *fn_8010E6DC();
void *fn_80110758();
void fn_80110794();
void fn_80110A4C();
extern char lbl_80494D74[];
extern char lbl_80494D88[];
extern void *lbl_805636BC;
void fn_801109B4();
void *fn_80110A2C();
}
extern "C" {
UnknownGenHolder *fn_801108A4(UnknownGenHolder *object,short flags){
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
UnknownGenHolder *dtor_80110918(UnknownGenHolder *object,short flags){
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
void fn_8011098C(){
 fn_80066188((int)fn_801109B4);
}
void fn_801109B4(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_805636BC,(int)fn_8010CFA4,(int)fn_8010E6DC,(int)fn_80110A2C,(int)lbl_80494D88,100,(int)fn_80110794,(int)fn_80110A4C,0,(int)lbl_80494D74);
}
void *fn_80110A2C(){return fn_80110758();}
}
#pragma pop
