#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8010EE6C();
void fn_80402E28();
void igModel_register();
void igViewerParameters_fieldInit();
void *igViewerParameters_getMeta();
void igViewerParameters_vtableRead();
extern char lbl_804623BC[];
extern char lbl_804F0628[];
extern char lbl_8055C8D4[];
void igViewerParameters_register();
void *igViewerParameters_getMetaCall();
}
extern "C" {
void fn_80405EF4(){
 fn_80066188((int)igViewerParameters_register);
}
void igViewerParameters_register(){
 fn_80402E28();
 fn_80066204(0,(int)lbl_8055C8D4,(int)igModel_register,(int)fn_8010EE6C,(int)igViewerParameters_getMetaCall,(int)lbl_804623BC,264,(int)igViewerParameters_vtableRead,(int)igViewerParameters_fieldInit,0,(int)lbl_804F0628);
}
void *igViewerParameters_getMetaCall(){return igViewerParameters_getMeta();}
}
#pragma pop
