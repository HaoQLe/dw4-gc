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
void igSimpleShader_arkRegister(){
 meta_registerNow((int)igSimpleShader_register);
}
void igSimpleShader_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igSimpleShader_meta,(int)igShader2_register,(int)igSimpleShader_parentMeta,(int)igSimpleShader_getMetaCall,(int)igSimpleShader_className,52,(int)igSimpleShader_vtableRead,(int)igSimpleShader_fieldInit,0,(int)igSimpleShader_dependencies);
}
void *igSimpleShader_getMetaCall(){return igSimpleShader_getMeta();}
void *igSimpleShader_parentMeta(){return igShader2_meta;}
}
#pragma pop
