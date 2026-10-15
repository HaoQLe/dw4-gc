#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beSaveMemoryObj_arkRegister();
void igObject_register();
extern char beSvSlotData_className[];
extern char beSvSlotData_fieldTypes[];
extern char beSvSlotData_fieldNames[];
extern char beSvSlotData_fieldStorage[];
extern char beSvSlotData_fieldOffsets[];
extern void *beSvSlotData_meta;
extern void *beSaveMemoryObj_meta;
extern void *lbl_805621F4;
void *beSvSlotData_getMeta();
void beSvSlotData_arkRegister();
void beSvSlotData_register();
void *beSvSlotData_getMetaCall();
void beSvSlotData_fieldInit();
}
extern "C" {
void *beSvSlotData_getMeta(){
 if(!beSvSlotData_meta || !(reinterpret_cast<unsigned int *>(beSvSlotData_meta)[0x24/4]&4)) beSvSlotData_arkRegister();
 return beSvSlotData_meta;
}
void beSvSlotData_arkRegister(){
 meta_registerNow((int)beSvSlotData_register);
}
void beSvSlotData_register(){
 fn_802B1AC8();
 meta_registerClass(1,(int)&beSvSlotData_meta,(int)igObject_register,(int)fn_800237D0,(int)beSvSlotData_getMetaCall,(int)beSvSlotData_className,24,0,(int)beSvSlotData_fieldInit,0,0);
}
void *beSvSlotData_getMetaCall(){return beSvSlotData_getMeta();}
void beSvSlotData_fieldInit(){
 void *meta=beSvSlotData_meta;
 void *field=meta_fieldCount(meta);
 meta_appendFields(meta,beSvSlotData_fieldTypes,0x5);
 meta_setupFields(meta,beSvSlotData_fieldNames,beSvSlotData_fieldStorage,beSvSlotData_fieldOffsets,field);
}
void *beSaveMemoryObj_create(void *object){
 beSaveMemoryObj_arkRegister();
 return meta_createInstance(beSaveMemoryObj_meta,object);
}
void *beSaveMemoryObj_metaObject(){
 if(!beSaveMemoryObj_meta) beSaveMemoryObj_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beSaveMemoryObj_meta;
}
void *beSaveMemoryObj_getMeta(){
 if(!beSaveMemoryObj_meta || !(reinterpret_cast<unsigned int *>(beSaveMemoryObj_meta)[0x24/4]&4)) beSaveMemoryObj_arkRegister();
 return beSaveMemoryObj_meta;
}
}
#pragma pop
