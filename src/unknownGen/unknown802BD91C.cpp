#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beSaveApi_register();
void *beSvEndApi_getMeta();
void beSvEndApi_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802BD764();
void fn_802BD9D8();
extern char lbl_8041DF58[];
extern char lbl_80534910[];
void beSvEndApi_register();
void *beSvEndApi_getMetaCall();
}
extern "C" {
void fn_802BD91C(){
 fn_80066188((int)beSvEndApi_register);
}
void beSvEndApi_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534910,(int)beSaveApi_register,(int)fn_802BD764,(int)beSvEndApi_getMetaCall,(int)lbl_8041DF58,212,(int)beSvEndApi_vtableRead,(int)fn_802BD9D8,0,0);
}
void *beSvEndApi_getMetaCall(){return beSvEndApi_getMeta();}
}
#pragma pop
