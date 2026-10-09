#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void fn_801BE5D8();
void *igInterpretedShader_getMeta();
void igInterpretedShader_vtableRead();
void igSimpleShader_register();
extern char lbl_804AF354[];
extern char lbl_80560594[8];
extern void *lbl_805648BC;
extern void *lbl_80564E7C;
void igInterpretedShader_register();
void *igInterpretedShader_getMetaCall();
void *igInterpretedShader_parentMeta();
}
extern "C" {
void fn_801BE514(){
 fn_80066188((int)igInterpretedShader_register);
}
void igInterpretedShader_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564E7C,(int)igSimpleShader_register,(int)igInterpretedShader_parentMeta,(int)igInterpretedShader_getMetaCall,(int)lbl_804AF354,52,(int)igInterpretedShader_vtableRead,(int)fn_801BE5D8,0,(int)lbl_80560594);
}
void *igInterpretedShader_getMetaCall(){return igInterpretedShader_getMeta();}
void *igInterpretedShader_parentMeta(){return lbl_805648BC;}
}
#pragma pop
