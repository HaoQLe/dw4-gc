#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNodeAnim_fieldInit();
void *beNodeAnim_getMeta();
void beNodeAnim_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8011148C();
void fn_802B1AC8();
void *fn_802C48A4();
void igGroup_register();
extern char lbl_8041E880[];
extern char lbl_80534BA0[];
void beNodeAnim_register();
void *beNodeAnim_getMetaCall();
}
extern "C" {
void fn_802C46E0(){
 fn_80066188((int)beNodeAnim_register);
}
void beNodeAnim_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534BA0,(int)igGroup_register,(int)fn_8011148C,(int)beNodeAnim_getMetaCall,(int)lbl_8041E880,112,(int)beNodeAnim_vtableRead,(int)beNodeAnim_fieldInit,(int)fn_802C48A4,0);
}
void *beNodeAnim_getMetaCall(){return beNodeAnim_getMeta();}
}
#pragma pop
