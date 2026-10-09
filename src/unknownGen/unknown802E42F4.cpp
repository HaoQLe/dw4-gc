#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beActionStarterInfoRam_getMeta();
void beActionStarterInfoRam_vtableRead();
void beBaseInfoRam_register();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2B2C();
void fn_802E458C();
extern char lbl_80420E04[];
extern char lbl_80535724[];
extern void *lbl_80535728;
void beActionStarterInfoRam_register();
void *beActionStarterInfoRam_getMetaCall();
}
extern "C" {
void fn_802E42F4(){
 fn_80066188((int)beActionStarterInfoRam_register);
}
void beActionStarterInfoRam_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535724,(int)beBaseInfoRam_register,(int)fn_802B2B2C,(int)beActionStarterInfoRam_getMetaCall,(int)lbl_80420E04,44,(int)beActionStarterInfoRam_vtableRead,0,0,0);
}
void *beActionStarterInfoRam_getMetaCall(){return beActionStarterInfoRam_getMeta();}
void *beActionStarterInfo_getMeta(){
 if(!lbl_80535728 || !(reinterpret_cast<unsigned int *>(lbl_80535728)[0x24/4]&4)) fn_802E458C();
 return lbl_80535728;
}
}
#pragma pop
