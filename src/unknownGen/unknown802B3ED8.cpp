#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802B40A8();
void *igAppearanceListList_getMeta();
void igAppearanceListList_vtableRead();
void igObjectList_register();
extern char lbl_8041CAE0[];
extern char lbl_804CEE4C[];
extern char lbl_80534574[];
extern void *lbl_80534578;
extern void *lbl_805621F4;
void igAppearanceListList_register();
void *igAppearanceListList_getMetaCall();
}
extern "C" {
void fn_802B3ED8(){
 fn_80066188((int)igAppearanceListList_register);
}
void igAppearanceListList_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534574,(int)igObjectList_register,(int)fn_80024180,(int)igAppearanceListList_getMetaCall,(int)lbl_8041CAE0,20,(int)igAppearanceListList_vtableRead,0,0,(int)lbl_804CEE4C);
}
void *igAppearanceListList_getMetaCall(){return igAppearanceListList_getMeta();}
void *fn_802B3F94(){
 if(!lbl_80534578) lbl_80534578=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80534578;
}
void *igModelViewMatrixBoneSelectList_2_getMeta(){
 if(!lbl_80534578 || !(reinterpret_cast<unsigned int *>(lbl_80534578)[0x24/4]&4)) fn_802B40A8();
 return lbl_80534578;
}
}
#pragma pop
