#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800CAEE0();
void *fn_800CB078();
void *igControllerManager_fieldInit();
void igEventProducer_register();
extern char lbl_8047F6B0[];
extern char lbl_8055E970[8];
extern void *lbl_805621F4;
extern void *lbl_80562C08;
void *igControllerManager_getMeta();
void fn_800CB930();
void igControllerManager_register();
void *igControllerManager_getMetaCall();
}
extern "C" {
void *fn_800CB8B8(){
 if(!lbl_80562C08) lbl_80562C08=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562C08;
}
void *igControllerManager_getMeta(){
 if(!lbl_80562C08 || !(reinterpret_cast<unsigned int *>(lbl_80562C08)[0x24/4]&4)) fn_800CB930();
 return lbl_80562C08;
}
void fn_800CB930(){
 fn_80066188((int)igControllerManager_register);
}
void igControllerManager_register(){
 fn_800CAEE0();
 fn_80066204(1,(int)&lbl_80562C08,(int)igEventProducer_register,(int)fn_800CB078,(int)igControllerManager_getMetaCall,(int)lbl_8047F6B0,12,0,(int)igControllerManager_fieldInit,0,(int)lbl_8055E970);
}
void *igControllerManager_getMetaCall(){return igControllerManager_getMeta();}
}
#pragma pop
