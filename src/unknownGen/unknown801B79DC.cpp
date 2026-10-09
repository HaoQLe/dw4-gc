#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void igMultiTextureShader_fieldInit();
void *igMultiTextureShader_getMeta();
void igMultiTextureShader_vtableRead();
void igShader_register();
extern char lbl_804ADEA8[];
extern char lbl_805603CC[8];
extern void *lbl_8056491C;
extern void *lbl_80564BD4;
void igMultiTextureShader_register();
void *igMultiTextureShader_getMetaCall();
void *igMultiTextureShader_parentMeta();
}
extern "C" {
void fn_801B79DC(){
 fn_80066188((int)igMultiTextureShader_register);
}
void igMultiTextureShader_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564BD4,(int)igShader_register,(int)igMultiTextureShader_parentMeta,(int)igMultiTextureShader_getMetaCall,(int)lbl_804ADEA8,72,(int)igMultiTextureShader_vtableRead,(int)igMultiTextureShader_fieldInit,0,(int)lbl_805603CC);
}
void *igMultiTextureShader_getMetaCall(){return igMultiTextureShader_getMeta();}
void *igMultiTextureShader_parentMeta(){return lbl_8056491C;}
}
#pragma pop
