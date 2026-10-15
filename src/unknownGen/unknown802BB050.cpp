#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoData_register();
void beSeInfoData_fieldInit();
void *beSeInfoData_getMeta();
void beSeInfoData_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B8770();
extern char beSeInfoData_className[];
extern char beSeInfoData_dependencies[];
extern char beSeInfoData_meta[];
void beSeInfoData_register();
void *beSeInfoData_getMetaCall();
}
extern "C" {
void beSeInfoData_arkRegister(){
 meta_registerNow((int)beSeInfoData_register);
}
void beSeInfoData_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beSeInfoData_meta,(int)beBaseInfoData_register,(int)fn_802B8770,(int)beSeInfoData_getMetaCall,(int)beSeInfoData_className,20,(int)beSeInfoData_vtableRead,(int)beSeInfoData_fieldInit,0,(int)beSeInfoData_dependencies);
}
void *beSeInfoData_getMetaCall(){return beSeInfoData_getMeta();}
}
#pragma pop
