#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoManager_register();
void *beBkColor_getMeta();
void beBkColor_vtableRead();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B381C();
void fn_802E3074();
extern char lbl_80420CE4[];
extern char lbl_804D2CA8[];
extern char lbl_804D2CAC[];
extern char lbl_804D2CB0[];
extern char lbl_804D2CB4[];
extern void *lbl_805356A0;
extern void *lbl_805356A8;
extern void *lbl_805621F4;
void beBkColor_register();
void *beBkColor_getMetaCall();
void beBkColor_fieldInit();
}
extern "C" {
void fn_802E2E24(){
 fn_80066188((int)beBkColor_register);
}
void beBkColor_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)&lbl_805356A0,(int)beBaseInfoManager_register,(int)fn_802B381C,(int)beBkColor_getMetaCall,(int)lbl_80420CE4,36,(int)beBkColor_vtableRead,(int)beBkColor_fieldInit,0,0);
}
void *beBkColor_getMetaCall(){return beBkColor_getMeta();}
void beBkColor_fieldInit(){
 void *meta=lbl_805356A0;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D2CA8,0x1);
 fn_800659C0(meta,lbl_804D2CAC,lbl_804D2CB0,lbl_804D2CB4,field);
}
void *fn_802E2F60(){
 if(!lbl_805356A8) lbl_805356A8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805356A8;
}
void *beBaseInfoRamList_getMeta(){
 if(!lbl_805356A8 || !(reinterpret_cast<unsigned int *>(lbl_805356A8)[0x24/4]&4)) fn_802E3074();
 return lbl_805356A8;
}
}
#pragma pop
