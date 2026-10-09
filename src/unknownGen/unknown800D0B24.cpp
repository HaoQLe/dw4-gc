#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800CE2F8();
void *fn_800D031C();
void igContextExt_register();
void *igPointSpriteExt_fieldInit();
void *igPointSpriteExt_getMeta();
void igPointSpriteExt_vtableRead();
extern char lbl_80488BA0[];
extern char lbl_80488BAC[];
extern void *lbl_80562E3C;
void igPointSpriteExt_register();
void *igPointSpriteExt_getMetaCall();
}
extern "C" {
void fn_800D0B24(){
 fn_80066188((int)igPointSpriteExt_register);
}
void igPointSpriteExt_register(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_80562E3C,(int)igContextExt_register,(int)fn_800D031C,(int)igPointSpriteExt_getMetaCall,(int)lbl_80488BAC,392,(int)igPointSpriteExt_vtableRead,(int)igPointSpriteExt_fieldInit,0,(int)lbl_80488BA0);
}
void *igPointSpriteExt_getMetaCall(){return igPointSpriteExt_getMeta();}
}
#pragma pop
