#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoData_register();
void beSoundData_fieldInit();
void *beSoundData_getMeta();
void beSoundData_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B8770();
extern char beSoundData_className[];
extern char beSoundData_meta[];
void beSoundData_register();
void *beSoundData_getMetaCall();
}
extern "C" {
void beSoundData_arkRegister(){
 meta_registerNow((int)beSoundData_register);
}
void beSoundData_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beSoundData_meta,(int)beBaseInfoData_register,(int)fn_802B8770,(int)beSoundData_getMetaCall,(int)beSoundData_className,32,(int)beSoundData_vtableRead,(int)beSoundData_fieldInit,0,0);
}
void *beSoundData_getMetaCall(){return beSoundData_getMeta();}
}
#pragma pop
