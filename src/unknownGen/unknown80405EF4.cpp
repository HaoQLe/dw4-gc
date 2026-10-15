#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8010EE6C();
void fn_80402E28();
void igModel_register();
void igViewerParameters_fieldInit();
void *igViewerParameters_getMeta();
void igViewerParameters_vtableRead();
extern char igViewerParameters_className[];
extern char lbl_804F0628[];
extern char igViewerParameters_meta[];
void igViewerParameters_register();
void *igViewerParameters_getMetaCall();
}
extern "C" {
void igViewerParameters_registerNow(){
 meta_registerNow((int)igViewerParameters_register);
}
void igViewerParameters_register(){
 fn_80402E28();
 meta_registerClass(0,(int)igViewerParameters_meta,(int)igModel_register,(int)fn_8010EE6C,(int)igViewerParameters_getMetaCall,(int)igViewerParameters_className,264,(int)igViewerParameters_vtableRead,(int)igViewerParameters_fieldInit,0,(int)lbl_804F0628);
}
void *igViewerParameters_getMetaCall(){return igViewerParameters_getMeta();}
}
#pragma pop
