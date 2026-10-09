#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beTextureCtrlData_fieldInit();
void *beTextureCtrlData_getMeta();
void beTextureCtrlData_vtableRead();
void *fn_80023CF4();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igNamedObject_register();
extern char lbl_8041D38C[];
extern char lbl_804CF1D0[];
extern char lbl_80534678[];
void beTextureCtrlData_register();
void *beTextureCtrlData_getMetaCall();
}
extern "C" {
void fn_802B6784(){
 fn_80066188((int)beTextureCtrlData_register);
}
void beTextureCtrlData_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534678,(int)igNamedObject_register,(int)fn_80023CF4,(int)beTextureCtrlData_getMetaCall,(int)lbl_8041D38C,16,(int)beTextureCtrlData_vtableRead,(int)beTextureCtrlData_fieldInit,0,(int)lbl_804CF1D0);
}
void *beTextureCtrlData_getMetaCall(){return beTextureCtrlData_getMeta();}
}
#pragma pop
