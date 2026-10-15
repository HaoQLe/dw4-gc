#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWMcSlotGC_getMeta();
void beNDMWMcSlotGC_vtableRead();
void beNDMWMcSlot_register();
void *meta_createInstance(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8033FD10();
void beNDMWMcSlotPS2_registerNow();
extern char beNDMWMcSlotGC_className[];
extern char lbl_804E38E4[];
extern char lbl_804E38EC[];
extern char lbl_804E38F4[];
extern char lbl_804E38FC[];
extern void *beNDMWMcSlotGC_meta;
extern void *beNDMWMcSlotPS2_meta;
void beNDMWMcSlotGC_register();
void *beNDMWMcSlotGC_getMetaCall();
void beNDMWMcSlotGC_fieldInit();
}
extern "C" {
void beNDMWMcSlotGC_registerNow(){
 meta_registerNow((int)beNDMWMcSlotGC_register);
}
void beNDMWMcSlotGC_register(){
 fn_803250AC();
 meta_registerClass(0,(int)&beNDMWMcSlotGC_meta,(int)beNDMWMcSlot_register,(int)fn_8033FD10,(int)beNDMWMcSlotGC_getMetaCall,(int)beNDMWMcSlotGC_className,32,(int)beNDMWMcSlotGC_vtableRead,(int)beNDMWMcSlotGC_fieldInit,0,0);
}
void *beNDMWMcSlotGC_getMetaCall(){return beNDMWMcSlotGC_getMeta();}
void beNDMWMcSlotGC_fieldInit(){
 void *meta=beNDMWMcSlotGC_meta;
 void *field=meta_fieldCount(meta);
 meta_appendFields(meta,lbl_804E38E4,0x2);
 meta_setupFields(meta,lbl_804E38EC,lbl_804E38F4,lbl_804E38FC,field);
}
void *beNDMWMcSlotPS2_create(void *object){
 beNDMWMcSlotPS2_registerNow();
 return meta_createInstance(beNDMWMcSlotPS2_meta,object);
}
void *beNDMWMcSlotPS2_getMeta(){
 if(!beNDMWMcSlotPS2_meta || !(reinterpret_cast<unsigned int *>(beNDMWMcSlotPS2_meta)[0x24/4]&4)) beNDMWMcSlotPS2_registerNow();
 return beNDMWMcSlotPS2_meta;
}
}
#pragma pop
