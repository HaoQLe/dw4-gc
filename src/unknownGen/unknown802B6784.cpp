#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beTextureCtrlData_fieldInit();
void *beTextureCtrlData_getMeta();
void beTextureCtrlData_vtableRead();
void *fn_80023CF4();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igNamedObject_register();
extern char beTextureCtrlData_className[];
extern char lbl_804CF1D0[];
extern char beTextureCtrlData_meta[];
void beTextureCtrlData_register();
void *beTextureCtrlData_getMetaCall();
}
extern "C" {
void beTextureCtrlData_registerNow(){
 meta_registerNow((int)beTextureCtrlData_register);
}
void beTextureCtrlData_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beTextureCtrlData_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)beTextureCtrlData_getMetaCall,(int)beTextureCtrlData_className,16,(int)beTextureCtrlData_vtableRead,(int)beTextureCtrlData_fieldInit,0,(int)lbl_804CF1D0);
}
void *beTextureCtrlData_getMetaCall(){return beTextureCtrlData_getMeta();}
}
#pragma pop
