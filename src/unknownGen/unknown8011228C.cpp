#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8010CBD4();
void igFont_fieldInit();
void igNamedObject_register();
extern char igFont_dependencies[8];
extern char lbl_8055F124[7];
extern void *lbl_805621F4;
extern void *igFont_meta;
void *igFont_getMeta();
void igFont_arkRegister();
void igFont_register();
void *igFont_getMetaCall();
}
extern "C" {
void *fn_8011228C(){
 if(!igFont_meta) igFont_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igFont_meta;
}
void *igFont_getMeta(){
 if(!igFont_meta || !(reinterpret_cast<unsigned int *>(igFont_meta)[0x24/4]&4)) igFont_arkRegister();
 return igFont_meta;
}
void igFont_arkRegister(){
 meta_registerNow((int)igFont_register);
}
void igFont_register(){
 fn_8010CBD4();
 meta_registerClass(1,(int)&igFont_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)igFont_getMetaCall,(int)lbl_8055F124,28,0,(int)igFont_fieldInit,0,(int)igFont_dependencies);
}
void *igFont_getMetaCall(){return igFont_getMeta();}
}
#pragma pop
