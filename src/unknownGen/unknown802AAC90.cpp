#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802AA788();
void igAdxAfsFile_fieldInit();
void *igAdxAfsFile_getMeta();
void *igAdxAfsFile_parentMeta();
void igAdxAfsFile_vtableRead();
void igFileName_register();
extern char lbl_8041BB4C[];
extern char lbl_80534358[];
void igAdxAfsFile_register();
void *igAdxAfsFile_getMetaCall();
}
extern "C" {
void fn_802AAC90(){
 fn_80066188((int)igAdxAfsFile_register);
}
void igAdxAfsFile_register(){
 fn_802AA788();
 fn_80066204(0,(int)lbl_80534358,(int)igFileName_register,(int)igAdxAfsFile_parentMeta,(int)igAdxAfsFile_getMetaCall,(int)lbl_8041BB4C,20,(int)igAdxAfsFile_vtableRead,(int)igAdxAfsFile_fieldInit,0,0);
}
void *igAdxAfsFile_getMetaCall(){return igAdxAfsFile_getMeta();}
}
#pragma pop
