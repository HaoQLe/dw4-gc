#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beSaveApi_register();
void *beSvGetFreeSizeApi_getMeta();
void beSvGetFreeSizeApi_vtableRead();
void *meta_createInstance(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802BD764();
void beSvWriteMediaApi_arkRegister();
extern char beSvGetFreeSizeApi_className[];
extern char beSvGetFreeSizeApi_fieldTypes[];
extern char beSvGetFreeSizeApi_fieldNames[];
extern char beSvGetFreeSizeApi_fieldStorage[];
extern char beSvGetFreeSizeApi_fieldOffsets[];
extern void *beSvGetFreeSizeApi_meta;
extern void *beSvWriteMediaApi_meta;
void beSvGetFreeSizeApi_register();
void *beSvGetFreeSizeApi_getMetaCall();
void beSvGetFreeSizeApi_fieldInit();
}
extern "C" {
void beSvGetFreeSizeApi_arkRegister(){
 meta_registerNow((int)beSvGetFreeSizeApi_register);
}
void beSvGetFreeSizeApi_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)&beSvGetFreeSizeApi_meta,(int)beSaveApi_register,(int)fn_802BD764,(int)beSvGetFreeSizeApi_getMetaCall,(int)beSvGetFreeSizeApi_className,224,(int)beSvGetFreeSizeApi_vtableRead,(int)beSvGetFreeSizeApi_fieldInit,0,0);
}
void *beSvGetFreeSizeApi_getMetaCall(){return beSvGetFreeSizeApi_getMeta();}
void beSvGetFreeSizeApi_fieldInit(){
 void *meta=beSvGetFreeSizeApi_meta;
 void *field=meta_fieldCount(meta);
 meta_appendFields(meta,beSvGetFreeSizeApi_fieldTypes,0x3);
 meta_setupFields(meta,beSvGetFreeSizeApi_fieldNames,beSvGetFreeSizeApi_fieldStorage,beSvGetFreeSizeApi_fieldOffsets,field);
}
void *beSvWriteMediaApi_create(void *object){
 beSvWriteMediaApi_arkRegister();
 return meta_createInstance(beSvWriteMediaApi_meta,object);
}
void *beSvWriteMediaApi_getMeta(){
 if(!beSvWriteMediaApi_meta || !(reinterpret_cast<unsigned int *>(beSvWriteMediaApi_meta)[0x24/4]&4)) beSvWriteMediaApi_arkRegister();
 return beSvWriteMediaApi_meta;
}
}
#pragma pop
