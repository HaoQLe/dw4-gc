#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beXboxImage24k_fieldInit();
void *beXboxImage24k_getMeta();
void beXboxImage24k_vtableRead();
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igObject_register();
extern char lbl_8041DCD4[];
extern char lbl_80534858[];
void beXboxImage24k_register();
void *beXboxImage24k_getMetaCall();
}
extern "C" {
void fn_802BC864(){
 fn_80066188((int)beXboxImage24k_register);
}
void beXboxImage24k_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534858,(int)igObject_register,(int)fn_800237D0,(int)beXboxImage24k_getMetaCall,(int)lbl_8041DCD4,16,(int)beXboxImage24k_vtableRead,(int)beXboxImage24k_fieldInit,0,0);
}
void *beXboxImage24k_getMetaCall(){return beXboxImage24k_getMeta();}
}
#pragma pop
