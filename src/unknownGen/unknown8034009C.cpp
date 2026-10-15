#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWMcSlotPS2_getMeta();
void beNDMWMcSlotPS2_vtableRead();
void *fn_800237D0();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8033FD10();
void beNDMWLoadSlotPlayerList_registerNow();
void igObject_register();
extern char beNDMWMcSlotPS2_className[];
extern char beNDMWMcSlot_className[];
extern char lbl_804E3904[];
extern char lbl_804E3918[];
extern char lbl_804E392C[];
extern char lbl_804E3940[];
extern char beNDMWMcSlotPS2_meta[];
extern void *beNDMWMcSlot_meta;
extern void *beNDMWLoadSlotPlayerList_meta;
extern void *lbl_805621F4;
void beNDMWMcSlotPS2_register();
void *beNDMWMcSlotPS2_getMetaCall();
void *beNDMWMcSlot_getMeta();
void beNDMWMcSlot_registerNow();
void beNDMWMcSlot_register();
void *beNDMWMcSlot_getMetaCall();
void beNDMWMcSlot_fieldInit();
}
extern "C" {
void beNDMWMcSlotPS2_registerNow(){
 meta_registerNow((int)beNDMWMcSlotPS2_register);
}
void beNDMWMcSlotPS2_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWMcSlotPS2_meta,(int)beNDMWMcSlot_register,(int)fn_8033FD10,(int)beNDMWMcSlotPS2_getMetaCall,(int)beNDMWMcSlotPS2_className,24,(int)beNDMWMcSlotPS2_vtableRead,0,0,0);
}
void *beNDMWMcSlotPS2_getMetaCall(){return beNDMWMcSlotPS2_getMeta();}
void *beNDMWMcSlot_getMeta(){
 if(!beNDMWMcSlot_meta || !(reinterpret_cast<unsigned int *>(beNDMWMcSlot_meta)[0x24/4]&4)) beNDMWMcSlot_registerNow();
 return beNDMWMcSlot_meta;
}
void beNDMWMcSlot_registerNow(){
 meta_registerNow((int)beNDMWMcSlot_register);
}
void beNDMWMcSlot_register(){
 fn_803250AC();
 meta_registerClass(1,(int)&beNDMWMcSlot_meta,(int)igObject_register,(int)fn_800237D0,(int)beNDMWMcSlot_getMetaCall,(int)beNDMWMcSlot_className,24,0,(int)beNDMWMcSlot_fieldInit,0,0);
}
void *beNDMWMcSlot_getMetaCall(){return beNDMWMcSlot_getMeta();}
void beNDMWMcSlot_fieldInit(){
 void *meta=beNDMWMcSlot_meta;
 void *field=meta_fieldCount(meta);
 meta_appendFields(meta,lbl_804E3904,0x5);
 meta_setupFields(meta,lbl_804E3918,lbl_804E392C,lbl_804E3940,field);
}
void *beNDMWLoadSlotPlayerList_metaObject(){
 if(!beNDMWLoadSlotPlayerList_meta) beNDMWLoadSlotPlayerList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beNDMWLoadSlotPlayerList_meta;
}
void *beNDMWLoadSlotPlayerList_getMeta(){
 if(!beNDMWLoadSlotPlayerList_meta || !(reinterpret_cast<unsigned int *>(beNDMWLoadSlotPlayerList_meta)[0x24/4]&4)) beNDMWLoadSlotPlayerList_registerNow();
 return beNDMWLoadSlotPlayerList_meta;
}
}
#pragma pop
