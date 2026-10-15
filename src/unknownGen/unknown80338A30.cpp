#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void beNDMWMdlPlayer_registerNow();
extern char lbl_80454368[];
extern char lbl_804E26F8[];
extern char lbl_804E2708[];
extern char lbl_804E2718[];
extern char lbl_804E2728[];
extern char lbl_804E2738[];
extern char lbl_804E2754[];
extern void *beNDMWMdlPlayer2InfoWork_meta;
extern void *lbl_80536174;
extern void *beNDMWMdlPlayer_meta;
extern void *lbl_805621F4;
}
extern "C" {
void beNDMWMdlPlayer2InfoWork_fieldInit(){
 void *meta=beNDMWMdlPlayer2InfoWork_meta;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804E26F8,0x4);
 fn_800659C0(meta,lbl_804E2708,lbl_804E2718,lbl_804E2728,field);
}
void *fn_80338AB0(){
 if(!lbl_80536174) lbl_80536174=fn_800635C8(lbl_80454368,lbl_804E2738,lbl_804E2754,0x7);
 return lbl_80536174;
}
void *beNDMWMdlPlayer_create(void *object){
 beNDMWMdlPlayer_registerNow();
 return meta_createInstance(beNDMWMdlPlayer_meta,object);
}
void *beNDMWMdlPlayer_metaObject(){
 if(!beNDMWMdlPlayer_meta) beNDMWMdlPlayer_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beNDMWMdlPlayer_meta;
}
void *beNDMWMdlPlayer_getMeta(){
 if(!beNDMWMdlPlayer_meta || !(reinterpret_cast<unsigned int *>(beNDMWMdlPlayer_meta)[0x24/4]&4)) beNDMWMdlPlayer_registerNow();
 return beNDMWMdlPlayer_meta;
}
}
#pragma pop
