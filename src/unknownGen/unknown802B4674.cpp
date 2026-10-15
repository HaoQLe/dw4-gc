#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beWaterMove_fieldInit();
void *beWaterMove_getMeta();
void beWaterMove_vtableRead();
void *fn_800237D0();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igObject_register();
extern char beWaterMove_className[];
extern char beWaterMove_dependencies[];
extern char beWaterMove_meta[];
void beWaterMove_register();
void *beWaterMove_getMetaCall();
}
extern "C" {
void beWaterMove_arkRegister(){
 meta_registerNow((int)beWaterMove_register);
}
void beWaterMove_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beWaterMove_meta,(int)igObject_register,(int)fn_800237D0,(int)beWaterMove_getMetaCall,(int)beWaterMove_className,40,(int)beWaterMove_vtableRead,(int)beWaterMove_fieldInit,0,(int)beWaterMove_dependencies);
}
void *beWaterMove_getMetaCall(){return beWaterMove_getMeta();}
}
#pragma pop
