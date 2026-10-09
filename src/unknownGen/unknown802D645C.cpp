#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoManager_register();
void *beHitLandDeliv_getMeta();
void beHitLandDeliv_vtableRead();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B381C();
void fn_802D6624();
extern char lbl_8041FF50[];
extern char lbl_8053524C[];
extern void *lbl_80535250;
extern void *lbl_805621F4;
void beHitLandDeliv_register();
void *beHitLandDeliv_getMetaCall();
}
extern "C" {
void fn_802D645C(){
 fn_80066188((int)beHitLandDeliv_register);
}
void beHitLandDeliv_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_8053524C,(int)beBaseInfoManager_register,(int)fn_802B381C,(int)beHitLandDeliv_getMetaCall,(int)lbl_8041FF50,32,(int)beHitLandDeliv_vtableRead,0,0,0);
}
void *beHitLandDeliv_getMetaCall(){return beHitLandDeliv_getMeta();}
void *fn_802D6510(){
 if(!lbl_80535250) lbl_80535250=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80535250;
}
void *beGroupKeepList_getMeta(){
 if(!lbl_80535250 || !(reinterpret_cast<unsigned int *>(lbl_80535250)[0x24/4]&4)) fn_802D6624();
 return lbl_80535250;
}
}
#pragma pop
