#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8011148C();
void fn_801AA6DC();
void igActor_fieldInit();
void *igActor_getMeta();
void igActor_vtableRead();
void igGroup_register();
extern char lbl_804B2A30[];
extern char lbl_80560A58[8];
extern void *lbl_805655A0;
void igActor_register();
void *igActor_getMetaCall();
}
extern "C" {
void fn_801CE1D8(){
 fn_80066188((int)igActor_register);
}
void igActor_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_805655A0,(int)igGroup_register,(int)fn_8011148C,(int)igActor_getMetaCall,(int)lbl_80560A58,256,(int)igActor_vtableRead,(int)igActor_fieldInit,0,(int)lbl_804B2A30);
}
void *igActor_getMetaCall(){return igActor_getMeta();}
}
#pragma pop
