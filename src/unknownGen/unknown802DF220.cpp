#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beCriFxInfo_fieldInit();
void *beCriFxInfo_getMeta();
void beCriFxInfo_vtableRead();
void *fn_800284EC();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igInfo_register();
extern char beCriFxInfo_className[];
extern char beCriFxInfo_dependencies[];
extern char beCriFxInfo_meta[];
void beCriFxInfo_register();
void *beCriFxInfo_getMetaCall();
}
extern "C" {
void beCriFxInfo_arkRegister(){
 meta_registerNow((int)beCriFxInfo_register);
}
void beCriFxInfo_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beCriFxInfo_meta,(int)igInfo_register,(int)fn_800284EC,(int)beCriFxInfo_getMetaCall,(int)beCriFxInfo_className,36,(int)beCriFxInfo_vtableRead,(int)beCriFxInfo_fieldInit,0,(int)beCriFxInfo_dependencies);
}
void *beCriFxInfo_getMetaCall(){return beCriFxInfo_getMeta();}
}
#pragma pop
