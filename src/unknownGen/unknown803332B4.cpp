#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWStatusCtrlEquip_getMeta();
void beNDMWStatusCtrlEquip_vtableRead();
void beNDMWWindowCtrl_register();
void *fn_8006546C(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8032B8A4();
void fn_80333760();
extern char lbl_80453C74[];
extern char lbl_804E1FC8[];
extern char lbl_804E1FCC[];
extern char lbl_804E1FD0[];
extern char lbl_804E1FD4[];
extern void *lbl_80535F68;
extern void *lbl_80535F70;
void beNDMWStatusCtrlEquip_register();
void *beNDMWStatusCtrlEquip_getMetaCall();
void beNDMWStatusCtrlEquip_fieldInit();
}
extern "C" {
void fn_803332B4(){
 fn_80066188((int)beNDMWStatusCtrlEquip_register);
}
void beNDMWStatusCtrlEquip_register(){
 fn_803250AC();
 fn_80066204(0,(int)&lbl_80535F68,(int)beNDMWWindowCtrl_register,(int)fn_8032B8A4,(int)beNDMWStatusCtrlEquip_getMetaCall,(int)lbl_80453C74,88,(int)beNDMWStatusCtrlEquip_vtableRead,(int)beNDMWStatusCtrlEquip_fieldInit,0,0);
}
void *beNDMWStatusCtrlEquip_getMetaCall(){return beNDMWStatusCtrlEquip_getMeta();}
void beNDMWStatusCtrlEquip_fieldInit(){
 void *meta=lbl_80535F68;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804E1FC8,0x1);
 fn_800659C0(meta,lbl_804E1FCC,lbl_804E1FD0,lbl_804E1FD4,field);
}
void *fn_803333F0(void *object){
 fn_80333760();
 return fn_8006546C(lbl_80535F70,object);
}
void *beNDMWStatusCtrlD0_getMeta(){
 if(!lbl_80535F70 || !(reinterpret_cast<unsigned int *>(lbl_80535F70)[0x24/4]&4)) fn_80333760();
 return lbl_80535F70;
}
}
#pragma pop
