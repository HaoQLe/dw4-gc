#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBinDataObject_register();
void *beCriAcxData_getMeta();
void beCriAcxData_vtableRead();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802DEA84();
void beCri_arkRegister();
extern char beCriAcxData_className[];
extern char beCriAcxData_meta[];
extern void *beCri_meta;
extern void *lbl_805621F4;
void beCriAcxData_register();
void *beCriAcxData_getMetaCall();
}
extern "C" {
void beCriAcxData_arkRegister(){
 meta_registerNow((int)beCriAcxData_register);
}
void beCriAcxData_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beCriAcxData_meta,(int)beBinDataObject_register,(int)fn_802DEA84,(int)beCriAcxData_getMetaCall,(int)beCriAcxData_className,24,(int)beCriAcxData_vtableRead,0,0,0);
}
void *beCriAcxData_getMetaCall(){return beCriAcxData_getMeta();}
void *beCri_create(void *object){
 beCri_arkRegister();
 return meta_createInstance(beCri_meta,object);
}
void *beCri_metaObject(){
 if(!beCri_meta) beCri_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beCri_meta;
}
void *beCri_getMeta(){
 if(!beCri_meta || !(reinterpret_cast<unsigned int *>(beCri_meta)[0x24/4]&4)) beCri_arkRegister();
 return beCri_meta;
}
}
#pragma pop
