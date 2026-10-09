#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void igIniShaderFactory_fieldInit();
void *igIniShaderFactory_getMeta();
void igIniShaderFactory_vtableRead();
void igShaderFactory_register();
extern char lbl_804AF37C[];
extern char lbl_804AF390[];
extern void *lbl_805648E8;
extern void *lbl_80564E88;
void igIniShaderFactory_register();
void *igIniShaderFactory_getMetaCall();
void *igIniShaderFactory_parentMeta();
}
extern "C" {
void fn_801BEBEC(){
 fn_80066188((int)igIniShaderFactory_register);
}
void igIniShaderFactory_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564E88,(int)igShaderFactory_register,(int)igIniShaderFactory_parentMeta,(int)igIniShaderFactory_getMetaCall,(int)lbl_804AF390,60,(int)igIniShaderFactory_vtableRead,(int)igIniShaderFactory_fieldInit,0,(int)lbl_804AF37C);
}
void *igIniShaderFactory_getMetaCall(){return igIniShaderFactory_getMeta();}
void *igIniShaderFactory_parentMeta(){return lbl_805648E8;}
}
#pragma pop
