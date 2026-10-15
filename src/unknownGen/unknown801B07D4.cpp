#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void igShader2_register();
void igSimpleShader_fieldInit();
void *igSimpleShader_getMeta();
void igSimpleShader_vtableRead();
extern char igSimpleShader_dependencies[];
extern char igSimpleShader_className[];
extern void *igSimpleShader_meta;
extern void *igShader2_meta;
void igSimpleShader_register();
void *igSimpleShader_getMetaCall();
void *igSimpleShader_parentMeta();
}
extern "C" {
void *igSimpleShader_parentMeta(){return igShader2_meta;}
}
#pragma pop
