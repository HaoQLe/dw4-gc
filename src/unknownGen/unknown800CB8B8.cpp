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
void *igControllerManager_getMeta(){
 if(!igControllerManager_meta || !(reinterpret_cast<unsigned int *>(igControllerManager_meta)[0x24/4]&4)) igControllerManager_arkRegister();
 return igControllerManager_meta;
}
void igControllerManager_arkRegister(){
 meta_registerNow((int)igControllerManager_register);
}
void igControllerManager_register(){
 fn_800CAEE0();
 meta_registerClass(1,(int)&igControllerManager_meta,(int)igEventProducer_register,(int)fn_800CB078,(int)igControllerManager_getMetaCall,(int)igControllerManager_className,12,0,(int)igControllerManager_fieldInit,0,(int)igControllerManager_dependencies);
}
void *igControllerManager_getMetaCall(){return igControllerManager_getMeta();}
}
#pragma pop
