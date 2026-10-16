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
}
#pragma pop
