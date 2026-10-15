#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8010CBD4();
void *fn_8010EE6C();
void igGuiSystemModel_fieldInit();
void *igGuiSystemModel_getMeta();
void igGuiSystemModel_vtableRead();
void igModel_register();
extern char igGuiSystemModel_className[];
extern char lbl_8055F0A4[8];
extern void *igGuiSystemModel_meta;
void igGuiSystemModel_register();
void *igGuiSystemModel_getMetaCall();
}
extern "C" {
void igGuiSystemModel_registerNow(){
 meta_registerNow((int)igGuiSystemModel_register);
}
void igGuiSystemModel_register(){
 fn_8010CBD4();
 meta_registerClass(0,(int)&igGuiSystemModel_meta,(int)igModel_register,(int)fn_8010EE6C,(int)igGuiSystemModel_getMetaCall,(int)igGuiSystemModel_className,184,(int)igGuiSystemModel_vtableRead,(int)igGuiSystemModel_fieldInit,0,(int)lbl_8055F0A4);
}
void *igGuiSystemModel_getMetaCall(){return igGuiSystemModel_getMeta();}
}
#pragma pop
