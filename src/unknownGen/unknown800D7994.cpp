#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800CE2F8();
void *fn_800D7A34();
void *igGamecubeVertexArray1_1_getMetaCall();
void igGamecubeVertexArray1_1_vtableRead();
void igVertexArray1_1_register();
extern char lbl_8048E3CC[];
extern void *lbl_80562DDC;
extern void *lbl_805633C0;
void igGamecubeVertexArray1_1_register();
void *igGamecubeVertexArray1_1_parentMeta();
}
extern "C" {
void fn_800D7994(){
 fn_80066188((int)igGamecubeVertexArray1_1_register);
}
void igGamecubeVertexArray1_1_register(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_805633C0,(int)igVertexArray1_1_register,(int)igGamecubeVertexArray1_1_parentMeta,(int)igGamecubeVertexArray1_1_getMetaCall,(int)lbl_8048E3CC,80,(int)igGamecubeVertexArray1_1_vtableRead,(int)fn_800D7A34,0,0);
}
void *igGamecubeVertexArray1_1_parentMeta(){return lbl_80562DDC;}
}
#pragma pop
