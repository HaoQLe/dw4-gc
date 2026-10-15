#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoRam_register();
void *beLayerInfoRam_getMeta();
void beLayerInfoRam_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2B2C();
void beLayerInfo_registerNow();
extern char beLayerInfoRam_className[];
extern char beLayerInfoRam_meta[];
extern void *beLayerInfo_meta;
void beLayerInfoRam_register();
void *beLayerInfoRam_getMetaCall();
}
extern "C" {
void beLayerInfoRam_registerNow(){
 meta_registerNow((int)beLayerInfoRam_register);
}
void beLayerInfoRam_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beLayerInfoRam_meta,(int)beBaseInfoRam_register,(int)fn_802B2B2C,(int)beLayerInfoRam_getMetaCall,(int)beLayerInfoRam_className,44,(int)beLayerInfoRam_vtableRead,0,0,0);
}
void *beLayerInfoRam_getMetaCall(){return beLayerInfoRam_getMeta();}
void *beLayerInfo_getMeta(){
 if(!beLayerInfo_meta || !(reinterpret_cast<unsigned int *>(beLayerInfo_meta)[0x24/4]&4)) beLayerInfo_registerNow();
 return beLayerInfo_meta;
}
}
#pragma pop
