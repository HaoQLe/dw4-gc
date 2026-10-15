#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8010DF8C();
void fn_80402E28();
void igBoundingBoxRenderer_fieldInit();
void *igBoundingBoxRenderer_getMeta();
void igBoundingBoxRenderer_vtableRead();
void igRenderer_register();
extern char igBoundingBoxRenderer_className[];
extern char lbl_804F0F94[];
extern char igBoundingBoxRenderer_meta[];
void igBoundingBoxRenderer_register();
void *igBoundingBoxRenderer_getMetaCall();
}
extern "C" {
void igBoundingBoxRenderer_registerNow(){
 meta_registerNow((int)igBoundingBoxRenderer_register);
}
void igBoundingBoxRenderer_register(){
 fn_80402E28();
 meta_registerClass(0,(int)igBoundingBoxRenderer_meta,(int)igRenderer_register,(int)fn_8010DF8C,(int)igBoundingBoxRenderer_getMetaCall,(int)igBoundingBoxRenderer_className,44,(int)igBoundingBoxRenderer_vtableRead,(int)igBoundingBoxRenderer_fieldInit,0,(int)lbl_804F0F94);
}
void *igBoundingBoxRenderer_getMetaCall(){return igBoundingBoxRenderer_getMeta();}
}
#pragma pop
