#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void be_fieldInit();
void *be_getMeta();
void be_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_80284550();
void fn_802B1AC8();
void igInfoManager_register();
extern char lbl_80421120[];
extern char lbl_804D31F0[];
extern char lbl_80535830[];
void be_register();
void *be_getMetaCall();
}
extern "C" {
void fn_802E76CC(){
 fn_80066188((int)be_register);
}
void be_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535830,(int)igInfoManager_register,(int)fn_80284550,(int)be_getMetaCall,(int)lbl_80421120,20,(int)be_vtableRead,(int)be_fieldInit,0,(int)lbl_804D31F0);
}
void *be_getMetaCall(){return be_getMeta();}
}
#pragma pop
