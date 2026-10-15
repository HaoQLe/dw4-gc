#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_80284550();
void fn_80402E28();
void fn_80403D28();
void igInfoManager_register();
void igViewerSceneInfoManager_fieldInit();
void *igViewerSceneInfoManager_getMeta();
extern char igViewerSceneInfoManager_className[];
extern char igViewerSceneInfoManager_dependencies[];
extern char igViewerSceneInfoManager_meta[];
void igViewerSceneInfoManager_register();
void *igViewerSceneInfoManager_getMetaCall();
}
extern "C" {
void igViewerSceneInfoManager_arkRegister(){
 meta_registerNow((int)igViewerSceneInfoManager_register);
}
void igViewerSceneInfoManager_register(){
 fn_80402E28();
 meta_registerClass(0,(int)igViewerSceneInfoManager_meta,(int)igInfoManager_register,(int)fn_80284550,(int)igViewerSceneInfoManager_getMetaCall,(int)igViewerSceneInfoManager_className,200,(int)fn_80403D28,(int)igViewerSceneInfoManager_fieldInit,0,(int)igViewerSceneInfoManager_dependencies);
}
void *igViewerSceneInfoManager_getMetaCall(){return igViewerSceneInfoManager_getMeta();}
}
#pragma pop
