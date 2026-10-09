#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoManager_register();
void *beMeterCtrl_getMeta();
void beMeterCtrl_vtableRead();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B381C();
void fn_802CE1F0();
extern char lbl_8041F688[];
extern char lbl_80534FB8[];
extern void *lbl_80534FBC;
extern void *lbl_805621F4;
void beMeterCtrl_register();
void *beMeterCtrl_getMetaCall();
}
extern "C" {
void fn_802CDE10(){
 fn_80066188((int)beMeterCtrl_register);
}
void beMeterCtrl_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534FB8,(int)beBaseInfoManager_register,(int)fn_802B381C,(int)beMeterCtrl_getMetaCall,(int)lbl_8041F688,32,(int)beMeterCtrl_vtableRead,0,0,0);
}
void *beMeterCtrl_getMetaCall(){return beMeterCtrl_getMeta();}
void *fn_802CDEC4(void *object){
 fn_802CE1F0();
 return fn_8006546C(lbl_80534FBC,object);
}
void *fn_802CDF04(){
 if(!lbl_80534FBC) lbl_80534FBC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80534FBC;
}
void *beMessenger_getMeta(){
 if(!lbl_80534FBC || !(reinterpret_cast<unsigned int *>(lbl_80534FBC)[0x24/4]&4)) fn_802CE1F0();
 return lbl_80534FBC;
}
}
#pragma pop
