#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void fn_8003EC68(void *,int);
void fn_8004D4BC(void *,float);
void *fn_800607F4(void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800ABC8C();
void *fn_800AC294();
void igMatrixConstantAttr_arkRegister();
void fn_800C17B4();
void *fn_800C1848();
void igVisualAttribute_register();
extern char igMipMapAttr_className[];
extern char igMatrixOptStateAttr_className[];
extern char igMipMapAttr_vtable[];
extern char igMatrixOptStateAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char igMipMapAttr_fieldTypes[8];
extern char igMipMapAttr_fieldNames[8];
extern char igMipMapAttr_fieldStorage[8];
extern char igMipMapAttr_fieldOffsets[8];
extern char igMatrixOptStateAttr_fieldTypes[4];
extern char igMatrixOptStateAttr_fieldNames[4];
extern char igMatrixOptStateAttr_fieldStorage[4];
extern char igMatrixOptStateAttr_fieldOffsets[4];
extern void *lbl_805621F4;
extern void *igMipMapAttr_meta;
extern void *igMatrixOptStateAttr_meta;
extern void *igMatrixConstantAttr_meta;
extern char lbl_8056681C[4];
void *igMipMapAttr_getMeta();
void *igMipMapAttr_vtableRead();
void igMipMapAttr_arkRegister();
void igMipMapAttr_register();
void *igMipMapAttr_getMetaCall();
void igMipMapAttr_fieldInit();
void *igMatrixOptStateAttr_getMeta();
void *igMatrixOptStateAttr_vtableRead();
void igMatrixOptStateAttr_arkRegister();
void igMatrixOptStateAttr_register();
void *igMatrixOptStateAttr_getMetaCall();
void igMatrixOptStateAttr_fieldInit();
}
struct UnknownGenObject800B4454_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B4658_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *igMatrixConstantAttr_getMeta(){
 if(!igMatrixConstantAttr_meta || !(reinterpret_cast<unsigned int *>(igMatrixConstantAttr_meta)[0x24/4]&4)) igMatrixConstantAttr_arkRegister();
 return igMatrixConstantAttr_meta;
}
}
#pragma pop
