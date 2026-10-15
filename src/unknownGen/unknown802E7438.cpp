#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beAction2_getMeta();
void beAction2_vtableRead();
void beBaseInfoManager_register();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B381C();
void be_registerNow();
extern char beAction2_className[];
extern char beAction2_meta[];
extern void *be_meta;
extern void *lbl_805621F4;
void beAction2_register();
void *beAction2_getMetaCall();
}
extern "C" {
void beAction2_registerNow(){
 meta_registerNow((int)beAction2_register);
}
void beAction2_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beAction2_meta,(int)beBaseInfoManager_register,(int)fn_802B381C,(int)beAction2_getMetaCall,(int)beAction2_className,32,(int)beAction2_vtableRead,0,0,0);
}
void *beAction2_getMetaCall(){return beAction2_getMeta();}
void *be_create(void *object){
 be_registerNow();
 return meta_createInstance(be_meta,object);
}
void *be_metaObject(){
 if(!be_meta) be_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return be_meta;
}
void *be_getMeta(){
 if(!be_meta || !(reinterpret_cast<unsigned int *>(be_meta)[0x24/4]&4)) be_registerNow();
 return be_meta;
}
}
#pragma pop
