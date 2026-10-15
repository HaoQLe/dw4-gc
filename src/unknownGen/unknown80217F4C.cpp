#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023FDC();
void *fn_80024180();
void *fn_80024D1C();
void *meta_newMetaObject(void *);
void *fn_80053998(void *,void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void fn_8006588C(void *,void *,void *);
UnknownGenFactory *fn_800658F8(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void *fn_8011FFD8();
void fn_80216620();
void igMatrixObject_arkRegister();
void igDataList_register();
void igNonRefCountedObjectList_register();
void igObjectList_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char igNonRefCountedObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igMatrixStack_className[];
extern char igNonRefCountedMatrixObjectList_className[];
extern char igMatrixObjectList_className[];
extern char igMatrixObjectList_vtable[];
extern char lbl_804BC288[];
extern char igNonRefCountedMatrixObjectList_vtable[];
extern char lbl_804BC350[];
extern char igMatrixStack_vtable[];
extern char lbl_804BC4D4[];
extern char lbl_80560B70[6];
extern char igNonRefCountedMatrixObjectList_dependencies[8];
extern char igMatrixObjectList_dependencies[8];
extern void *lbl_805621F4;
extern void *igMatrixStack_meta;
extern char lbl_80565A50[4];
extern void *igNonRefCountedMatrixObjectList_meta;
extern void *igMatrixObjectList_meta;
extern void *igMatrixObject_meta;
void *igMatrixStack_getMeta();
void *igMatrixStack_vtableRead();
void igMatrixStack_arkRegister();
void igMatrixStack_register();
void *igMatrixStack_getMetaCall();
void fn_80217CBC();
void *igNonRefCountedMatrixObjectList_getMeta();
void *igNonRefCountedMatrixObjectList_vtableRead();
void igNonRefCountedMatrixObjectList_arkRegister();
void igNonRefCountedMatrixObjectList_register();
void *igNonRefCountedMatrixObjectList_getMetaCall();
void *igMatrixObjectList_getMeta();
void *igMatrixObjectList_vtableRead();
void igMatrixObjectList_arkRegister();
void igMatrixObjectList_register();
void *igMatrixObjectList_getMetaCall();
}
struct UnknownGenObject80217BAC_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject80217DF0_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject80217FC4_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_80217F4C(){
 if(!igMatrixObjectList_meta) igMatrixObjectList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igMatrixObjectList_meta;
}
}
#pragma pop
