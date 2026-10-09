#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_80284550();
void fn_80402E28();
void fn_80403D28();
void igInfoManager_register();
void igViewerSceneInfoManager_fieldInit();
void *igViewerSceneInfoManager_getMeta();
extern char lbl_80461E58[];
extern char lbl_804F0078[];
extern char lbl_8055C788[];
void igViewerSceneInfoManager_register();
void *igViewerSceneInfoManager_getMetaCall();
}
extern "C" {
void fn_80404638(){
 fn_80066188((int)igViewerSceneInfoManager_register);
}
void igViewerSceneInfoManager_register(){
 fn_80402E28();
 fn_80066204(0,(int)lbl_8055C788,(int)igInfoManager_register,(int)fn_80284550,(int)igViewerSceneInfoManager_getMetaCall,(int)lbl_80461E58,200,(int)fn_80403D28,(int)igViewerSceneInfoManager_fieldInit,0,(int)lbl_804F0078);
}
void *igViewerSceneInfoManager_getMetaCall(){return igViewerSceneInfoManager_getMeta();}
}
#pragma pop
