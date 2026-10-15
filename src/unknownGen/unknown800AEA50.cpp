#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void igTextureCubeAttr_registerNow();
void *fn_800C3E0C();
extern char igVisualContextAttrDefaultManager_className[];
extern void *lbl_805621F4;
extern void *lbl_80562524;
extern void *igTextureCubeAttr_meta;
}
extern "C" {
void *fn_800AEA50(){return fn_800C3E0C();}
void *fn_800AEA70(){
 char *data=igVisualContextAttrDefaultManager_className;
 if(!lbl_80562524) lbl_80562524=fn_800635C8(data+0x6D0,data+0x6B8,data+0x6C4,0x3);
 return lbl_80562524;
}
void *fn_800AEABC(){
 if(!igTextureCubeAttr_meta) igTextureCubeAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igTextureCubeAttr_meta;
}
void *igTextureCubeAttr_getMeta(){
 if(!igTextureCubeAttr_meta || !(reinterpret_cast<unsigned int *>(igTextureCubeAttr_meta)[0x24/4]&4)) igTextureCubeAttr_registerNow();
 return igTextureCubeAttr_meta;
}
}
#pragma pop
