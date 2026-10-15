#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802AA788();
void igAdxAudio_fieldInit();
void *igAdxAudio_getMeta();
void igAdxAudio_vtableRead();
void igObject_register();
extern char igAdxAudio_className[];
extern char igAdxAudio_meta[];
void igAdxAudio_register();
void *igAdxAudio_getMetaCall();
}
extern "C" {
void igAdxAudio_arkRegister(){
 meta_registerNow((int)igAdxAudio_register);
}
void igAdxAudio_register(){
 fn_802AA788();
 meta_registerClass(0,(int)igAdxAudio_meta,(int)igObject_register,(int)fn_800237D0,(int)igAdxAudio_getMetaCall,(int)igAdxAudio_className,48,(int)igAdxAudio_vtableRead,(int)igAdxAudio_fieldInit,0,0);
}
void *igAdxAudio_getMetaCall(){return igAdxAudio_getMeta();}
}
#pragma pop
