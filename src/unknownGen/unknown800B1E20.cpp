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
void igProjectionMatrixAttr_arkRegister();
void *fn_800C23E4(int);
void *fn_80218120();
void igVisualAttribute_register();
extern char igRefVertexBlendMatrixAttr_className[];
extern char igRefVertexBlendMatrixAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char igRefVertexBlendMatrixAttr_dependencies[8];
extern char igRefVertexBlendMatrixAttr_fieldTypes[8];
extern char igRefVertexBlendMatrixAttr_fieldNames[8];
extern char igRefVertexBlendMatrixAttr_fieldStorage[8];
extern char igRefVertexBlendMatrixAttr_fieldOffsets[8];
extern void *lbl_805621F4;
extern void *igRefVertexBlendMatrixAttr_meta;
extern void *igProjectionMatrixAttr_meta;
void *igRefVertexBlendMatrixAttr_getMeta();
void *igRefVertexBlendMatrixAttr_vtableRead();
void igRefVertexBlendMatrixAttr_arkRegister();
void igRefVertexBlendMatrixAttr_register();
void *igRefVertexBlendMatrixAttr_getMetaCall();
void igRefVertexBlendMatrixAttr_fieldInit();
}
struct UnknownGenRoot800B1BF4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B1BF4(){igObject_construct(this);}
};
struct UnknownGenObject800B1BF4 : UnknownGenRoot800B1BF4 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 char unknown10[16];
 inline ~UnknownGenObject800B1BF4(){unknown00=igRefVertexBlendMatrixAttr_vtable;}
};
extern "C" {
void *fn_800B1E20(){
 if(!igProjectionMatrixAttr_meta) igProjectionMatrixAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igProjectionMatrixAttr_meta;
}
}
#pragma pop
