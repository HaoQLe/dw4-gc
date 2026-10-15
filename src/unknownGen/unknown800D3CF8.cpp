#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024D1C();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
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
void igGfxStateModifierList_arkRegister();
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
}
#pragma pop
