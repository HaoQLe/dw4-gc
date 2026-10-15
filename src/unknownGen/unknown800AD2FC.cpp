#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800ABC8C();
void igVertexBlendMatrixAttr_arkRegister();
void igObjectList_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igVertexBlendMatrixAttrList_className[];
extern char igVertexBlendMatrixAttrList_vtable[];
extern char lbl_8047E3E4[];
extern char igVertexBlendMatrixAttrList_dependencies[8];
extern void *igVertexBlendMatrixAttrList_meta;
extern void *igVertexBlendMatrixAttr_meta;
void *igVertexBlendMatrixAttrList_getMeta();
void *igVertexBlendMatrixAttrList_vtableRead();
void igVertexBlendMatrixAttrList_arkRegister();
void igVertexBlendMatrixAttrList_register();
void *igVertexBlendMatrixAttrList_getMetaCall();
}
struct UnknownGenObject800AD1D8_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *igVertexBlendMatrixAttr_create(void *object){
 igVertexBlendMatrixAttr_arkRegister();
 return meta_createInstance(igVertexBlendMatrixAttr_meta,object);
}
void *igVertexBlendMatrixAttr_getMeta(){
 if(!igVertexBlendMatrixAttr_meta || !(reinterpret_cast<unsigned int *>(igVertexBlendMatrixAttr_meta)[0x24/4]&4)) igVertexBlendMatrixAttr_arkRegister();
 return igVertexBlendMatrixAttr_meta;
}
}
#pragma pop
