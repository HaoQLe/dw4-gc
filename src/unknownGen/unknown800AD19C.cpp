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
void *igVertexBlendMatrixAttrList_getMeta(){
 if(!igVertexBlendMatrixAttrList_meta || !(reinterpret_cast<unsigned int *>(igVertexBlendMatrixAttrList_meta)[0x24/4]&4)) igVertexBlendMatrixAttrList_arkRegister();
 return igVertexBlendMatrixAttrList_meta;
}
void *igVertexBlendMatrixAttrList_vtableRead(){
 UnknownGenObject800AD1D8_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_8047E3E4;
 object.unknown00=igVertexBlendMatrixAttrList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igVertexBlendMatrixAttrList_arkRegister(){
 meta_registerNow((int)igVertexBlendMatrixAttrList_register);
}
void igVertexBlendMatrixAttrList_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igVertexBlendMatrixAttrList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igVertexBlendMatrixAttrList_getMetaCall,(int)igVertexBlendMatrixAttrList_className,20,(int)igVertexBlendMatrixAttrList_vtableRead,0,0,(int)igVertexBlendMatrixAttrList_dependencies);
}
void *igVertexBlendMatrixAttrList_getMetaCall(){return igVertexBlendMatrixAttrList_getMeta();}
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
