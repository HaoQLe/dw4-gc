#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void fn_8003EC68(void *,int);
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
void igClearAttr_fieldInit();
void igVisualAttribute_register();
extern char igClippingStateAttr_className[];
extern char igClearAttr_className[];
extern char igClippingStateAttr_vtable[];
extern char igClearAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char igClippingStateAttr_fieldTypes[4];
extern char igClippingStateAttr_fieldNames[4];
extern char igClippingStateAttr_fieldStorage[4];
extern char igClippingStateAttr_fieldOffsets[4];
extern void *lbl_805621F4;
extern void *igClippingStateAttr_meta;
extern void *igClearAttr_meta;
void *igClippingStateAttr_getMeta();
void *igClippingStateAttr_vtableRead();
void igClippingStateAttr_arkRegister();
void igClippingStateAttr_register();
void *igClippingStateAttr_getMetaCall();
void igClippingStateAttr_fieldInit();
void *igClearAttr_getMeta();
void *igClearAttr_vtableRead();
void igClearAttr_arkRegister();
void igClearAttr_register();
void *igClearAttr_getMetaCall();
}
struct UnknownGenObject800B9608_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B9808_0 {
 void *unknown00;
 char unknown04[68];
};
extern "C" {
void *fn_800B9590(){
 if(!igClippingStateAttr_meta) igClippingStateAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igClippingStateAttr_meta;
}
}
#pragma pop
