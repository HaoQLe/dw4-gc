#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beWaterMove_fieldInit();
void *beWaterMove_getMeta();
void beWaterMove_vtableRead();
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igObject_register();
extern char lbl_8041CC68[];
extern char lbl_804CF024[];
extern char lbl_805345EC[];
void beWaterMove_register();
void *beWaterMove_getMetaCall();
}
extern "C" {
void fn_802B4674(){
 fn_80066188((int)beWaterMove_register);
}
void beWaterMove_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805345EC,(int)igObject_register,(int)fn_800237D0,(int)beWaterMove_getMetaCall,(int)lbl_8041CC68,40,(int)beWaterMove_vtableRead,(int)beWaterMove_fieldInit,0,(int)lbl_804CF024);
}
void *beWaterMove_getMetaCall(){return beWaterMove_getMeta();}
}
#pragma pop
