#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beSaveApi_register();
void *beSvUseCheckApi_getMeta();
void beSvUseCheckApi_vtableRead();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802BD764();
void fn_802BEC60();
extern char lbl_8041E044[];
extern char lbl_80534954[];
extern void *lbl_80534958;
void beSvUseCheckApi_register();
void *beSvUseCheckApi_getMetaCall();
}
extern "C" {
void fn_802BEA04(){
 fn_80066188((int)beSvUseCheckApi_register);
}
void beSvUseCheckApi_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534954,(int)beSaveApi_register,(int)fn_802BD764,(int)beSvUseCheckApi_getMetaCall,(int)lbl_8041E044,212,(int)beSvUseCheckApi_vtableRead,0,0,0);
}
void *beSvUseCheckApi_getMetaCall(){return beSvUseCheckApi_getMeta();}
void *fn_802BEAB8(void *object){
 fn_802BEC60();
 return fn_8006546C(lbl_80534958,object);
}
void *beSvFormatApi_getMeta(){
 if(!lbl_80534958 || !(reinterpret_cast<unsigned int *>(lbl_80534958)[0x24/4]&4)) fn_802BEC60();
 return lbl_80534958;
}
}
#pragma pop
