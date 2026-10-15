#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beActionStarter_getMeta();
void beActionStarter_vtableRead();
void beBaseInfoManager_register();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B381C();
void beAction2InfoWork_arkRegister();
extern char beActionStarter_className[];
extern char beActionStarter_meta[];
extern void *beAction2InfoWork_meta;
extern void *lbl_805621F4;
void beActionStarter_register();
void *beActionStarter_getMetaCall();
}
extern "C" {
void beActionStarter_arkRegister(){
 meta_registerNow((int)beActionStarter_register);
}
void beActionStarter_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beActionStarter_meta,(int)beBaseInfoManager_register,(int)fn_802B381C,(int)beActionStarter_getMetaCall,(int)beActionStarter_className,32,(int)beActionStarter_vtableRead,0,0,0);
}
void *beActionStarter_getMetaCall(){return beActionStarter_getMeta();}
void *beAction2InfoWork_create(void *object){
 beAction2InfoWork_arkRegister();
 return meta_createInstance(beAction2InfoWork_meta,object);
}
void *beAction2InfoWork_metaObject(){
 if(!beAction2InfoWork_meta) beAction2InfoWork_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beAction2InfoWork_meta;
}
void *beAction2InfoWork_getMeta(){
 if(!beAction2InfoWork_meta || !(reinterpret_cast<unsigned int *>(beAction2InfoWork_meta)[0x24/4]&4)) beAction2InfoWork_arkRegister();
 return beAction2InfoWork_meta;
}
}
#pragma pop
