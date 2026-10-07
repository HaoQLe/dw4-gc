#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800A325C(void *);
void fn_803250AC();
void *fn_80326C14();
void fn_80326C60();
void *fn_80326F88();
void fn_80328720();
extern char lbl_80453474[];
extern char lbl_80535D40[];
void fn_80326EFC();
void *fn_80326F68();
}
extern "C" {
UnknownGenHolder *dtor_80326E60(UnknownGenHolder *object,short flags){
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
void fn_80326ED4(){
 fn_80066188((int)fn_80326EFC);
}
void fn_80326EFC(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535D40,(int)fn_80328720,(int)fn_80326F88,(int)fn_80326F68,(int)lbl_80453474,80,(int)fn_80326C60,0,0,0);
}
void *fn_80326F68(){return fn_80326C14();}
}
#pragma pop
