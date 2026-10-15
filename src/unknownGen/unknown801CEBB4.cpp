#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void igEnvironmentMapShader2_register();
void *igGamecubeEnvironmentMapShader_fieldInit();
void *igGamecubeEnvironmentMapShader_getMetaCall();
void igGamecubeEnvironmentMapShader_vtableRead();
extern char lbl_804B2BC8[];
extern char igGamecubeEnvironmentMapShader_className[];
extern void *igEnvironmentMapShader2_meta;
extern void *igGamecubeEnvironmentMapShader_meta;
void igGamecubeEnvironmentMapShader_register();
void *igGamecubeEnvironmentMapShader_parentMeta();
}
extern "C" {
void igGamecubeEnvironmentMapShader_registerNow(){
 meta_registerNow((int)igGamecubeEnvironmentMapShader_register);
}
void igGamecubeEnvironmentMapShader_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igGamecubeEnvironmentMapShader_meta,(int)igEnvironmentMapShader2_register,(int)igGamecubeEnvironmentMapShader_parentMeta,(int)igGamecubeEnvironmentMapShader_getMetaCall,(int)igGamecubeEnvironmentMapShader_className,136,(int)igGamecubeEnvironmentMapShader_vtableRead,(int)igGamecubeEnvironmentMapShader_fieldInit,0,(int)lbl_804B2BC8);
}
void *igGamecubeEnvironmentMapShader_parentMeta(){return igEnvironmentMapShader2_meta;}
}
#pragma pop
