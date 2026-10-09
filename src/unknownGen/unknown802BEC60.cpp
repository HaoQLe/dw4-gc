#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beSaveApi_register();
void *beSvFormatApi_getMeta();
void beSvFormatApi_vtableRead();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802BD764();
void fn_802BEEBC();
extern char lbl_8041E054[];
extern char lbl_80534958[];
extern void *lbl_8053495C;
void beSvFormatApi_register();
void *beSvFormatApi_getMetaCall();
}
extern "C" {
void fn_802BEC60(){
 fn_80066188((int)beSvFormatApi_register);
}
void beSvFormatApi_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534958,(int)beSaveApi_register,(int)fn_802BD764,(int)beSvFormatApi_getMetaCall,(int)lbl_8041E054,212,(int)beSvFormatApi_vtableRead,0,0,0);
}
void *beSvFormatApi_getMetaCall(){return beSvFormatApi_getMeta();}
void *fn_802BED14(void *object){
 fn_802BEEBC();
 return fn_8006546C(lbl_8053495C,object);
}
void *beSvFileFindApi_getMeta(){
 if(!lbl_8053495C || !(reinterpret_cast<unsigned int *>(lbl_8053495C)[0x24/4]&4)) fn_802BEEBC();
 return lbl_8053495C;
}
}
#pragma pop
