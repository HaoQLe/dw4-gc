#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_800CE2F8();
void *fn_800D031C();
void igContextExt_register();
void *igPointSpriteExt_fieldInit();
void *igPointSpriteExt_getMeta();
void igPointSpriteExt_vtableRead();
extern char lbl_80488BA0[];
extern char igPointSpriteExt_className[];
extern void *igPointSpriteExt_meta;
void igPointSpriteExt_register();
void *igPointSpriteExt_getMetaCall();
}
extern "C" {
void igPointSpriteExt_registerNow(){
 meta_registerNow((int)igPointSpriteExt_register);
}
void igPointSpriteExt_register(){
 fn_800CE2F8();
 meta_registerClass(0,(int)&igPointSpriteExt_meta,(int)igContextExt_register,(int)fn_800D031C,(int)igPointSpriteExt_getMetaCall,(int)igPointSpriteExt_className,392,(int)igPointSpriteExt_vtableRead,(int)igPointSpriteExt_fieldInit,0,(int)lbl_80488BA0);
}
void *igPointSpriteExt_getMetaCall(){return igPointSpriteExt_getMeta();}
}
#pragma pop
