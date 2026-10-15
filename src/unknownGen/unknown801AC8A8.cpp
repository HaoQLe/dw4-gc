#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8011148C();
void fn_801AA6DC();
void igGroup_register();
void igTransform_fieldInit();
void *igTransform_getMeta();
void igTransform_vtableRead();
extern char igTransform_dependencies[];
extern char igTransform_className[];
extern void *igTransform_meta;
void igTransform_register();
void *igTransform_getMetaCall();
}
extern "C" {
void igTransform_arkRegister(){
 meta_registerNow((int)igTransform_register);
}
void igTransform_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igTransform_meta,(int)igGroup_register,(int)fn_8011148C,(int)igTransform_getMetaCall,(int)igTransform_className,108,(int)igTransform_vtableRead,(int)igTransform_fieldInit,0,(int)igTransform_dependencies);
}
void *igTransform_getMetaCall(){return igTransform_getMeta();}
}
#pragma pop
