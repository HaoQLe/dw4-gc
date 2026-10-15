#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beModelCtrl_register();
void *beNDMWMdlObject_getMeta();
void beNDMWMdlObject_vtableRead();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_803386E8();
void beNDMWMdlMapCursor_arkRegister();
extern char beNDMWMdlObject_className[];
extern char beNDMWMdlObject_meta[];
extern void *beNDMWMdlMapCursor_meta;
extern void *lbl_805621F4;
void beNDMWMdlObject_register();
void *beNDMWMdlObject_getMetaCall();
}
extern "C" {
void beNDMWMdlObject_arkRegister(){
 meta_registerNow((int)beNDMWMdlObject_register);
}
void beNDMWMdlObject_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWMdlObject_meta,(int)beModelCtrl_register,(int)fn_803386E8,(int)beNDMWMdlObject_getMetaCall,(int)beNDMWMdlObject_className,44,(int)beNDMWMdlObject_vtableRead,0,0,0);
}
void *beNDMWMdlObject_getMetaCall(){return beNDMWMdlObject_getMeta();}
void *beNDMWMdlMapCursor_create(void *object){
 beNDMWMdlMapCursor_arkRegister();
 return meta_createInstance(beNDMWMdlMapCursor_meta,object);
}
void *beNDMWMdlMapCursor_metaObject(){
 if(!beNDMWMdlMapCursor_meta) beNDMWMdlMapCursor_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beNDMWMdlMapCursor_meta;
}
void *beNDMWMdlMapCursor_getMeta(){
 if(!beNDMWMdlMapCursor_meta || !(reinterpret_cast<unsigned int *>(beNDMWMdlMapCursor_meta)[0x24/4]&4)) beNDMWMdlMapCursor_arkRegister();
 return beNDMWMdlMapCursor_meta;
}
}
#pragma pop
