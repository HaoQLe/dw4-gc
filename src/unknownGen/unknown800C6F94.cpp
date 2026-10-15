#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void *fn_800237D0();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *igAudioContext_fieldInit();
void igObject_register();
extern char igAudioContext_className[];
extern void *lbl_805621F4;
extern char lbl_80562B20[1];
extern char lbl_80562B21[1];
extern void *igAudioContext_meta;
void fn_800C6F28();
void *igAudioContext_getMeta();
void igAudioContext_arkRegister();
void igAudioContext_register();
void *igAudioContext_getMetaCall();
}
extern "C" {
void *fn_800C6F94(){
 if(!igAudioContext_meta) igAudioContext_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igAudioContext_meta;
}
void *igAudioContext_getMeta(){
 if(!igAudioContext_meta || !(reinterpret_cast<unsigned int *>(igAudioContext_meta)[0x24/4]&4)) igAudioContext_arkRegister();
 return igAudioContext_meta;
}
void igAudioContext_arkRegister(){
 meta_registerNow((int)igAudioContext_register);
}
void igAudioContext_register(){
 fn_800C6F28();
 meta_registerClass(1,(int)&igAudioContext_meta,(int)igObject_register,(int)fn_800237D0,(int)igAudioContext_getMetaCall,(int)igAudioContext_className,12,0,(int)igAudioContext_fieldInit,0,0);
}
void *igAudioContext_getMetaCall(){return igAudioContext_getMeta();}
}
#pragma pop
