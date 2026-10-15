#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beGroupKeep_getMeta();
void beGroupKeep_vtableRead();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8011148C();
void fn_802B1AC8();
void beGeneraterInfoWork_arkRegister();
void igGroup_register();
extern char beGroupKeep_className[];
extern char beGroupKeep_meta[];
extern void *beGeneraterInfoWork_meta;
extern void *lbl_805621F4;
void beGroupKeep_register();
void *beGroupKeep_getMetaCall();
}
extern "C" {
void beGroupKeep_arkRegister(){
 meta_registerNow((int)beGroupKeep_register);
}
void beGroupKeep_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beGroupKeep_meta,(int)igGroup_register,(int)fn_8011148C,(int)beGroupKeep_getMetaCall,(int)beGroupKeep_className,32,(int)beGroupKeep_vtableRead,0,0,0);
}
void *beGroupKeep_getMetaCall(){return beGroupKeep_getMeta();}
void *beGeneraterInfoWork_create(void *object){
 beGeneraterInfoWork_arkRegister();
 return meta_createInstance(beGeneraterInfoWork_meta,object);
}
void *beGeneraterInfoWork_metaObject(){
 if(!beGeneraterInfoWork_meta) beGeneraterInfoWork_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beGeneraterInfoWork_meta;
}
void *beGeneraterInfoWork_getMeta(){
 if(!beGeneraterInfoWork_meta || !(reinterpret_cast<unsigned int *>(beGeneraterInfoWork_meta)[0x24/4]&4)) beGeneraterInfoWork_arkRegister();
 return beGeneraterInfoWork_meta;
}
}
#pragma pop
