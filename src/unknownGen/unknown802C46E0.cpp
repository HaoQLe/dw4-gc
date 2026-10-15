#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNodeAnim_fieldInit();
void *beNodeAnim_getMeta();
void beNodeAnim_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8011148C();
void fn_802B1AC8();
void *fn_802C48A4();
void igGroup_register();
extern char beNodeAnim_className[];
extern char beNodeAnim_meta[];
void beNodeAnim_register();
void *beNodeAnim_getMetaCall();
}
extern "C" {
void beNodeAnim_arkRegister(){
 meta_registerNow((int)beNodeAnim_register);
}
void beNodeAnim_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beNodeAnim_meta,(int)igGroup_register,(int)fn_8011148C,(int)beNodeAnim_getMetaCall,(int)beNodeAnim_className,112,(int)beNodeAnim_vtableRead,(int)beNodeAnim_fieldInit,(int)fn_802C48A4,0);
}
void *beNodeAnim_getMetaCall(){return beNodeAnim_getMeta();}
}
#pragma pop
