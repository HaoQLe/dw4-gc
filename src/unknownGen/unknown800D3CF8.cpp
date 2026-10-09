#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024D1C();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800CE2F8();
void fn_800D3E80();
void igDataList_register();
extern char lbl_80472FA0[];
extern char lbl_8048A0B4[];
extern char lbl_8049365C[];
extern char lbl_804936BC[];
extern void *lbl_805621F4;
extern void *lbl_80563034;
void *igGfxStateModifierList_getMeta();
void *igGfxStateModifierList_vtableRead();
void fn_800D3DC8();
void igGfxStateModifierList_register();
void *igGfxStateModifierList_getMetaCall();
}
struct UnknownGenObject800D3D70_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800D3CF8(){
 if(!lbl_80563034) lbl_80563034=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563034;
}
void *igGfxStateModifierList_getMeta(){
 if(!lbl_80563034 || !(reinterpret_cast<unsigned int *>(lbl_80563034)[0x24/4]&4)) fn_800D3DC8();
 return lbl_80563034;
}
void *igGfxStateModifierList_vtableRead(){
 UnknownGenObject800D3D70_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_804936BC;
 object.unknown00=lbl_8049365C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800D3DC8(){
 fn_80066188((int)igGfxStateModifierList_register);
}
void igGfxStateModifierList_register(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_80563034,(int)igDataList_register,(int)fn_80024D1C,(int)igGfxStateModifierList_getMetaCall,(int)lbl_8048A0B4,20,(int)igGfxStateModifierList_vtableRead,(int)fn_800D3E80,0,0);
}
void *igGfxStateModifierList_getMetaCall(){return igGfxStateModifierList_getMeta();}
}
#pragma pop
