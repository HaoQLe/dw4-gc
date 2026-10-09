#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beFileListInfo_fieldInit();
void *beFileListInfo_getMeta();
void beFileListInfo_vtableRead();
void *fn_800284EC();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igInfo_register();
extern char lbl_804204B0[];
extern char lbl_804D22A0[];
extern char lbl_805353CC[];
void beFileListInfo_register();
void *beFileListInfo_getMetaCall();
}
extern "C" {
void fn_802DAB34(){
 fn_80066188((int)beFileListInfo_register);
}
void beFileListInfo_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805353CC,(int)igInfo_register,(int)fn_800284EC,(int)beFileListInfo_getMetaCall,(int)lbl_804204B0,28,(int)beFileListInfo_vtableRead,(int)beFileListInfo_fieldInit,0,(int)lbl_804D22A0);
}
void *beFileListInfo_getMetaCall(){return beFileListInfo_getMeta();}
}
#pragma pop
