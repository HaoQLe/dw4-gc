#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void igShader2_register();
void igSimpleShader_fieldInit();
void *igSimpleShader_getMeta();
void igSimpleShader_vtableRead();
extern char lbl_804AC92C[];
extern char lbl_804AC940[];
extern void *lbl_805648BC;
extern void *lbl_8056490C;
void igSimpleShader_register();
void *igSimpleShader_getMetaCall();
void *igSimpleShader_parentMeta();
}
extern "C" {
void fn_801B0714(){
 fn_80066188((int)igSimpleShader_register);
}
void igSimpleShader_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_805648BC,(int)igShader2_register,(int)igSimpleShader_parentMeta,(int)igSimpleShader_getMetaCall,(int)lbl_804AC940,52,(int)igSimpleShader_vtableRead,(int)igSimpleShader_fieldInit,0,(int)lbl_804AC92C);
}
void *igSimpleShader_getMetaCall(){return igSimpleShader_getMeta();}
void *igSimpleShader_parentMeta(){return lbl_8056490C;}
}
#pragma pop
