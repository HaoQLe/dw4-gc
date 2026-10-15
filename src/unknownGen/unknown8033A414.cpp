#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beModelCtrl_register();
void *beNDMWMdlMapBase_getMeta();
void beNDMWMdlMapBase_vtableRead();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_803386E8();
void beNDMWMdlItem_registerNow();
extern char beNDMWMdlMapBase_className[];
extern char beNDMWMdlMapBase_meta[];
extern void *beNDMWMdlItem_meta;
extern void *lbl_805621F4;
void beNDMWMdlMapBase_register();
void *beNDMWMdlMapBase_getMetaCall();
}
extern "C" {
void beNDMWMdlMapBase_registerNow(){
 meta_registerNow((int)beNDMWMdlMapBase_register);
}
void beNDMWMdlMapBase_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWMdlMapBase_meta,(int)beModelCtrl_register,(int)fn_803386E8,(int)beNDMWMdlMapBase_getMetaCall,(int)beNDMWMdlMapBase_className,44,(int)beNDMWMdlMapBase_vtableRead,0,0,0);
}
void *beNDMWMdlMapBase_getMetaCall(){return beNDMWMdlMapBase_getMeta();}
void *beNDMWMdlItem_create(void *object){
 beNDMWMdlItem_registerNow();
 return meta_createInstance(beNDMWMdlItem_meta,object);
}
void *beNDMWMdlItem_metaObject(){
 if(!beNDMWMdlItem_meta) beNDMWMdlItem_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beNDMWMdlItem_meta;
}
void *beNDMWMdlItem_getMeta(){
 if(!beNDMWMdlItem_meta || !(reinterpret_cast<unsigned int *>(beNDMWMdlItem_meta)[0x24/4]&4)) beNDMWMdlItem_registerNow();
 return beNDMWMdlItem_meta;
}
}
#pragma pop
