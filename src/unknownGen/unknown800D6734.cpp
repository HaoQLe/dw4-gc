#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_800CE2F8();
void *fn_800D67E8();
void *igGamecubeVisualContext_getMetaCall();
void igGamecubeVisualContext_vtableRead();
void igVisualContext_register();
extern char lbl_8048C918[];
extern char igGamecubeVisualContext_className[];
extern void *igVisualContext_meta;
extern void *igGamecubeVisualContext_meta;
void igGamecubeVisualContext_register();
void *igGamecubeVisualContext_parentMeta();
}
extern "C" {
void *fn_800D6734(int p0){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=(void *)0;
 return (void *)p0;
}
void igGamecubeVisualContext_registerNow(){
 meta_registerNow((int)igGamecubeVisualContext_register);
}
void igGamecubeVisualContext_register(){
 fn_800CE2F8();
 meta_registerClass(0,(int)&igGamecubeVisualContext_meta,(int)igVisualContext_register,(int)igGamecubeVisualContext_parentMeta,(int)igGamecubeVisualContext_getMetaCall,(int)igGamecubeVisualContext_className,1768,(int)igGamecubeVisualContext_vtableRead,(int)fn_800D67E8,0,(int)lbl_8048C918);
}
void *igGamecubeVisualContext_parentMeta(){return igVisualContext_meta;}
}
#pragma pop
