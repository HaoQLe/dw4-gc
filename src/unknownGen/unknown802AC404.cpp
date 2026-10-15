#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802AA788();
void igTextureBindAttrList_arkRegister();
void *igMovieInfoList_getMeta();
void igMovieInfoList_vtableRead();
void igObjectList_register();
extern char igMovieInfoList_className[];
extern char igMovieInfoList_dependencies[];
extern char igMovieInfoList_meta[];
extern void *igTextureBindAttrList_meta;
extern void *lbl_805621F4;
void igMovieInfoList_register();
void *igMovieInfoList_getMetaCall();
}
extern "C" {
void igMovieInfoList_arkRegister(){
 meta_registerNow((int)igMovieInfoList_register);
}
void igMovieInfoList_register(){
 fn_802AA788();
 meta_registerClass(0,(int)igMovieInfoList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igMovieInfoList_getMetaCall,(int)igMovieInfoList_className,20,(int)igMovieInfoList_vtableRead,0,0,(int)igMovieInfoList_dependencies);
}
void *igMovieInfoList_getMetaCall(){return igMovieInfoList_getMeta();}
void *igTextureBindAttrList_create(void *object){
 igTextureBindAttrList_arkRegister();
 return meta_createInstance(igTextureBindAttrList_meta,object);
}
void *igTextureBindAttrList_metaObject(){
 if(!igTextureBindAttrList_meta) igTextureBindAttrList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igTextureBindAttrList_meta;
}
void *igTextureBindAttrList_getMeta(){
 if(!igTextureBindAttrList_meta || !(reinterpret_cast<unsigned int *>(igTextureBindAttrList_meta)[0x24/4]&4)) igTextureBindAttrList_arkRegister();
 return igTextureBindAttrList_meta;
}
}
#pragma pop
