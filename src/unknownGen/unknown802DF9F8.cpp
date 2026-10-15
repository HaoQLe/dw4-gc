#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beCriSndf_getMeta();
void beCriSndf_vtableRead();
void *fn_800237D0();
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beCriAcxData_arkRegister();
void igObject_register();
extern char beCriSndf_className[];
extern char beCriSndf_fieldTypes[];
extern char beCriSndf_fieldNames[];
extern char beCriSndf_fieldStorage[];
extern char beCriSndf_fieldOffsets[];
extern void *beCriSndf_meta;
extern void *beCriAcxData_meta;
void beCriSndf_register();
void *beCriSndf_getMetaCall();
void beCriSndf_fieldInit();
}
extern "C" {
void beCriSndf_arkRegister(){
 meta_registerNow((int)beCriSndf_register);
}
void beCriSndf_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)&beCriSndf_meta,(int)igObject_register,(int)fn_800237D0,(int)beCriSndf_getMetaCall,(int)beCriSndf_className,32,(int)beCriSndf_vtableRead,(int)beCriSndf_fieldInit,0,0);
}
void *beCriSndf_getMetaCall(){return beCriSndf_getMeta();}
void beCriSndf_fieldInit(){
 void *meta=beCriSndf_meta;
 void *field=meta_fieldCount(meta);
 meta_appendFields(meta,beCriSndf_fieldTypes,0x3);
 meta_setupFields(meta,beCriSndf_fieldNames,beCriSndf_fieldStorage,beCriSndf_fieldOffsets,field);
}
void *beCriAcxData_getMeta(){
 if(!beCriAcxData_meta || !(reinterpret_cast<unsigned int *>(beCriAcxData_meta)[0x24/4]&4)) beCriAcxData_arkRegister();
 return beCriAcxData_meta;
}
}
#pragma pop
