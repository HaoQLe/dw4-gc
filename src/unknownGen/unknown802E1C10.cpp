#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beCameraDemoData_fieldInit();
void *beCameraDemoData_getMeta();
void beCameraDemoData_vtableRead();
void *fn_800237D0();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igObject_register();
extern char beCameraDemoData_className[];
extern char lbl_804D2A28[];
extern char beCameraDemoData_meta[];
void beCameraDemoData_register();
void *beCameraDemoData_getMetaCall();
}
extern "C" {
void beCameraDemoData_registerNow(){
 meta_registerNow((int)beCameraDemoData_register);
}
void beCameraDemoData_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beCameraDemoData_meta,(int)igObject_register,(int)fn_800237D0,(int)beCameraDemoData_getMetaCall,(int)beCameraDemoData_className,32,(int)beCameraDemoData_vtableRead,(int)beCameraDemoData_fieldInit,0,(int)lbl_804D2A28);
}
void *beCameraDemoData_getMetaCall(){return beCameraDemoData_getMeta();}
}
#pragma pop
