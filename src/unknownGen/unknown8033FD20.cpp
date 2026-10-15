#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void beNDMWMcSlotGC_arkRegister();
extern char beNDMWMcSlotXbox_fieldTypes[];
extern char beNDMWMcSlotXbox_fieldNames[];
extern char beNDMWMcSlotXbox_fieldStorage[];
extern char beNDMWMcSlotXbox_fieldOffsets[];
extern void *beNDMWMcSlotXbox_meta;
extern void *beNDMWMcSlotGC_meta;
}
extern "C" {
void beNDMWMcSlotXbox_fieldInit(){
 void *meta=beNDMWMcSlotXbox_meta;
 void *field=meta_fieldCount(meta);
 meta_appendFields(meta,beNDMWMcSlotXbox_fieldTypes,0x1);
 meta_setupFields(meta,beNDMWMcSlotXbox_fieldNames,beNDMWMcSlotXbox_fieldStorage,beNDMWMcSlotXbox_fieldOffsets,field);
}
void *beNDMWMcSlotGC_create(void *object){
 beNDMWMcSlotGC_arkRegister();
 return meta_createInstance(beNDMWMcSlotGC_meta,object);
}
void *beNDMWMcSlotGC_getMeta(){
 if(!beNDMWMcSlotGC_meta || !(reinterpret_cast<unsigned int *>(beNDMWMcSlotGC_meta)[0x24/4]&4)) beNDMWMcSlotGC_arkRegister();
 return beNDMWMcSlotGC_meta;
}
}
#pragma pop
