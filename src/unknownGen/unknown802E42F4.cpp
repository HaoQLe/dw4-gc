#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beActionStarterInfoRam_getMeta();
void beActionStarterInfoRam_vtableRead();
void beBaseInfoRam_register();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2B2C();
void beActionStarterInfo_arkRegister();
extern char beActionStarterInfoRam_className[];
extern char beActionStarterInfoRam_meta[];
extern void *beActionStarterInfo_meta;
void beActionStarterInfoRam_register();
void *beActionStarterInfoRam_getMetaCall();
}
extern "C" {
void beActionStarterInfoRam_arkRegister(){
 meta_registerNow((int)beActionStarterInfoRam_register);
}
void beActionStarterInfoRam_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beActionStarterInfoRam_meta,(int)beBaseInfoRam_register,(int)fn_802B2B2C,(int)beActionStarterInfoRam_getMetaCall,(int)beActionStarterInfoRam_className,44,(int)beActionStarterInfoRam_vtableRead,0,0,0);
}
void *beActionStarterInfoRam_getMetaCall(){return beActionStarterInfoRam_getMeta();}
void *beActionStarterInfo_getMeta(){
 if(!beActionStarterInfo_meta || !(reinterpret_cast<unsigned int *>(beActionStarterInfo_meta)[0x24/4]&4)) beActionStarterInfo_arkRegister();
 return beActionStarterInfo_meta;
}
}
#pragma pop
