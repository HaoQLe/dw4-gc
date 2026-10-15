#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void fn_801BE5D8();
void *igInterpretedShader_getMeta();
void igInterpretedShader_vtableRead();
void igSimpleShader_register();
extern char igInterpretedShader_className[];
extern char igInterpretedShader_dependencies[8];
extern void *igSimpleShader_meta;
extern void *igInterpretedShader_meta;
void igInterpretedShader_register();
void *igInterpretedShader_getMetaCall();
void *igInterpretedShader_parentMeta();
}
extern "C" {
void *igInterpretedShader_parentMeta(){return igSimpleShader_meta;}
}
#pragma pop
