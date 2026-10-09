#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWMcSlotGC_getMeta();
void beNDMWMcSlotGC_vtableRead();
void beNDMWMcSlot_register();
void *fn_8006546C(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8033FD10();
void fn_8034009C();
extern char lbl_80454E34[];
extern char lbl_804E38E4[];
extern char lbl_804E38EC[];
extern char lbl_804E38F4[];
extern char lbl_804E38FC[];
extern void *lbl_805365F4;
extern void *lbl_80536600;
void beNDMWMcSlotGC_register();
void *beNDMWMcSlotGC_getMetaCall();
void beNDMWMcSlotGC_fieldInit();
}
extern "C" {
void fn_8033FE80(){
 fn_80066188((int)beNDMWMcSlotGC_register);
}
void beNDMWMcSlotGC_register(){
 fn_803250AC();
 fn_80066204(0,(int)&lbl_805365F4,(int)beNDMWMcSlot_register,(int)fn_8033FD10,(int)beNDMWMcSlotGC_getMetaCall,(int)lbl_80454E34,32,(int)beNDMWMcSlotGC_vtableRead,(int)beNDMWMcSlotGC_fieldInit,0,0);
}
void *beNDMWMcSlotGC_getMetaCall(){return beNDMWMcSlotGC_getMeta();}
void beNDMWMcSlotGC_fieldInit(){
 void *meta=lbl_805365F4;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804E38E4,0x2);
 fn_800659C0(meta,lbl_804E38EC,lbl_804E38F4,lbl_804E38FC,field);
}
void *fn_8033FFBC(void *object){
 fn_8034009C();
 return fn_8006546C(lbl_80536600,object);
}
void *beNDMWMcSlotPS2_getMeta(){
 if(!lbl_80536600 || !(reinterpret_cast<unsigned int *>(lbl_80536600)[0x24/4]&4)) fn_8034009C();
 return lbl_80536600;
}
}
#pragma pop
