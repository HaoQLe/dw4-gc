#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void beNDMWMcSlotGC_registerNow();
extern char lbl_804E38D4[];
extern char lbl_804E38D8[];
extern char lbl_804E38DC[];
extern char lbl_804E38E0[];
extern void *beNDMWMcSlotXbox_meta;
extern void *beNDMWMcSlotGC_meta;
}
extern "C" {
void beNDMWMcSlotXbox_fieldInit(){
 void *meta=beNDMWMcSlotXbox_meta;
 void *field=meta_fieldCount(meta);
 meta_appendFields(meta,lbl_804E38D4,0x1);
 meta_setupFields(meta,lbl_804E38D8,lbl_804E38DC,lbl_804E38E0,field);
}
void *beNDMWMcSlotGC_create(void *object){
 beNDMWMcSlotGC_registerNow();
 return meta_createInstance(beNDMWMcSlotGC_meta,object);
}
void *beNDMWMcSlotGC_getMeta(){
 if(!beNDMWMcSlotGC_meta || !(reinterpret_cast<unsigned int *>(beNDMWMcSlotGC_meta)[0x24/4]&4)) beNDMWMcSlotGC_registerNow();
 return beNDMWMcSlotGC_meta;
}
}
#pragma pop
