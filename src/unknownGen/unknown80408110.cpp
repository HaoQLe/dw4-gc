#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8010EE6C();
void fn_80402E28();
void igModel_register();
void igViewModel_fieldInit();
void *igViewModel_getMeta();
void igViewModel_vtableRead();
extern char lbl_80462A24[];
extern char lbl_8055CA78[];
void igViewModel_register();
void *igViewModel_getMetaCall();
}
extern "C" {
void fn_80408110(){
 fn_80066188((int)igViewModel_register);
}
void igViewModel_register(){
 fn_80402E28();
 fn_80066204(0,(int)lbl_8055CA78,(int)igModel_register,(int)fn_8010EE6C,(int)igViewModel_getMetaCall,(int)lbl_80462A24,176,(int)igViewModel_vtableRead,(int)igViewModel_fieldInit,0,0);
}
void *igViewModel_getMetaCall(){return igViewModel_getMeta();}
}
#pragma pop
