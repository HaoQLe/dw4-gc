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
void igInterpretedShader_arkRegister(){
 meta_registerNow((int)igInterpretedShader_register);
}
void igInterpretedShader_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igInterpretedShader_meta,(int)igSimpleShader_register,(int)igInterpretedShader_parentMeta,(int)igInterpretedShader_getMetaCall,(int)igInterpretedShader_className,52,(int)igInterpretedShader_vtableRead,(int)fn_801BE5D8,0,(int)igInterpretedShader_dependencies);
}
void *igInterpretedShader_getMetaCall(){return igInterpretedShader_getMeta();}
void *igInterpretedShader_parentMeta(){return igSimpleShader_meta;}
}
#pragma pop
