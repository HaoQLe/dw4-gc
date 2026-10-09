#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beOptInfo_fieldInit();
void *beOptInfo_getMeta();
void beOptInfo_vtableRead();
void *fn_800284EC();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igInfo_register();
extern char lbl_8041E6B0[];
extern char lbl_80534B24[];
void beOptInfo_register();
void *beOptInfo_getMetaCall();
}
extern "C" {
void fn_802C2AEC(){
 fn_80066188((int)beOptInfo_register);
}
void beOptInfo_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534B24,(int)igInfo_register,(int)fn_800284EC,(int)beOptInfo_getMetaCall,(int)lbl_8041E6B0,36,(int)beOptInfo_vtableRead,(int)beOptInfo_fieldInit,0,0);
}
void *beOptInfo_getMetaCall(){return beOptInfo_getMeta();}
}
#pragma pop
