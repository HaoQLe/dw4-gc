#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beModelCtrl_register();
void *beNDMWMdlMapCursor_getMeta();
void beNDMWMdlMapCursor_vtableRead();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_803386E8();
void beNDMWMdlMapBase_arkRegister();
extern char beNDMWMdlMapCursor_className[];
extern char beNDMWMdlMapCursor_meta[];
extern void *beNDMWMdlMapBase_meta;
extern void *lbl_805621F4;
void beNDMWMdlMapCursor_register();
void *beNDMWMdlMapCursor_getMetaCall();
}
extern "C" {
void beNDMWMdlMapCursor_arkRegister(){
 meta_registerNow((int)beNDMWMdlMapCursor_register);
}
void beNDMWMdlMapCursor_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWMdlMapCursor_meta,(int)beModelCtrl_register,(int)fn_803386E8,(int)beNDMWMdlMapCursor_getMetaCall,(int)beNDMWMdlMapCursor_className,44,(int)beNDMWMdlMapCursor_vtableRead,0,0,0);
}
void *beNDMWMdlMapCursor_getMetaCall(){return beNDMWMdlMapCursor_getMeta();}
void *beNDMWMdlMapBase_create(void *object){
 beNDMWMdlMapBase_arkRegister();
 return meta_createInstance(beNDMWMdlMapBase_meta,object);
}
void *beNDMWMdlMapBase_metaObject(){
 if(!beNDMWMdlMapBase_meta) beNDMWMdlMapBase_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beNDMWMdlMapBase_meta;
}
void *beNDMWMdlMapBase_getMeta(){
 if(!beNDMWMdlMapBase_meta || !(reinterpret_cast<unsigned int *>(beNDMWMdlMapBase_meta)[0x24/4]&4)) beNDMWMdlMapBase_arkRegister();
 return beNDMWMdlMapBase_meta;
}
}
#pragma pop
