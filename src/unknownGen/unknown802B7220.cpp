#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beTargetObj_fieldInit();
void *beTargetObj_getMeta();
void beTargetObj_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_80284550();
void fn_802B1AC8();
void igInfoManager_register();
extern char lbl_8041D404[];
extern char lbl_804CF238[];
extern char lbl_80534698[];
void beTargetObj_register();
void *beTargetObj_getMetaCall();
}
extern "C" {
void fn_802B7220(){
 fn_80066188((int)beTargetObj_register);
}
void beTargetObj_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534698,(int)igInfoManager_register,(int)fn_80284550,(int)beTargetObj_getMetaCall,(int)lbl_8041D404,28,(int)beTargetObj_vtableRead,(int)beTargetObj_fieldInit,0,(int)lbl_804CF238);
}
void *beTargetObj_getMetaCall(){return beTargetObj_getMeta();}
}
#pragma pop
