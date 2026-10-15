#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802AA788();
void igAdxAfsFile_fieldInit();
void *igAdxAfsFile_getMeta();
void *igAdxAfsFile_parentMeta();
void igAdxAfsFile_vtableRead();
void igFileName_register();
extern char igAdxAfsFile_className[];
extern char igAdxAfsFile_meta[];
void igAdxAfsFile_register();
void *igAdxAfsFile_getMetaCall();
}
extern "C" {
void igAdxAfsFile_arkRegister(){
 meta_registerNow((int)igAdxAfsFile_register);
}
void igAdxAfsFile_register(){
 fn_802AA788();
 meta_registerClass(0,(int)igAdxAfsFile_meta,(int)igFileName_register,(int)igAdxAfsFile_parentMeta,(int)igAdxAfsFile_getMetaCall,(int)igAdxAfsFile_className,20,(int)igAdxAfsFile_vtableRead,(int)igAdxAfsFile_fieldInit,0,0);
}
void *igAdxAfsFile_getMetaCall(){return igAdxAfsFile_getMeta();}
}
#pragma pop
