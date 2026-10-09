#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8010E6DC();
void fn_80402E28();
void igViewMode_fieldInit();
void *igViewMode_getMeta();
void igViewMode_vtableRead();
void igView_register();
extern char lbl_804629C4[];
extern char lbl_8055CA5C[];
void igViewMode_register();
void *igViewMode_getMetaCall();
}
extern "C" {
void fn_80407B14(){
 fn_80066188((int)igViewMode_register);
}
void igViewMode_register(){
 fn_80402E28();
 fn_80066204(0,(int)lbl_8055CA5C,(int)igView_register,(int)fn_8010E6DC,(int)igViewMode_getMetaCall,(int)lbl_804629C4,76,(int)igViewMode_vtableRead,(int)igViewMode_fieldInit,0,0);
}
void *igViewMode_getMetaCall(){return igViewMode_getMeta();}
}
#pragma pop
