#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void igEnvironmentMapShader2_register();
void *igGamecubeEnvironmentMapShader_fieldInit();
void *igGamecubeEnvironmentMapShader_getMetaCall();
void igGamecubeEnvironmentMapShader_vtableRead();
extern char lbl_804B2BC8[];
extern char lbl_804B2BDC[];
extern void *lbl_80564F20;
extern void *lbl_805655D8;
void igGamecubeEnvironmentMapShader_register();
void *igGamecubeEnvironmentMapShader_parentMeta();
}
extern "C" {
void fn_801CEBB4(){
 fn_80066188((int)igGamecubeEnvironmentMapShader_register);
}
void igGamecubeEnvironmentMapShader_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_805655D8,(int)igEnvironmentMapShader2_register,(int)igGamecubeEnvironmentMapShader_parentMeta,(int)igGamecubeEnvironmentMapShader_getMetaCall,(int)lbl_804B2BDC,136,(int)igGamecubeEnvironmentMapShader_vtableRead,(int)igGamecubeEnvironmentMapShader_fieldInit,0,(int)lbl_804B2BC8);
}
void *igGamecubeEnvironmentMapShader_parentMeta(){return lbl_80564F20;}
}
#pragma pop
