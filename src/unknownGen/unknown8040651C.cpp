#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_80402E28();
void igObject_register();
void igViewerGuiFactory_fieldInit();
void *igViewerGuiFactory_getMeta();
void igViewerGuiFactory_vtableRead();
extern char igViewerGuiFactory_className[];
extern char igViewerGuiFactory_dependencies[];
extern char igViewerGuiFactory_meta[];
void igViewerGuiFactory_register();
void *igViewerGuiFactory_getMetaCall();
}
extern "C" {
void igViewerGuiFactory_arkRegister(){
 meta_registerNow((int)igViewerGuiFactory_register);
}
void igViewerGuiFactory_register(){
 fn_80402E28();
 meta_registerClass(0,(int)igViewerGuiFactory_meta,(int)igObject_register,(int)fn_800237D0,(int)igViewerGuiFactory_getMetaCall,(int)igViewerGuiFactory_className,40,(int)igViewerGuiFactory_vtableRead,(int)igViewerGuiFactory_fieldInit,0,(int)igViewerGuiFactory_dependencies);
}
void *igViewerGuiFactory_getMetaCall(){return igViewerGuiFactory_getMeta();}
}
#pragma pop
