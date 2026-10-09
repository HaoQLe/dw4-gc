#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800CAEE0();
void *fn_800CB078();
void *igController_fieldInit();
void igEventProducer_register();
void *igGamecubeControllerManager_getMeta();
extern char lbl_8047FCC8[];
extern char lbl_8047FD8C[];
extern char lbl_8047FE50[];
extern char lbl_8055E988[8];
extern void *lbl_80562C10;
extern void *lbl_80562C14;
void *igController_getMeta();
void fn_800CBB28();
void igController_register();
void *igController_getMetaCall();
}
extern "C" {
void *igGamecubeControllerManager_getMetaCall(){return igGamecubeControllerManager_getMeta();}
void *fn_800CBAA0(){
 void *value0;
 if(!lbl_80562C10){
  value0=fn_800635C8(lbl_8055E988,lbl_8047FCC8,lbl_8047FD8C,49);
  lbl_80562C10=value0;
 }
 return lbl_80562C10;
}
void *igController_getMeta(){
 if(!lbl_80562C14 || !(reinterpret_cast<unsigned int *>(lbl_80562C14)[0x24/4]&4)) fn_800CBB28();
 return lbl_80562C14;
}
void fn_800CBB28(){
 fn_80066188((int)igController_register);
}
void igController_register(){
 fn_800CAEE0();
 fn_80066204(1,(int)&lbl_80562C14,(int)igEventProducer_register,(int)fn_800CB078,(int)igController_getMetaCall,(int)lbl_8047FE50,16,0,(int)igController_fieldInit,0,0);
}
void *igController_getMetaCall(){return igController_getMeta();}
}
#pragma pop
