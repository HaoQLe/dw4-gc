#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoManager_register();
void *beDBManager_getMeta();
void beDBManager_vtableRead();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B381C();
void fn_802DE77C();
extern char lbl_80420770[];
extern char lbl_805354C4[];
extern void *lbl_805354C8;
extern void *lbl_805621F4;
void beDBManager_register();
void *beDBManager_getMetaCall();
}
extern "C" {
void fn_802DE5E0(){
 fn_80066188((int)beDBManager_register);
}
void beDBManager_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805354C4,(int)beBaseInfoManager_register,(int)fn_802B381C,(int)beDBManager_getMetaCall,(int)lbl_80420770,32,(int)beDBManager_vtableRead,0,0,0);
}
void *beDBManager_getMetaCall(){return beDBManager_getMeta();}
void *fn_802DE694(){
 if(!lbl_805354C8) lbl_805354C8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805354C8;
}
void *beCriVolume_getMeta(){
 if(!lbl_805354C8 || !(reinterpret_cast<unsigned int *>(lbl_805354C8)[0x24/4]&4)) fn_802DE77C();
 return lbl_805354C8;
}
}
#pragma pop
