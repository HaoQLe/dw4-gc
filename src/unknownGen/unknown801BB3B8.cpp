#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8011148C();
void fn_801AA6DC();
void igGroup_register();
void igLod_fieldInit();
void *igLod_getMeta();
void igLod_vtableRead();
extern char igLod_dependencies[];
extern char lbl_805604A4[6];
extern void *igLod_meta;
void igLod_register();
void *igLod_getMetaCall();
}
extern "C" {
void igLod_arkRegister(){
 meta_registerNow((int)igLod_register);
}
void igLod_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igLod_meta,(int)igGroup_register,(int)fn_8011148C,(int)igLod_getMetaCall,(int)lbl_805604A4,68,(int)igLod_vtableRead,(int)igLod_fieldInit,0,(int)igLod_dependencies);
}
void *igLod_getMetaCall(){return igLod_getMeta();}
}
#pragma pop
