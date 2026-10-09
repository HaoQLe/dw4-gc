#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beSvPs2McImage128k_fieldInit();
void *beSvPs2McImage128k_getMeta();
void beSvPs2McImage128k_vtableRead();
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igObject_register();
extern char lbl_8041DDE4[];
extern char lbl_805348C4[];
void beSvPs2McImage128k_register();
void *beSvPs2McImage128k_getMetaCall();
}
extern "C" {
void fn_802BCF84(){
 fn_80066188((int)beSvPs2McImage128k_register);
}
void beSvPs2McImage128k_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805348C4,(int)igObject_register,(int)fn_800237D0,(int)beSvPs2McImage128k_getMetaCall,(int)lbl_8041DDE4,16,(int)beSvPs2McImage128k_vtableRead,(int)beSvPs2McImage128k_fieldInit,0,0);
}
void *beSvPs2McImage128k_getMetaCall(){return beSvPs2McImage128k_getMeta();}
}
#pragma pop
