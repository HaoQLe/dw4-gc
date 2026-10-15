#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80046E58(void *,void *);
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
void igVertexBlendMatrixListAttr_arkRegister();
void *fn_800CDF6C();
void igVisualAttribute_register();
extern char igVertexPipelineModeAttr_className[];
extern char igVertexBlendStateAttr_className[];
extern char igVertexPipelineModeAttr_vtable[];
extern char igVertexBlendStateAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char igVertexPipelineModeAttr_fieldTypes[4];
extern char igVertexPipelineModeAttr_fieldNames[4];
extern char igVertexPipelineModeAttr_fieldStorage[4];
extern char igVertexPipelineModeAttr_fieldOffsets[4];
extern char lbl_8055DED8[4];
extern char igVertexBlendStateAttr_fieldTypes[4];
extern char igVertexBlendStateAttr_fieldNames[4];
extern char igVertexBlendStateAttr_fieldStorage[4];
extern char igVertexBlendStateAttr_fieldOffsets[4];
extern void *igVertexPipelineModeAttr_meta;
extern void *igVertexBlendStateAttr_meta;
extern void *igVertexBlendMatrixListAttr_meta;
void *igVertexPipelineModeAttr_getMeta();
void *igVertexPipelineModeAttr_vtableRead();
void igVertexPipelineModeAttr_arkRegister();
void igVertexPipelineModeAttr_register();
void *igVertexPipelineModeAttr_getMetaCall();
void igVertexPipelineModeAttr_fieldInit();
void *igVertexBlendStateAttr_getMeta();
void *igVertexBlendStateAttr_vtableRead();
void igVertexBlendStateAttr_arkRegister();
void igVertexBlendStateAttr_register();
void *igVertexBlendStateAttr_getMetaCall();
void igVertexBlendStateAttr_fieldInit();
}
struct UnknownGenObject800ACB6C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800ACD44_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *igVertexBlendMatrixListAttr_create(void *object){
 igVertexBlendMatrixListAttr_arkRegister();
 return meta_createInstance(igVertexBlendMatrixListAttr_meta,object);
}
void *igVertexBlendMatrixListAttr_getMeta(){
 if(!igVertexBlendMatrixListAttr_meta || !(reinterpret_cast<unsigned int *>(igVertexBlendMatrixListAttr_meta)[0x24/4]&4)) igVertexBlendMatrixListAttr_arkRegister();
 return igVertexBlendMatrixListAttr_meta;
}
}
#pragma pop
