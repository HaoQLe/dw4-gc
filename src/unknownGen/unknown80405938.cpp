#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8010DF8C();
void fn_80402E28();
void igRenderer_register();
void igViewerRenderer_fieldInit();
void *igViewerRenderer_getMeta();
void igViewerRenderer_vtableRead();
extern char lbl_80462210[];
extern char lbl_804F0450[];
extern char lbl_8055C880[];
void igViewerRenderer_register();
void *igViewerRenderer_getMetaCall();
}
extern "C" {
void fn_80405938(){
 fn_80066188((int)igViewerRenderer_register);
}
void igViewerRenderer_register(){
 fn_80402E28();
 fn_80066204(0,(int)lbl_8055C880,(int)igRenderer_register,(int)fn_8010DF8C,(int)igViewerRenderer_getMetaCall,(int)lbl_80462210,92,(int)igViewerRenderer_vtableRead,(int)igViewerRenderer_fieldInit,0,(int)lbl_804F0450);
}
void *igViewerRenderer_getMetaCall(){return igViewerRenderer_getMeta();}
}
#pragma pop
