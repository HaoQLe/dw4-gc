#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWStatusCtrlFolder_getMeta();
void beNDMWStatusCtrlFolder_vtableRead();
void beNDMWWindowCtrl_register();
void *meta_createInstance(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8032B8A4();
void beNDMWStatusSubSlot_registerNow();
extern char beNDMWStatusCtrlFolder_className[];
extern char lbl_804E1F0C[];
extern char lbl_804E1F10[];
extern char lbl_804E1F14[];
extern char lbl_804E1F18[];
extern void *beNDMWStatusCtrlFolder_meta;
extern void *beNDMWStatusSubSlot_meta;
void beNDMWStatusCtrlFolder_register();
void *beNDMWStatusCtrlFolder_getMetaCall();
void beNDMWStatusCtrlFolder_fieldInit();
}
extern "C" {
void beNDMWStatusCtrlFolder_registerNow(){
 meta_registerNow((int)beNDMWStatusCtrlFolder_register);
}
void beNDMWStatusCtrlFolder_register(){
 fn_803250AC();
 meta_registerClass(0,(int)&beNDMWStatusCtrlFolder_meta,(int)beNDMWWindowCtrl_register,(int)fn_8032B8A4,(int)beNDMWStatusCtrlFolder_getMetaCall,(int)beNDMWStatusCtrlFolder_className,88,(int)beNDMWStatusCtrlFolder_vtableRead,(int)beNDMWStatusCtrlFolder_fieldInit,0,0);
}
void *beNDMWStatusCtrlFolder_getMetaCall(){return beNDMWStatusCtrlFolder_getMeta();}
void beNDMWStatusCtrlFolder_fieldInit(){
 void *meta=beNDMWStatusCtrlFolder_meta;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804E1F0C,0x1);
 fn_800659C0(meta,lbl_804E1F10,lbl_804E1F14,lbl_804E1F18,field);
}
void *beNDMWStatusSubSlot_create(void *object){
 beNDMWStatusSubSlot_registerNow();
 return meta_createInstance(beNDMWStatusSubSlot_meta,object);
}
void *beNDMWStatusSubSlot_getMeta(){
 if(!beNDMWStatusSubSlot_meta || !(reinterpret_cast<unsigned int *>(beNDMWStatusSubSlot_meta)[0x24/4]&4)) beNDMWStatusSubSlot_registerNow();
 return beNDMWStatusSubSlot_meta;
}
}
#pragma pop
