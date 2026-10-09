#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80402E28();
void igObject_register();
void igViewerGuiFactory_fieldInit();
void *igViewerGuiFactory_getMeta();
void igViewerGuiFactory_vtableRead();
extern char lbl_8046268C[];
extern char lbl_804F0914[];
extern char lbl_8055C974[];
void igViewerGuiFactory_register();
void *igViewerGuiFactory_getMetaCall();
}
extern "C" {
void fn_8040651C(){
 fn_80066188((int)igViewerGuiFactory_register);
}
void igViewerGuiFactory_register(){
 fn_80402E28();
 fn_80066204(0,(int)lbl_8055C974,(int)igObject_register,(int)fn_800237D0,(int)igViewerGuiFactory_getMetaCall,(int)lbl_8046268C,40,(int)igViewerGuiFactory_vtableRead,(int)igViewerGuiFactory_fieldInit,0,(int)lbl_804F0914);
}
void *igViewerGuiFactory_getMetaCall(){return igViewerGuiFactory_getMeta();}
}
#pragma pop
