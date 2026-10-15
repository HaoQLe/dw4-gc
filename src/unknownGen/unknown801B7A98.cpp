#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void igMultiTextureShader_fieldInit();
void *igMultiTextureShader_getMeta();
void igMultiTextureShader_vtableRead();
void igShader_register();
extern char igMultiTextureShader_className[];
extern char igMultiTextureShader_dependencies[8];
extern void *igShader_meta;
extern void *igMultiTextureShader_meta;
void igMultiTextureShader_register();
void *igMultiTextureShader_getMetaCall();
void *igMultiTextureShader_parentMeta();
}
extern "C" {
void *igMultiTextureShader_parentMeta(){return igShader_meta;}
}
#pragma pop
