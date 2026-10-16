#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800ABC8C();
void *fn_800AC294();
void *fn_800C4BF8(int);
void igCustomStateCollectionAttr_register();
void igTimeAttr_fieldInit();
void igVisualAttribute_register();
extern char igVectorConstantAttr_className[];
extern char igTimeAttr_className[];
extern char igVectorConstantAttr_vtable[];
extern char igTimeAttr_vtable[];
extern char lbl_8047CD74[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char igVectorConstantAttr_fieldTypes[8];
extern char igVectorConstantAttr_fieldNames[8];
extern char igVectorConstantAttr_fieldStorage[8];
extern char igVectorConstantAttr_fieldOffsets[8];
extern void *lbl_805621F4;
extern void *igVectorConstantAttr_meta;
extern void *igTimeAttr_meta;
extern void *igCustomStateCollectionAttr_meta;
void *igVectorConstantAttr_getMeta();
void *igVectorConstantAttr_vtableRead();
void igVectorConstantAttr_arkRegister();
void igVectorConstantAttr_register();
void *igVectorConstantAttr_getMetaCall();
void *fn_800AD708();
void igVectorConstantAttr_fieldInit();
void *igTimeAttr_getMeta();
void *igTimeAttr_vtableRead();
void igTimeAttr_arkRegister();
void igTimeAttr_register();
void *igTimeAttr_getMetaCall();
}
struct UnknownGenObject800AD5EC_0 {
 void *unknown00;
 char unknown04[36];
};
struct UnknownGenObject800AD840_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800AD7C8(){
 if(!igTimeAttr_meta) igTimeAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igTimeAttr_meta;
}
}
#pragma pop
