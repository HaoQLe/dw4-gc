#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfo_register();
void *beBkColorInfo_getMeta();
void beBkColorInfo_vtableRead();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2E3C();
void fn_802E2E24();
extern char lbl_80420CCC[];
extern char lbl_804D2C98[];
extern char lbl_804D2C9C[];
extern char lbl_804D2CA0[];
extern char lbl_804D2CA4[];
extern void *lbl_80535698;
extern void *lbl_805356A0;
extern void *lbl_805621F4;
void beBkColorInfo_register();
void *beBkColorInfo_getMetaCall();
void beBkColorInfo_fieldInit();
}
extern "C" {
void fn_802E2AF8(){
 fn_80066188((int)beBkColorInfo_register);
}
void beBkColorInfo_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)&lbl_80535698,(int)beBaseInfo_register,(int)fn_802B2E3C,(int)beBkColorInfo_getMetaCall,(int)lbl_80420CCC,44,(int)beBkColorInfo_vtableRead,(int)beBkColorInfo_fieldInit,0,0);
}
void *beBkColorInfo_getMetaCall(){return beBkColorInfo_getMeta();}
void beBkColorInfo_fieldInit(){
 void *meta=lbl_80535698;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D2C98,0x1);
 fn_800659C0(meta,lbl_804D2C9C,lbl_804D2CA0,lbl_804D2CA4,field);
}
void *fn_802E2C34(void *object){
 fn_802E2E24();
 return fn_8006546C(lbl_805356A0,object);
}
void *fn_802E2C74(){
 if(!lbl_805356A0) lbl_805356A0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805356A0;
}
void *beBkColor_getMeta(){
 if(!lbl_805356A0 || !(reinterpret_cast<unsigned int *>(lbl_805356A0)[0x24/4]&4)) fn_802E2E24();
 return lbl_805356A0;
}
}
#pragma pop
