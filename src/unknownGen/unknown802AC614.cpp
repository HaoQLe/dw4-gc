#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802AA788();
void igMovieInfo_arkRegister();
void igObjectList_register();
void *igTextureBindAttrList_getMeta();
void igTextureBindAttrList_vtableRead();
extern char igTextureBindAttrList_className[];
extern char lbl_8041BDF4[];
extern char lbl_8041BE58[];
extern char igTextureBindAttrList_dependencies[];
extern char lbl_804CDBA4[];
extern char lbl_804CDBB0[];
extern char lbl_804CDBBC[];
extern char lbl_804CDBCC[];
extern char igTextureBindAttrList_meta[];
extern void *lbl_8053440C;
extern void *lbl_80534410;
extern void *igMovieInfo_meta;
void igTextureBindAttrList_register();
void *igTextureBindAttrList_getMetaCall();
}
extern "C" {
void igTextureBindAttrList_arkRegister(){
 meta_registerNow((int)igTextureBindAttrList_register);
}
void igTextureBindAttrList_register(){
 fn_802AA788();
 meta_registerClass(0,(int)igTextureBindAttrList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igTextureBindAttrList_getMetaCall,(int)igTextureBindAttrList_className,20,(int)igTextureBindAttrList_vtableRead,0,0,(int)igTextureBindAttrList_dependencies);
}
void *igTextureBindAttrList_getMetaCall(){return igTextureBindAttrList_getMeta();}
void *fn_802AC6D0(){
 if(!lbl_8053440C) lbl_8053440C=fn_800635C8(lbl_8041BDF4,lbl_804CDBA4,lbl_804CDBB0,0x3);
 return lbl_8053440C;
}
void *fn_802AC730(){
 if(!lbl_80534410) lbl_80534410=fn_800635C8(lbl_8041BE58,lbl_804CDBBC,lbl_804CDBCC,0x4);
 return lbl_80534410;
}
void *igMovieInfo_create(void *object){
 igMovieInfo_arkRegister();
 return meta_createInstance(igMovieInfo_meta,object);
}
void *igMovieInfo_getMeta(){
 if(!igMovieInfo_meta || !(reinterpret_cast<unsigned int *>(igMovieInfo_meta)[0x24/4]&4)) igMovieInfo_arkRegister();
 return igMovieInfo_meta;
}
}
#pragma pop
