#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802AA788();
void igAdxAudio_fieldInit();
void *igAdxAudio_getMeta();
void igAdxAudio_vtableRead();
void igObject_register();
extern char lbl_8041BC68[];
extern char lbl_805343AC[];
void igAdxAudio_register();
void *igAdxAudio_getMetaCall();
}
extern "C" {
void fn_802AB744(){
 fn_80066188((int)igAdxAudio_register);
}
void igAdxAudio_register(){
 fn_802AA788();
 fn_80066204(0,(int)lbl_805343AC,(int)igObject_register,(int)fn_800237D0,(int)igAdxAudio_getMetaCall,(int)lbl_8041BC68,48,(int)igAdxAudio_vtableRead,(int)igAdxAudio_fieldInit,0,0);
}
void *igAdxAudio_getMetaCall(){return igAdxAudio_getMeta();}
}
#pragma pop
