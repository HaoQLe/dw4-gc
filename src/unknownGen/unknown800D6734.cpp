#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800CE2F8();
void *fn_800D67E8();
void *igGamecubeVisualContext_getMetaCall();
void igGamecubeVisualContext_vtableRead();
void igVisualContext_register();
extern char lbl_8048C918[];
extern char lbl_8048C92C[];
extern void *lbl_80562D00;
extern void *lbl_80563100;
void igGamecubeVisualContext_register();
void *igGamecubeVisualContext_parentMeta();
}
extern "C" {
void *fn_800D6734(int p0){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=(void *)0;
 return (void *)p0;
}
void fn_800D6740(){
 fn_80066188((int)igGamecubeVisualContext_register);
}
void igGamecubeVisualContext_register(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_80563100,(int)igVisualContext_register,(int)igGamecubeVisualContext_parentMeta,(int)igGamecubeVisualContext_getMetaCall,(int)lbl_8048C92C,1768,(int)igGamecubeVisualContext_vtableRead,(int)fn_800D67E8,0,(int)lbl_8048C918);
}
void *igGamecubeVisualContext_parentMeta(){return lbl_80562D00;}
}
#pragma pop
