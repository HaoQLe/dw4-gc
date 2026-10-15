#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfo_register();
void beLayerInfo_fieldInit();
void *beLayerInfo_getMeta();
void beLayerInfo_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2E3C();
extern char beLayerInfo_className[];
extern char lbl_804D1904[];
extern char beLayerInfo_meta[];
void beLayerInfo_register();
void *beLayerInfo_getMetaCall();
}
extern "C" {
void beLayerInfo_registerNow(){
 meta_registerNow((int)beLayerInfo_register);
}
void beLayerInfo_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beLayerInfo_meta,(int)beBaseInfo_register,(int)fn_802B2E3C,(int)beLayerInfo_getMetaCall,(int)beLayerInfo_className,32,(int)beLayerInfo_vtableRead,(int)beLayerInfo_fieldInit,0,(int)lbl_804D1904);
}
void *beLayerInfo_getMetaCall(){return beLayerInfo_getMeta();}
}
#pragma pop
