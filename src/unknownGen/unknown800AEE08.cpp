#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_800ABC8C();
void igTextureAttr_register();
void igTextureCubeAttr_fieldInit();
void *igTextureCubeAttr_getMeta();
void igTextureCubeAttr_vtableRead();
extern char igTextureCubeAttr_className[];
extern char igTextureCubeAttr_dependencies[8];
extern void *igTextureCubeAttr_meta;
extern void *igTextureAttr_meta;
void igTextureCubeAttr_register();
void *igTextureCubeAttr_getMetaCall();
void *igTextureCubeAttr_parentMeta();
}
extern "C" {
void *igTextureCubeAttr_parentMeta(){return igTextureAttr_meta;}
}
#pragma pop
