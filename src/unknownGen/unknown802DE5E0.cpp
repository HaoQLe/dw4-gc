#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoManager_register();
void *beDBManager_getMeta();
void beDBManager_vtableRead();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B381C();
void beCriVolume_registerNow();
extern char beDBManager_className[];
extern char beDBManager_meta[];
extern void *beCriVolume_meta;
extern void *lbl_805621F4;
void beDBManager_register();
void *beDBManager_getMetaCall();
}
extern "C" {
void beDBManager_registerNow(){
 meta_registerNow((int)beDBManager_register);
}
void beDBManager_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beDBManager_meta,(int)beBaseInfoManager_register,(int)fn_802B381C,(int)beDBManager_getMetaCall,(int)beDBManager_className,32,(int)beDBManager_vtableRead,0,0,0);
}
void *beDBManager_getMetaCall(){return beDBManager_getMeta();}
void *beCriVolume_metaObject(){
 if(!beCriVolume_meta) beCriVolume_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beCriVolume_meta;
}
void *beCriVolume_getMeta(){
 if(!beCriVolume_meta || !(reinterpret_cast<unsigned int *>(beCriVolume_meta)[0x24/4]&4)) beCriVolume_registerNow();
 return beCriVolume_meta;
}
}
#pragma pop
