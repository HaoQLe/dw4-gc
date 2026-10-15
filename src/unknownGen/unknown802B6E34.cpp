#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beTextureCtrlWork_fieldInit();
void *beTextureCtrlWork_getMeta();
void beTextureCtrlWork_vtableRead();
void *fn_800237D0();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igObject_register();
extern char beTextureCtrlWork_className[];
extern char lbl_804CF210[];
extern char beTextureCtrlWork_meta[];
void beTextureCtrlWork_register();
void *beTextureCtrlWork_getMetaCall();
}
extern "C" {
void beTextureCtrlWork_registerNow(){
 meta_registerNow((int)beTextureCtrlWork_register);
}
void beTextureCtrlWork_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beTextureCtrlWork_meta,(int)igObject_register,(int)fn_800237D0,(int)beTextureCtrlWork_getMetaCall,(int)beTextureCtrlWork_className,16,(int)beTextureCtrlWork_vtableRead,(int)beTextureCtrlWork_fieldInit,0,(int)lbl_804CF210);
}
void *beTextureCtrlWork_getMetaCall(){return beTextureCtrlWork_getMeta();}
}
#pragma pop
