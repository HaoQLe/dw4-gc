#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoManager_register();
void *beParticleCtrl2_getMeta();
void beParticleCtrl2_vtableRead();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B381C();
void bePadManager_registerNow();
extern char beParticleCtrl2_className[];
extern char beParticleCtrl2_meta[];
extern void *bePadManager_meta;
extern void *lbl_805621F4;
void beParticleCtrl2_register();
void *beParticleCtrl2_getMetaCall();
}
extern "C" {
void beParticleCtrl2_registerNow(){
 meta_registerNow((int)beParticleCtrl2_register);
}
void beParticleCtrl2_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beParticleCtrl2_meta,(int)beBaseInfoManager_register,(int)fn_802B381C,(int)beParticleCtrl2_getMetaCall,(int)beParticleCtrl2_className,32,(int)beParticleCtrl2_vtableRead,0,0,0);
}
void *beParticleCtrl2_getMetaCall(){return beParticleCtrl2_getMeta();}
void *bePadManager_create(void *object){
 bePadManager_registerNow();
 return meta_createInstance(bePadManager_meta,object);
}
void *bePadManager_metaObject(){
 if(!bePadManager_meta) bePadManager_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return bePadManager_meta;
}
void *bePadManager_getMeta(){
 if(!bePadManager_meta || !(reinterpret_cast<unsigned int *>(bePadManager_meta)[0x24/4]&4)) bePadManager_registerNow();
 return bePadManager_meta;
}
}
#pragma pop
