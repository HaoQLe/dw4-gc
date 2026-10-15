#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_800CAEE0();
void *fn_800CB078();
void *igController_fieldInit();
void igEventProducer_register();
void *igGamecubeControllerManager_getMeta();
extern char lbl_8047FCC8[];
extern char lbl_8047FD8C[];
extern char igController_className[];
extern char lbl_8055E988[8];
extern void *lbl_80562C10;
extern void *igController_meta;
void *igController_getMeta();
void igController_arkRegister();
void igController_register();
void *igController_getMetaCall();
}
extern "C" {
void *fn_800CBAA0(){
 void *value0;
 if(!lbl_80562C10){
  value0=fn_800635C8(lbl_8055E988,lbl_8047FCC8,lbl_8047FD8C,49);
  lbl_80562C10=value0;
 }
 return lbl_80562C10;
}
void *igController_getMeta(){
 if(!igController_meta || !(reinterpret_cast<unsigned int *>(igController_meta)[0x24/4]&4)) igController_arkRegister();
 return igController_meta;
}
void igController_arkRegister(){
 meta_registerNow((int)igController_register);
}
void igController_register(){
 fn_800CAEE0();
 meta_registerClass(1,(int)&igController_meta,(int)igEventProducer_register,(int)fn_800CB078,(int)igController_getMetaCall,(int)igController_className,16,0,(int)igController_fieldInit,0,0);
}
void *igController_getMetaCall(){return igController_getMeta();}
}
#pragma pop
