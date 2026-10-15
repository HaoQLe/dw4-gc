#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802AA788();
void igAdxAfsFile_arkRegister();
void *igAdxAfsFileList_getMeta();
void igAdxAfsFileList_vtableRead();
void igObjectList_register();
extern char igAdxAfsFileList_className[];
extern char igAdxAfsFileList_dependencies[];
extern char igAdxAfsFileList_meta[];
extern void *igAdxAfsFile_meta;
void igAdxAfsFileList_register();
void *igAdxAfsFileList_getMetaCall();
}
extern "C" {
void igAdxAfsFileList_arkRegister(){
 meta_registerNow((int)igAdxAfsFileList_register);
}
void igAdxAfsFileList_register(){
 fn_802AA788();
 meta_registerClass(0,(int)igAdxAfsFileList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igAdxAfsFileList_getMetaCall,(int)igAdxAfsFileList_className,20,(int)igAdxAfsFileList_vtableRead,0,0,(int)igAdxAfsFileList_dependencies);
}
void *igAdxAfsFileList_getMetaCall(){return igAdxAfsFileList_getMeta();}
void *igAdxAfsFile_getMeta(){
 if(!igAdxAfsFile_meta || !(reinterpret_cast<unsigned int *>(igAdxAfsFile_meta)[0x24/4]&4)) igAdxAfsFile_arkRegister();
 return igAdxAfsFile_meta;
}
}
#pragma pop
