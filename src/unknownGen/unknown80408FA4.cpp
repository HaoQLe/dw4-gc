#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8010DF8C();
void fn_80402E28();
void igBoundingBoxRenderer_fieldInit();
void *igBoundingBoxRenderer_getMeta();
void igBoundingBoxRenderer_vtableRead();
void igRenderer_register();
extern char lbl_80462C0C[];
extern char lbl_804F0F94[];
extern char lbl_8055CB1C[];
void igBoundingBoxRenderer_register();
void *igBoundingBoxRenderer_getMetaCall();
}
extern "C" {
void fn_80408FA4(){
 fn_80066188((int)igBoundingBoxRenderer_register);
}
void igBoundingBoxRenderer_register(){
 fn_80402E28();
 fn_80066204(0,(int)lbl_8055CB1C,(int)igRenderer_register,(int)fn_8010DF8C,(int)igBoundingBoxRenderer_getMetaCall,(int)lbl_80462C0C,44,(int)igBoundingBoxRenderer_vtableRead,(int)igBoundingBoxRenderer_fieldInit,0,(int)lbl_804F0F94);
}
void *igBoundingBoxRenderer_getMetaCall(){return igBoundingBoxRenderer_getMeta();}
}
#pragma pop
