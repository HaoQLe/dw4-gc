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
extern char lbl_805603CC[8];
extern void *igShader_meta;
extern void *igMultiTextureShader_meta;
void igMultiTextureShader_register();
void *igMultiTextureShader_getMetaCall();
void *igMultiTextureShader_parentMeta();
}
extern "C" {
void igMultiTextureShader_registerNow(){
 meta_registerNow((int)igMultiTextureShader_register);
}
void igMultiTextureShader_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igMultiTextureShader_meta,(int)igShader_register,(int)igMultiTextureShader_parentMeta,(int)igMultiTextureShader_getMetaCall,(int)igMultiTextureShader_className,72,(int)igMultiTextureShader_vtableRead,(int)igMultiTextureShader_fieldInit,0,(int)lbl_805603CC);
}
void *igMultiTextureShader_getMetaCall(){return igMultiTextureShader_getMeta();}
void *igMultiTextureShader_parentMeta(){return igShader_meta;}
}
#pragma pop
