#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beTextureCtrlAttr_fieldInit();
void *beTextureCtrlAttr_getMeta();
void beTextureCtrlAttr_vtableRead();
void *fn_80023CF4();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igNamedObject_register();
extern char beTextureCtrlAttr_className[];
extern char lbl_804CF1B8[];
extern char beTextureCtrlAttr_meta[];
void beTextureCtrlAttr_register();
void *beTextureCtrlAttr_getMetaCall();
}
extern "C" {
void beTextureCtrlAttr_registerNow(){
 meta_registerNow((int)beTextureCtrlAttr_register);
}
void beTextureCtrlAttr_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beTextureCtrlAttr_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)beTextureCtrlAttr_getMetaCall,(int)beTextureCtrlAttr_className,16,(int)beTextureCtrlAttr_vtableRead,(int)beTextureCtrlAttr_fieldInit,0,(int)lbl_804CF1B8);
}
void *beTextureCtrlAttr_getMetaCall(){return beTextureCtrlAttr_getMeta();}
}
#pragma pop
