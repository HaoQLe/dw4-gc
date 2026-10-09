#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beCameraDemoData_fieldInit();
void *beCameraDemoData_getMeta();
void beCameraDemoData_vtableRead();
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igObject_register();
extern char lbl_80420AE8[];
extern char lbl_804D2A28[];
extern char lbl_8053560C[];
void beCameraDemoData_register();
void *beCameraDemoData_getMetaCall();
}
extern "C" {
void fn_802E1C10(){
 fn_80066188((int)beCameraDemoData_register);
}
void beCameraDemoData_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_8053560C,(int)igObject_register,(int)fn_800237D0,(int)beCameraDemoData_getMetaCall,(int)lbl_80420AE8,32,(int)beCameraDemoData_vtableRead,(int)beCameraDemoData_fieldInit,0,(int)lbl_804D2A28);
}
void *beCameraDemoData_getMetaCall(){return beCameraDemoData_getMeta();}
}
#pragma pop
