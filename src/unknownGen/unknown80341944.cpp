#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beLoadIntf2ComMdlData_getMeta();
void beLoadIntf2ComMdlData_vtableRead();
void *fn_800237D0();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void beNDMWLoadIntf2TextOrder_arkRegister();
void igObject_register();
extern char beLoadIntf2ComMdlData_className[];
extern char beLoadIntf2ComMdlData_fieldTypes[];
extern char beLoadIntf2ComMdlData_fieldNames[];
extern char beLoadIntf2ComMdlData_fieldStorage[];
extern char beLoadIntf2ComMdlData_fieldOffsets[];
extern void *beLoadIntf2ComMdlData_meta;
extern void *beNDMWLoadIntf2TextOrder_meta;
extern void *lbl_805621F4;
void beLoadIntf2ComMdlData_register();
void *beLoadIntf2ComMdlData_getMetaCall();
void beLoadIntf2ComMdlData_fieldInit();
}
extern "C" {
void *beNDMWLoadIntf2TextOrder_create(void *object){
 beNDMWLoadIntf2TextOrder_arkRegister();
 return meta_createInstance(beNDMWLoadIntf2TextOrder_meta,object);
}
void *beNDMWLoadIntf2TextOrder_metaObject(){
 if(!beNDMWLoadIntf2TextOrder_meta) beNDMWLoadIntf2TextOrder_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beNDMWLoadIntf2TextOrder_meta;
}
void *beNDMWLoadIntf2TextOrder_getMeta(){
 if(!beNDMWLoadIntf2TextOrder_meta || !(reinterpret_cast<unsigned int *>(beNDMWLoadIntf2TextOrder_meta)[0x24/4]&4)) beNDMWLoadIntf2TextOrder_arkRegister();
 return beNDMWLoadIntf2TextOrder_meta;
}
}
#pragma pop
