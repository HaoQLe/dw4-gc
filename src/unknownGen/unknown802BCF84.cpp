#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beSvPs2McImage128k_fieldInit();
void *beSvPs2McImage128k_getMeta();
void beSvPs2McImage128k_vtableRead();
void *fn_800237D0();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igObject_register();
extern char beSvPs2McImage128k_className[];
extern char beSvPs2McImage128k_meta[];
void beSvPs2McImage128k_register();
void *beSvPs2McImage128k_getMetaCall();
}
extern "C" {
void beSvPs2McImage128k_arkRegister(){
 meta_registerNow((int)beSvPs2McImage128k_register);
}
void beSvPs2McImage128k_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beSvPs2McImage128k_meta,(int)igObject_register,(int)fn_800237D0,(int)beSvPs2McImage128k_getMetaCall,(int)beSvPs2McImage128k_className,16,(int)beSvPs2McImage128k_vtableRead,(int)beSvPs2McImage128k_fieldInit,0,0);
}
void *beSvPs2McImage128k_getMetaCall(){return beSvPs2McImage128k_getMeta();}
}
#pragma pop
