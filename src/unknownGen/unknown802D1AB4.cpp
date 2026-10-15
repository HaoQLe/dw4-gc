#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfo_register();
void beLuaInfo_fieldInit();
void *beLuaInfo_getMeta();
void beLuaInfo_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2E3C();
extern char beLuaInfo_className[];
extern char lbl_804D1828[];
extern char beLuaInfo_meta[];
void beLuaInfo_register();
void *beLuaInfo_getMetaCall();
}
extern "C" {
void beLuaInfo_registerNow(){
 meta_registerNow((int)beLuaInfo_register);
}
void beLuaInfo_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beLuaInfo_meta,(int)beBaseInfo_register,(int)fn_802B2E3C,(int)beLuaInfo_getMetaCall,(int)beLuaInfo_className,32,(int)beLuaInfo_vtableRead,(int)beLuaInfo_fieldInit,0,(int)lbl_804D1828);
}
void *beLuaInfo_getMetaCall(){return beLuaInfo_getMeta();}
}
#pragma pop
