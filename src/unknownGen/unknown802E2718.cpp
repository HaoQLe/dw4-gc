#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800A325C(void *);
void fn_802B1AC8();
void *fn_802B381C();
void *fn_802E2570();
void fn_802E25BC();
void fn_802E2850();
void fn_802E3908();
extern char lbl_80420C34[];
extern char lbl_804D2BB8[];
extern char lbl_80535660[];
void fn_802E27B4();
void *fn_802E2830();
}
extern "C" {
UnknownGenHolder *dtor_802E2718(UnknownGenHolder *object,short flags){
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
void fn_802E278C(){
 fn_80066188((int)fn_802E27B4);
}
void fn_802E27B4(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535660,(int)fn_802E3908,(int)fn_802B381C,(int)fn_802E2830,(int)lbl_80420C34,220,(int)fn_802E25BC,(int)fn_802E2850,0,(int)lbl_804D2BB8);
}
void *fn_802E2830(){return fn_802E2570();}
}
#pragma pop
