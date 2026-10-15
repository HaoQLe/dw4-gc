#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoRam_register();
void *beHitLandModelInfoRam_getMeta();
void beHitLandModelInfoRam_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2B2C();
void beHitLandModelInfo_arkRegister();
extern char beHitLandModelInfoRam_className[];
extern char beHitLandModelInfoRam_meta[];
extern void *beHitLandModelInfo_meta;
void beHitLandModelInfoRam_register();
void *beHitLandModelInfoRam_getMetaCall();
}
extern "C" {
void beHitLandModelInfoRam_arkRegister(){
 meta_registerNow((int)beHitLandModelInfoRam_register);
}
void beHitLandModelInfoRam_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beHitLandModelInfoRam_meta,(int)beBaseInfoRam_register,(int)fn_802B2B2C,(int)beHitLandModelInfoRam_getMetaCall,(int)beHitLandModelInfoRam_className,44,(int)beHitLandModelInfoRam_vtableRead,0,0,0);
}
void *beHitLandModelInfoRam_getMetaCall(){return beHitLandModelInfoRam_getMeta();}
void *beHitLandModelInfo_getMeta(){
 if(!beHitLandModelInfo_meta || !(reinterpret_cast<unsigned int *>(beHitLandModelInfo_meta)[0x24/4]&4)) beHitLandModelInfo_arkRegister();
 return beHitLandModelInfo_meta;
}
}
#pragma pop
