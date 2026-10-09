#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802E170C();
void fn_80402E28();
void igPickMode_fieldInit();
void *igPickMode_getMeta();
void igPickMode_vtableRead();
void igViewMode_register();
extern char lbl_80462774[];
extern char lbl_804F09BC[];
extern char lbl_8055C9A4[];
void igPickMode_register();
void *igPickMode_getMetaCall();
}
extern "C" {
void fn_80406D60(){
 fn_80066188((int)igPickMode_register);
}
void igPickMode_register(){
 fn_80402E28();
 fn_80066204(0,(int)lbl_8055C9A4,(int)igViewMode_register,(int)fn_802E170C,(int)igPickMode_getMetaCall,(int)lbl_80462774,188,(int)igPickMode_vtableRead,(int)igPickMode_fieldInit,0,(int)lbl_804F09BC);
}
void *igPickMode_getMetaCall(){return igPickMode_getMeta();}
}
#pragma pop
