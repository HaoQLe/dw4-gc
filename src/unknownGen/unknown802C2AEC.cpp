#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beOptInfo_fieldInit();
void *beOptInfo_getMeta();
void beOptInfo_vtableRead();
void *fn_800284EC();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igInfo_register();
extern char beOptInfo_className[];
extern char beOptInfo_meta[];
void beOptInfo_register();
void *beOptInfo_getMetaCall();
}
extern "C" {
void beOptInfo_registerNow(){
 meta_registerNow((int)beOptInfo_register);
}
void beOptInfo_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beOptInfo_meta,(int)igInfo_register,(int)fn_800284EC,(int)beOptInfo_getMetaCall,(int)beOptInfo_className,36,(int)beOptInfo_vtableRead,(int)beOptInfo_fieldInit,0,0);
}
void *beOptInfo_getMetaCall(){return beOptInfo_getMeta();}
}
#pragma pop
