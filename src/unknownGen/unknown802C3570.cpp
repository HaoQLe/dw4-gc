#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNumVerData_fieldInit();
void *beNumVerData_getMeta();
void beNumVerData_vtableRead();
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igObject_register();
extern char lbl_8041E780[];
extern char lbl_804D03F8[];
extern char lbl_80534B68[];
void beNumVerData_register();
void *beNumVerData_getMetaCall();
}
extern "C" {
void fn_802C3570(){
 fn_80066188((int)beNumVerData_register);
}
void beNumVerData_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534B68,(int)igObject_register,(int)fn_800237D0,(int)beNumVerData_getMetaCall,(int)lbl_8041E780,16,(int)beNumVerData_vtableRead,(int)beNumVerData_fieldInit,0,(int)lbl_804D03F8);
}
void *beNumVerData_getMetaCall(){return beNumVerData_getMeta();}
}
#pragma pop
