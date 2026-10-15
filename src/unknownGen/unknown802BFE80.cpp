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
void beSaveMemoryObj_registerNow();
void igObject_register();
extern char beSvSlotData_className[];
extern char lbl_804CFE14[];
extern char lbl_804CFE28[];
extern char lbl_804CFE3C[];
extern char lbl_804CFE50[];
extern void *beSvSlotData_meta;
extern void *beSaveMemoryObj_meta;
extern void *lbl_805621F4;
void *beSvSlotData_getMeta();
void beSvSlotData_registerNow();
void beSvSlotData_register();
void *beSvSlotData_getMetaCall();
void beSvSlotData_fieldInit();
}
extern "C" {
void *beSvSlotData_getMeta(){
 if(!beSvSlotData_meta || !(reinterpret_cast<unsigned int *>(beSvSlotData_meta)[0x24/4]&4)) beSvSlotData_registerNow();
 return beSvSlotData_meta;
}
void beSvSlotData_registerNow(){
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
 meta_appendFields(meta,lbl_804CFE14,0x5);
 meta_setupFields(meta,lbl_804CFE28,lbl_804CFE3C,lbl_804CFE50,field);
}
void *beSaveMemoryObj_create(void *object){
 beSaveMemoryObj_registerNow();
 return meta_createInstance(beSaveMemoryObj_meta,object);
}
void *beSaveMemoryObj_metaObject(){
 if(!beSaveMemoryObj_meta) beSaveMemoryObj_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beSaveMemoryObj_meta;
}
void *beSaveMemoryObj_getMeta(){
 if(!beSaveMemoryObj_meta || !(reinterpret_cast<unsigned int *>(beSaveMemoryObj_meta)[0x24/4]&4)) beSaveMemoryObj_registerNow();
 return beSaveMemoryObj_meta;
}
}
#pragma pop
