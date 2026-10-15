#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beSvPlatBaseData_fieldInit();
void *beSvPlatBaseData_getMeta();
void beSvPlatBaseData_vtableRead();
void *fn_800237D0();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igObject_register();
extern char beSvPlatBaseData_className[];
extern char lbl_804CFD84[];
extern char beSvPlatBaseData_meta[];
void beSvPlatBaseData_register();
void *beSvPlatBaseData_getMetaCall();
}
extern "C" {
void beSvPlatBaseData_registerNow(){
 meta_registerNow((int)beSvPlatBaseData_register);
}
void beSvPlatBaseData_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beSvPlatBaseData_meta,(int)igObject_register,(int)fn_800237D0,(int)beSvPlatBaseData_getMetaCall,(int)beSvPlatBaseData_className,24,(int)beSvPlatBaseData_vtableRead,(int)beSvPlatBaseData_fieldInit,0,(int)lbl_804CFD84);
}
void *beSvPlatBaseData_getMetaCall(){return beSvPlatBaseData_getMeta();}
}
#pragma pop
