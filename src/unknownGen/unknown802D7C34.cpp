#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beGeneraterPlayerData_fieldInit();
void *beGeneraterPlayerData_getMeta();
void beGeneraterPlayerData_vtableRead();
void *fn_800237D0();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igObject_register();
extern char beGeneraterPlayerData_className[];
extern char lbl_804D1E90[];
extern char beGeneraterPlayerData_meta[];
void beGeneraterPlayerData_register();
void *beGeneraterPlayerData_getMetaCall();
}
extern "C" {
void beGeneraterPlayerData_registerNow(){
 meta_registerNow((int)beGeneraterPlayerData_register);
}
void beGeneraterPlayerData_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beGeneraterPlayerData_meta,(int)igObject_register,(int)fn_800237D0,(int)beGeneraterPlayerData_getMetaCall,(int)beGeneraterPlayerData_className,24,(int)beGeneraterPlayerData_vtableRead,(int)beGeneraterPlayerData_fieldInit,0,(int)lbl_804D1E90);
}
void *beGeneraterPlayerData_getMetaCall(){return beGeneraterPlayerData_getMeta();}
}
#pragma pop
