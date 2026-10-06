#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800A325C(void *);
void fn_802B1AC8();
void *fn_802BD4D4();
void fn_802BD520();
void fn_802BD91C();
void fn_802BF3C4();
extern char lbl_8041DF44[];
extern char lbl_8053490C[];
extern void *lbl_80534910;
extern void *lbl_8053496C;
void fn_802BD6D8();
void *fn_802BD744();
void *fn_802BD764();
}
extern "C" {
UnknownGenHolder *dtor_802BD63C(UnknownGenHolder *object,short flags){
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
void fn_802BD6B0(){
 fn_80066188((int)fn_802BD6D8);
}
void fn_802BD6D8(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_8053490C,(int)fn_802BF3C4,(int)fn_802BD764,(int)fn_802BD744,(int)lbl_8041DF44,244,(int)fn_802BD520,0,0,0);
}
void *fn_802BD744(){return fn_802BD4D4();}
void *fn_802BD764(){return lbl_8053496C;}
void *fn_802BD774(void *object){
 fn_802BD91C();
 return fn_8006546C(lbl_80534910,object);
}
void *fn_802BD7B4(){
 if(!lbl_80534910 || !(reinterpret_cast<unsigned int *>(lbl_80534910)[0x24/4]&4)) fn_802BD91C();
 return lbl_80534910;
}
}
#pragma pop
