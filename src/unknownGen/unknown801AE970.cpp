#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void igObject_register();
void igSorter_fieldInit();
void *igSorter_getMeta();
void igSorter_vtableRead();
extern char lbl_804AC204[];
extern char lbl_804AC22C[];
extern void *lbl_805647C8;
void igSorter_register();
void *igSorter_getMetaCall();
}
extern "C" {
void fn_801AE970(){
 fn_80066188((int)igSorter_register);
}
void igSorter_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_805647C8,(int)igObject_register,(int)fn_800237D0,(int)igSorter_getMetaCall,(int)lbl_804AC22C,132,(int)igSorter_vtableRead,(int)igSorter_fieldInit,0,(int)lbl_804AC204);
}
void *igSorter_getMetaCall(){return igSorter_getMeta();}
}
#pragma pop
