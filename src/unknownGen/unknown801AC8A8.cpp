#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8011148C();
void fn_801AA6DC();
void igGroup_register();
void igTransform_fieldInit();
void *igTransform_getMeta();
void igTransform_vtableRead();
extern char lbl_804ABB08[];
extern char lbl_804ABB14[];
extern void *lbl_80564714;
void igTransform_register();
void *igTransform_getMetaCall();
}
extern "C" {
void fn_801AC8A8(){
 fn_80066188((int)igTransform_register);
}
void igTransform_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564714,(int)igGroup_register,(int)fn_8011148C,(int)igTransform_getMetaCall,(int)lbl_804ABB14,108,(int)igTransform_vtableRead,(int)igTransform_fieldInit,0,(int)lbl_804ABB08);
}
void *igTransform_getMetaCall(){return igTransform_getMeta();}
}
#pragma pop
