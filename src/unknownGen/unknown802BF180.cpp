#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beSaveApi_register();
void beSvFileMakeApi_fieldInit();
void *beSvFileMakeApi_getMeta();
void beSvFileMakeApi_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802BD764();
extern char lbl_8041E074[];
extern char lbl_804CFC80[];
extern char lbl_80534960[];
void beSvFileMakeApi_register();
void *beSvFileMakeApi_getMetaCall();
}
extern "C" {
void fn_802BF180(){
 fn_80066188((int)beSvFileMakeApi_register);
}
void beSvFileMakeApi_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534960,(int)beSaveApi_register,(int)fn_802BD764,(int)beSvFileMakeApi_getMetaCall,(int)lbl_8041E074,224,(int)beSvFileMakeApi_vtableRead,(int)beSvFileMakeApi_fieldInit,0,(int)lbl_804CFC80);
}
void *beSvFileMakeApi_getMetaCall(){return beSvFileMakeApi_getMeta();}
}
#pragma pop
