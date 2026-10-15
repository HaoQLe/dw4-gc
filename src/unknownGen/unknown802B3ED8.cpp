#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802B40A8();
void *igAppearanceListList_getMeta();
void igAppearanceListList_vtableRead();
void igObjectList_register();
extern char igAppearanceListList_className[];
extern char igAppearanceListList_dependencies[];
extern char igAppearanceListList_meta[];
extern void *igModelViewMatrixBoneSelectList_80534578_meta;
extern void *lbl_805621F4;
void igAppearanceListList_register();
void *igAppearanceListList_getMetaCall();
}
extern "C" {
void igAppearanceListList_arkRegister(){
 meta_registerNow((int)igAppearanceListList_register);
}
void igAppearanceListList_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)igAppearanceListList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igAppearanceListList_getMetaCall,(int)igAppearanceListList_className,20,(int)igAppearanceListList_vtableRead,0,0,(int)igAppearanceListList_dependencies);
}
void *igAppearanceListList_getMetaCall(){return igAppearanceListList_getMeta();}
void *igModelViewMatrixBoneSelectList_80534578_metaObject(){
 if(!igModelViewMatrixBoneSelectList_80534578_meta) igModelViewMatrixBoneSelectList_80534578_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igModelViewMatrixBoneSelectList_80534578_meta;
}
void *igModelViewMatrixBoneSelectList_2_getMeta(){
 if(!igModelViewMatrixBoneSelectList_80534578_meta || !(reinterpret_cast<unsigned int *>(igModelViewMatrixBoneSelectList_80534578_meta)[0x24/4]&4)) fn_802B40A8();
 return igModelViewMatrixBoneSelectList_80534578_meta;
}
}
#pragma pop
