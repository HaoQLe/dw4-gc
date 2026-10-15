#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beCriHandle_fieldInit();
void *beCriHandle_getMeta();
void beCriHandle_vtableRead();
void *fn_80023CF4();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igNamedObject_register();
extern char beCriHandle_className[];
extern char beCriHandle_dependencies[];
extern char beCriHandle_meta[];
void beCriHandle_register();
void *beCriHandle_getMetaCall();
}
extern "C" {
void beCriHandle_arkRegister(){
 meta_registerNow((int)beCriHandle_register);
}
void beCriHandle_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beCriHandle_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)beCriHandle_getMetaCall,(int)beCriHandle_className,40,(int)beCriHandle_vtableRead,(int)beCriHandle_fieldInit,0,(int)beCriHandle_dependencies);
}
void *beCriHandle_getMetaCall(){return beCriHandle_getMeta();}
}
#pragma pop
