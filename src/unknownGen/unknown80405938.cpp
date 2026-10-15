#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8010DF8C();
void fn_80402E28();
void igRenderer_register();
void igViewerRenderer_fieldInit();
void *igViewerRenderer_getMeta();
void igViewerRenderer_vtableRead();
extern char igViewerRenderer_className[];
extern char lbl_804F0450[];
extern char igViewerRenderer_meta[];
void igViewerRenderer_register();
void *igViewerRenderer_getMetaCall();
}
extern "C" {
void igViewerRenderer_registerNow(){
 meta_registerNow((int)igViewerRenderer_register);
}
void igViewerRenderer_register(){
 fn_80402E28();
 meta_registerClass(0,(int)igViewerRenderer_meta,(int)igRenderer_register,(int)fn_8010DF8C,(int)igViewerRenderer_getMetaCall,(int)igViewerRenderer_className,92,(int)igViewerRenderer_vtableRead,(int)igViewerRenderer_fieldInit,0,(int)lbl_804F0450);
}
void *igViewerRenderer_getMetaCall(){return igViewerRenderer_getMeta();}
}
#pragma pop
