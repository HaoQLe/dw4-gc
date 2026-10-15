#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024D1C();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800CE2F8();
void fn_800D3E80();
void igDataList_register();
extern char igDataList_vtable[];
extern char igGfxStateModifierList_className[];
extern char igGfxStateModifierList_vtable[];
extern char lbl_804936BC[];
extern void *lbl_805621F4;
extern void *igGfxStateModifierList_meta;
void *igGfxStateModifierList_getMeta();
void *igGfxStateModifierList_vtableRead();
void igGfxStateModifierList_registerNow();
void igGfxStateModifierList_register();
void *igGfxStateModifierList_getMetaCall();
}
struct UnknownGenObject800D3D70_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800D3CF8(){
 if(!igGfxStateModifierList_meta) igGfxStateModifierList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igGfxStateModifierList_meta;
}
void *igGfxStateModifierList_getMeta(){
 if(!igGfxStateModifierList_meta || !(reinterpret_cast<unsigned int *>(igGfxStateModifierList_meta)[0x24/4]&4)) igGfxStateModifierList_registerNow();
 return igGfxStateModifierList_meta;
}
void *igGfxStateModifierList_vtableRead(){
 UnknownGenObject800D3D70_0 object;
 fn_8006665C(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_804936BC;
 object.unknown00=igGfxStateModifierList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igGfxStateModifierList_registerNow(){
 meta_registerNow((int)igGfxStateModifierList_register);
}
void igGfxStateModifierList_register(){
 fn_800CE2F8();
 meta_registerClass(0,(int)&igGfxStateModifierList_meta,(int)igDataList_register,(int)fn_80024D1C,(int)igGfxStateModifierList_getMetaCall,(int)igGfxStateModifierList_className,20,(int)igGfxStateModifierList_vtableRead,(int)fn_800D3E80,0,0);
}
void *igGfxStateModifierList_getMetaCall(){return igGfxStateModifierList_getMeta();}
}
#pragma pop
