#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_800CE2F8();
void *fn_800D7A34();
void *igGamecubeVertexArray1_1_getMetaCall();
void igGamecubeVertexArray1_1_vtableRead();
void igVertexArray1_1_register();
extern char igGamecubeVertexArray1_1_className[];
extern void *igVertexArray1_1_meta;
extern void *igGamecubeVertexArray1_1_meta;
void igGamecubeVertexArray1_1_register();
void *igGamecubeVertexArray1_1_parentMeta();
}
extern "C" {
void igGamecubeVertexArray1_1_registerNow(){
 meta_registerNow((int)igGamecubeVertexArray1_1_register);
}
void igGamecubeVertexArray1_1_register(){
 fn_800CE2F8();
 meta_registerClass(0,(int)&igGamecubeVertexArray1_1_meta,(int)igVertexArray1_1_register,(int)igGamecubeVertexArray1_1_parentMeta,(int)igGamecubeVertexArray1_1_getMetaCall,(int)igGamecubeVertexArray1_1_className,80,(int)igGamecubeVertexArray1_1_vtableRead,(int)fn_800D7A34,0,0);
}
void *igGamecubeVertexArray1_1_parentMeta(){return igVertexArray1_1_meta;}
}
#pragma pop
