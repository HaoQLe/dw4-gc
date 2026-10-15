#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_800CE2F8();
void fn_800D80E8();
void *igGamecubePointSpriteExt_getMetaCall();
void igGamecubePointSpriteExt_vtableRead();
void igPointSpriteExt_register();
extern char lbl_8048E51C[];
extern char igGamecubePointSpriteExt_className[];
extern void *igPointSpriteExt_meta;
extern void *igGamecubePointSpriteExt_meta;
void igGamecubePointSpriteExt_register();
void *igGamecubePointSpriteExt_parentMeta();
}
extern "C" {
void igGamecubePointSpriteExt_registerNow(){
 meta_registerNow((int)igGamecubePointSpriteExt_register);
}
void igGamecubePointSpriteExt_register(){
 fn_800CE2F8();
 meta_registerClass(0,(int)&igGamecubePointSpriteExt_meta,(int)igPointSpriteExt_register,(int)igGamecubePointSpriteExt_parentMeta,(int)igGamecubePointSpriteExt_getMetaCall,(int)igGamecubePointSpriteExt_className,508,(int)igGamecubePointSpriteExt_vtableRead,(int)fn_800D80E8,0,(int)lbl_8048E51C);
}
void *igGamecubePointSpriteExt_parentMeta(){return igPointSpriteExt_meta;}
}
#pragma pop
