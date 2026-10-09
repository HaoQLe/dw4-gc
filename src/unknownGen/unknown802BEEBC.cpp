#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beSaveApi_register();
void *beSvFileFindApi_getMeta();
void beSvFileFindApi_vtableRead();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802BD764();
void fn_802BF180();
extern char lbl_8041E064[];
extern char lbl_8053495C[];
extern void *lbl_80534960;
void beSvFileFindApi_register();
void *beSvFileFindApi_getMetaCall();
}
extern "C" {
void fn_802BEEBC(){
 fn_80066188((int)beSvFileFindApi_register);
}
void beSvFileFindApi_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_8053495C,(int)beSaveApi_register,(int)fn_802BD764,(int)beSvFileFindApi_getMetaCall,(int)lbl_8041E064,212,(int)beSvFileFindApi_vtableRead,0,0,0);
}
void *beSvFileFindApi_getMetaCall(){return beSvFileFindApi_getMeta();}
void *fn_802BEF70(void *object){
 fn_802BF180();
 return fn_8006546C(lbl_80534960,object);
}
void *beSvFileMakeApi_getMeta(){
 if(!lbl_80534960 || !(reinterpret_cast<unsigned int *>(lbl_80534960)[0x24/4]&4)) fn_802BF180();
 return lbl_80534960;
}
}
#pragma pop
