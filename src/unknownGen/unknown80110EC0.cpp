#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8010CBD4();
void *fn_8010EE6C();
void igGuiSystemModel_fieldInit();
void *igGuiSystemModel_getMeta();
void igGuiSystemModel_vtableRead();
void igModel_register();
extern char lbl_80494E7C[];
extern char lbl_8055F0A4[8];
extern void *lbl_805636E0;
void igGuiSystemModel_register();
void *igGuiSystemModel_getMetaCall();
}
extern "C" {
void fn_80110EC0(){
 fn_80066188((int)igGuiSystemModel_register);
}
void igGuiSystemModel_register(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_805636E0,(int)igModel_register,(int)fn_8010EE6C,(int)igGuiSystemModel_getMetaCall,(int)lbl_80494E7C,184,(int)igGuiSystemModel_vtableRead,(int)igGuiSystemModel_fieldInit,0,(int)lbl_8055F0A4);
}
void *igGuiSystemModel_getMetaCall(){return igGuiSystemModel_getMeta();}
}
#pragma pop
