#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void fn_80065D94(int);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802A8C4C();
void *fn_802A8CC4();
void fn_802AA788();
void igAdxAfsFileList_registerNow();
void *igAdx_getMeta();
void igAdx_vtableRead();
void igObject_register();
extern char igAdx_className[];
extern char igAdx_meta[];
extern void *igAdxAfsFileList_meta;
extern void *lbl_805621F4;
void igAdx_register();
void *igAdx_getMetaCall();
void fn_802AA914();
void *fn_802AA93C();
void *fn_802AA95C();
}
extern "C" {
void igAdx_registerNow(){
 meta_registerNow((int)igAdx_register);
}
void igAdx_register(){
 fn_802AA788();
 meta_registerClass(0,(int)igAdx_meta,(int)igObject_register,(int)fn_800237D0,(int)igAdx_getMetaCall,(int)igAdx_className,8,(int)igAdx_vtableRead,(int)fn_802AA914,(int)fn_802AA93C,0);
}
void *igAdx_getMetaCall(){return igAdx_getMeta();}
void fn_802AA914(){
 fn_80065D94((int)fn_802AA95C);
}
void *fn_802AA93C(){return fn_802A8C4C();}
void *fn_802AA95C(){return fn_802A8CC4();}
void *igAdxAfsFileList_metaObject(){
 if(!igAdxAfsFileList_meta) igAdxAfsFileList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igAdxAfsFileList_meta;
}
void *igAdxAfsFileList_getMeta(){
 if(!igAdxAfsFileList_meta || !(reinterpret_cast<unsigned int *>(igAdxAfsFileList_meta)[0x24/4]&4)) igAdxAfsFileList_registerNow();
 return igAdxAfsFileList_meta;
}
}
#pragma pop
