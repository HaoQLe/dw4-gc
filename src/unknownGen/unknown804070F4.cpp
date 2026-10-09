#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802E170C();
void fn_80402E28();
void igRotateMode_fieldInit();
void *igRotateMode_getMeta();
void igRotateMode_vtableRead();
void igViewMode_register();
extern char lbl_80462858[];
extern char lbl_8055C9DC[];
void igRotateMode_register();
void *igRotateMode_getMetaCall();
}
extern "C" {
void fn_804070F4(){
 fn_80066188((int)igRotateMode_register);
}
void igRotateMode_register(){
 fn_80402E28();
 fn_80066204(0,(int)lbl_8055C9DC,(int)igViewMode_register,(int)fn_802E170C,(int)igRotateMode_getMetaCall,(int)lbl_80462858,148,(int)igRotateMode_vtableRead,(int)igRotateMode_fieldInit,0,0);
}
void *igRotateMode_getMetaCall(){return igRotateMode_getMeta();}
}
#pragma pop
