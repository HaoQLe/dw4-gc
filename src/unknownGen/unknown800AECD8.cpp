#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800A325C(void *);
void fn_800ABC8C();
void *fn_800AEAF8();
void fn_800AEB34();
void fn_800AEE10();
void fn_800AF694();
extern char lbl_80478468[];
extern char lbl_8055E018[8];
extern void *lbl_80562528;
extern void *lbl_80562554;
void fn_800AED74();
void *fn_800AEDE8();
void *fn_800AEE08();
}
extern "C" {
UnknownGenHolder *dtor_800AECD8(UnknownGenHolder *object,short flags){
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
void fn_800AED4C(){
 fn_80066188((int)fn_800AED74);
}
void fn_800AED74(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562528,(int)fn_800AF694,(int)fn_800AEE08,(int)fn_800AEDE8,(int)lbl_80478468,104,(int)fn_800AEB34,(int)fn_800AEE10,0,(int)lbl_8055E018);
}
void *fn_800AEDE8(){return fn_800AEAF8();}
void *fn_800AEE08(){return lbl_80562554;}
}
#pragma pop
