#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfo_register();
void beLuaInfo_fieldInit();
void *beLuaInfo_getMeta();
void beLuaInfo_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2E3C();
extern char lbl_8041FAA4[];
extern char lbl_804D1828[];
extern char lbl_80535100[];
void beLuaInfo_register();
void *beLuaInfo_getMetaCall();
}
extern "C" {
void fn_802D1AB4(){
 fn_80066188((int)beLuaInfo_register);
}
void beLuaInfo_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535100,(int)beBaseInfo_register,(int)fn_802B2E3C,(int)beLuaInfo_getMetaCall,(int)lbl_8041FAA4,32,(int)beLuaInfo_vtableRead,(int)beLuaInfo_fieldInit,0,(int)lbl_804D1828);
}
void *beLuaInfo_getMetaCall(){return beLuaInfo_getMeta();}
}
#pragma pop
