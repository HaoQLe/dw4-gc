#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_800CAEE0();
void *fn_800CB078();
void *igControllerManager_fieldInit();
void igEventProducer_register();
extern char igControllerManager_className[];
extern char igControllerManager_dependencies[8];
extern void *lbl_805621F4;
extern void *igControllerManager_meta;
void *igControllerManager_getMeta();
void igControllerManager_arkRegister();
void igControllerManager_register();
void *igControllerManager_getMetaCall();
}
extern "C" {
void *fn_800CB8B8(){
 if(!igControllerManager_meta) igControllerManager_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igControllerManager_meta;
}
}
#pragma pop
