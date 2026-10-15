#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beFileListInfo_fieldInit();
void *beFileListInfo_getMeta();
void beFileListInfo_vtableRead();
void *fn_800284EC();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igInfo_register();
extern char beFileListInfo_className[];
extern char beFileListInfo_dependencies[];
extern char beFileListInfo_meta[];
void beFileListInfo_register();
void *beFileListInfo_getMetaCall();
}
extern "C" {
void beFileListInfo_arkRegister(){
 meta_registerNow((int)beFileListInfo_register);
}
void beFileListInfo_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beFileListInfo_meta,(int)igInfo_register,(int)fn_800284EC,(int)beFileListInfo_getMetaCall,(int)beFileListInfo_className,28,(int)beFileListInfo_vtableRead,(int)beFileListInfo_fieldInit,0,(int)beFileListInfo_dependencies);
}
void *beFileListInfo_getMetaCall(){return beFileListInfo_getMeta();}
}
#pragma pop
