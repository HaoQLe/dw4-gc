#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800CE2F8();
void fn_800D80E8();
void *igGamecubePointSpriteExt_getMetaCall();
void igGamecubePointSpriteExt_vtableRead();
void igPointSpriteExt_register();
extern char lbl_8048E51C[];
extern char lbl_8048E530[];
extern void *lbl_80562E3C;
extern void *lbl_80563400;
void igGamecubePointSpriteExt_register();
void *igGamecubePointSpriteExt_parentMeta();
}
extern "C" {
void fn_800D8040(){
 fn_80066188((int)igGamecubePointSpriteExt_register);
}
void igGamecubePointSpriteExt_register(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_80563400,(int)igPointSpriteExt_register,(int)igGamecubePointSpriteExt_parentMeta,(int)igGamecubePointSpriteExt_getMetaCall,(int)lbl_8048E530,508,(int)igGamecubePointSpriteExt_vtableRead,(int)fn_800D80E8,0,(int)lbl_8048E51C);
}
void *igGamecubePointSpriteExt_parentMeta(){return lbl_80562E3C;}
}
#pragma pop
