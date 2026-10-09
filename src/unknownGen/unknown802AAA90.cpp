#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802AA788();
void fn_802AAC90();
void *igAdxAfsFileList_getMeta();
void igAdxAfsFileList_vtableRead();
void igObjectList_register();
extern char lbl_8041BB38[];
extern char lbl_804CD948[];
extern char lbl_80534354[];
extern void *lbl_80534358;
void igAdxAfsFileList_register();
void *igAdxAfsFileList_getMetaCall();
}
extern "C" {
void fn_802AAA90(){
 fn_80066188((int)igAdxAfsFileList_register);
}
void igAdxAfsFileList_register(){
 fn_802AA788();
 fn_80066204(0,(int)lbl_80534354,(int)igObjectList_register,(int)fn_80024180,(int)igAdxAfsFileList_getMetaCall,(int)lbl_8041BB38,20,(int)igAdxAfsFileList_vtableRead,0,0,(int)lbl_804CD948);
}
void *igAdxAfsFileList_getMetaCall(){return igAdxAfsFileList_getMeta();}
void *igAdxAfsFile_getMeta(){
 if(!lbl_80534358 || !(reinterpret_cast<unsigned int *>(lbl_80534358)[0x24/4]&4)) fn_802AAC90();
 return lbl_80534358;
}
}
#pragma pop
