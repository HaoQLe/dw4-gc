#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beCriHandleList_getMeta();
void beCriHandleList_vtableRead();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beCriHandle_arkRegister();
void igObjectList_register();
extern char beCriHandleList_className[];
extern char beCriHandleList_dependencies[];
extern char beCriHandleList_meta[];
extern void *beCriHandle_meta;
extern void *lbl_805621F4;
void beCriHandleList_register();
void *beCriHandleList_getMetaCall();
}
extern "C" {
void beCriHandleList_arkRegister(){
 meta_registerNow((int)beCriHandleList_register);
}
void beCriHandleList_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beCriHandleList_meta,(int)igObjectList_register,(int)fn_80024180,(int)beCriHandleList_getMetaCall,(int)beCriHandleList_className,20,(int)beCriHandleList_vtableRead,0,0,(int)beCriHandleList_dependencies);
}
void *beCriHandleList_getMetaCall(){return beCriHandleList_getMeta();}
void *beCriHandle_create(void *object){
 beCriHandle_arkRegister();
 return meta_createInstance(beCriHandle_meta,object);
}
void *beCriHandle_metaObject(){
 if(!beCriHandle_meta) beCriHandle_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beCriHandle_meta;
}
void *beCriHandle_getMeta(){
 if(!beCriHandle_meta || !(reinterpret_cast<unsigned int *>(beCriHandle_meta)[0x24/4]&4)) beCriHandle_arkRegister();
 return beCriHandle_meta;
}
}
#pragma pop
