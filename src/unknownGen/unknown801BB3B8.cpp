#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8011148C();
void fn_801AA6DC();
void igGroup_register();
void igLod_fieldInit();
void *igLod_getMeta();
void igLod_vtableRead();
extern char lbl_804AEC88[];
extern char lbl_805604A4[6];
extern void *lbl_80564D8C;
void igLod_register();
void *igLod_getMetaCall();
}
extern "C" {
void fn_801BB3B8(){
 fn_80066188((int)igLod_register);
}
void igLod_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564D8C,(int)igGroup_register,(int)fn_8011148C,(int)igLod_getMetaCall,(int)lbl_805604A4,68,(int)igLod_vtableRead,(int)igLod_fieldInit,0,(int)lbl_804AEC88);
}
void *igLod_getMetaCall(){return igLod_getMeta();}
}
#pragma pop
