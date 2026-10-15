#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beWaterMoveData_fieldInit();
void *beWaterMoveData_getMeta();
void beWaterMoveData_vtableRead();
void *fn_800237D0();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igObject_register();
extern char beWaterMoveData_className[];
extern char lbl_804CF084[];
extern char beWaterMoveData_meta[];
void beWaterMoveData_register();
void *beWaterMoveData_getMetaCall();
}
extern "C" {
void beWaterMoveData_registerNow(){
 meta_registerNow((int)beWaterMoveData_register);
}
void beWaterMoveData_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beWaterMoveData_meta,(int)igObject_register,(int)fn_800237D0,(int)beWaterMoveData_getMetaCall,(int)beWaterMoveData_className,24,(int)beWaterMoveData_vtableRead,(int)beWaterMoveData_fieldInit,0,(int)lbl_804CF084);
}
void *beWaterMoveData_getMetaCall(){return beWaterMoveData_getMeta();}
}
#pragma pop
