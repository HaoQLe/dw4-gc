#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beTransformSync_fieldInit();
void *beTransformSync_getMeta();
void beTransformSync_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_801BC078();
void fn_802B1AC8();
void igTransform_register();
extern char lbl_8041D2A4[];
extern char lbl_804CF0C4[];
extern char lbl_80534628[];
void beTransformSync_register();
void *beTransformSync_getMetaCall();
}
extern "C" {
void fn_802B558C(){
 fn_80066188((int)beTransformSync_register);
}
void beTransformSync_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534628,(int)igTransform_register,(int)fn_801BC078,(int)beTransformSync_getMetaCall,(int)lbl_8041D2A4,112,(int)beTransformSync_vtableRead,(int)beTransformSync_fieldInit,0,(int)lbl_804CF0C4);
}
void *beTransformSync_getMetaCall(){return beTransformSync_getMeta();}
}
#pragma pop
