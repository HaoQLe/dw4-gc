#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoData_register();
void beBaseInfoRamTimer_fieldInit();
void *beBaseInfoRamTimer_getMeta();
void beBaseInfoRamTimer_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B8770();
extern char beBaseInfoRamTimer_className[];
extern char beBaseInfoRamTimer_meta[];
void beBaseInfoRamTimer_register();
void *beBaseInfoRamTimer_getMetaCall();
}
extern "C" {
void beBaseInfoRamTimer_arkRegister(){
 meta_registerNow((int)beBaseInfoRamTimer_register);
}
void beBaseInfoRamTimer_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beBaseInfoRamTimer_meta,(int)beBaseInfoData_register,(int)fn_802B8770,(int)beBaseInfoRamTimer_getMetaCall,(int)beBaseInfoRamTimer_className,64,(int)beBaseInfoRamTimer_vtableRead,(int)beBaseInfoRamTimer_fieldInit,0,0);
}
void *beBaseInfoRamTimer_getMetaCall(){return beBaseInfoRamTimer_getMeta();}
}
#pragma pop
