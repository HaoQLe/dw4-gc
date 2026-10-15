#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8011148C();
void fn_801AA6DC();
void igActor_fieldInit();
void *igActor_getMeta();
void igActor_vtableRead();
void igGroup_register();
extern char igActor_dependencies[];
extern char lbl_80560A58[8];
extern void *igActor_meta;
void igActor_register();
void *igActor_getMetaCall();
}
extern "C" {
void igActor_arkRegister(){
 meta_registerNow((int)igActor_register);
}
void igActor_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igActor_meta,(int)igGroup_register,(int)fn_8011148C,(int)igActor_getMetaCall,(int)lbl_80560A58,256,(int)igActor_vtableRead,(int)igActor_fieldInit,0,(int)igActor_dependencies);
}
void *igActor_getMetaCall(){return igActor_getMeta();}
}
#pragma pop
