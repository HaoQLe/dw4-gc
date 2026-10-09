#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beCriFxInfo_fieldInit();
void *beCriFxInfo_getMeta();
void beCriFxInfo_vtableRead();
void *fn_800284EC();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igInfo_register();
extern char lbl_8042084C[];
extern char lbl_804D26CC[];
extern char lbl_80535514[];
void beCriFxInfo_register();
void *beCriFxInfo_getMetaCall();
}
extern "C" {
void fn_802DF220(){
 fn_80066188((int)beCriFxInfo_register);
}
void beCriFxInfo_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535514,(int)igInfo_register,(int)fn_800284EC,(int)beCriFxInfo_getMetaCall,(int)lbl_8042084C,36,(int)beCriFxInfo_vtableRead,(int)beCriFxInfo_fieldInit,0,(int)lbl_804D26CC);
}
void *beCriFxInfo_getMetaCall(){return beCriFxInfo_getMeta();}
}
#pragma pop
