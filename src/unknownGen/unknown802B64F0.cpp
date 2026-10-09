#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beTextureCtrlAttr_fieldInit();
void *beTextureCtrlAttr_getMeta();
void beTextureCtrlAttr_vtableRead();
void *fn_80023CF4();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igNamedObject_register();
extern char lbl_8041D36C[];
extern char lbl_804CF1B8[];
extern char lbl_80534670[];
void beTextureCtrlAttr_register();
void *beTextureCtrlAttr_getMetaCall();
}
extern "C" {
void fn_802B64F0(){
 fn_80066188((int)beTextureCtrlAttr_register);
}
void beTextureCtrlAttr_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534670,(int)igNamedObject_register,(int)fn_80023CF4,(int)beTextureCtrlAttr_getMetaCall,(int)lbl_8041D36C,16,(int)beTextureCtrlAttr_vtableRead,(int)beTextureCtrlAttr_fieldInit,0,(int)lbl_804CF1B8);
}
void *beTextureCtrlAttr_getMetaCall(){return beTextureCtrlAttr_getMeta();}
}
#pragma pop
