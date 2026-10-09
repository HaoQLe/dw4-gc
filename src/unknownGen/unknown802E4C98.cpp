#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beActionStarterData2_fieldInit();
void *beActionStarterData2_getMeta();
void *beActionStarterData2_parentMeta();
void beActionStarterData2_vtableRead();
void beActionStarterData_register();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
extern char lbl_80420E68[];
extern char lbl_8053573C[];
void beActionStarterData2_register();
void *beActionStarterData2_getMetaCall();
}
extern "C" {
void fn_802E4C98(){
 fn_80066188((int)beActionStarterData2_register);
}
void beActionStarterData2_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_8053573C,(int)beActionStarterData_register,(int)beActionStarterData2_parentMeta,(int)beActionStarterData2_getMetaCall,(int)lbl_80420E68,48,(int)beActionStarterData2_vtableRead,(int)beActionStarterData2_fieldInit,0,0);
}
void *beActionStarterData2_getMetaCall(){return beActionStarterData2_getMeta();}
}
#pragma pop
