#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoManager_register();
void *bePoint01_getMeta();
void bePoint01_vtableRead();
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B381C();
void beParticleCtrl2InfoRam_arkRegister();
extern char bePoint01_className[];
extern char bePoint01_fieldTypes[];
extern char bePoint01_fieldNames[];
extern char bePoint01_fieldStorage[];
extern char bePoint01_fieldOffsets[];
extern void *bePoint01_meta;
extern void *beParticleCtrl2InfoRam_meta;
void bePoint01_register();
void *bePoint01_getMetaCall();
void bePoint01_fieldInit();
}
extern "C" {
void bePoint01_arkRegister(){
 meta_registerNow((int)bePoint01_register);
}
void bePoint01_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)&bePoint01_meta,(int)beBaseInfoManager_register,(int)fn_802B381C,(int)bePoint01_getMetaCall,(int)bePoint01_className,36,(int)bePoint01_vtableRead,(int)bePoint01_fieldInit,0,0);
}
void *bePoint01_getMetaCall(){return bePoint01_getMeta();}
void bePoint01_fieldInit(){
 void *meta=bePoint01_meta;
 void *field=meta_fieldCount(meta);
 meta_appendFields(meta,bePoint01_fieldTypes,0x1);
 meta_setupFields(meta,bePoint01_fieldNames,bePoint01_fieldStorage,bePoint01_fieldOffsets,field);
}
void *beParticleCtrl2InfoRam_getMeta(){
 if(!beParticleCtrl2InfoRam_meta || !(reinterpret_cast<unsigned int *>(beParticleCtrl2InfoRam_meta)[0x24/4]&4)) beParticleCtrl2InfoRam_arkRegister();
 return beParticleCtrl2InfoRam_meta;
}
}
#pragma pop
