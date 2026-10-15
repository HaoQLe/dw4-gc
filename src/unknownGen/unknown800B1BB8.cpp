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
void igProjectionMatrixAttr_registerNow();
void *fn_800C23E4(int);
void *fn_80218120();
void igVisualAttribute_register();
extern char igRefVertexBlendMatrixAttr_className[];
extern char igRefVertexBlendMatrixAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_8055E23C[8];
extern char lbl_8055E244[8];
extern char lbl_8055E24C[8];
extern char lbl_8055E254[8];
extern char lbl_8055E25C[8];
extern void *lbl_805621F4;
extern void *igRefVertexBlendMatrixAttr_meta;
extern void *igProjectionMatrixAttr_meta;
void *igRefVertexBlendMatrixAttr_getMeta();
void *igRefVertexBlendMatrixAttr_vtableRead();
void igRefVertexBlendMatrixAttr_registerNow();
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
void *igRefVertexBlendMatrixAttr_getMeta(){
 if(!igRefVertexBlendMatrixAttr_meta || !(reinterpret_cast<unsigned int *>(igRefVertexBlendMatrixAttr_meta)[0x24/4]&4)) igRefVertexBlendMatrixAttr_registerNow();
 return igRefVertexBlendMatrixAttr_meta;
}
void *igRefVertexBlendMatrixAttr_vtableRead(){
 UnknownGenObject800B1BF4 object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igRefVertexBlendMatrixAttr_vtable;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igRefVertexBlendMatrixAttr_registerNow(){
 meta_registerNow((int)igRefVertexBlendMatrixAttr_register);
}
void igRefVertexBlendMatrixAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igRefVertexBlendMatrixAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igRefVertexBlendMatrixAttr_getMetaCall,(int)igRefVertexBlendMatrixAttr_className,20,(int)igRefVertexBlendMatrixAttr_vtableRead,(int)igRefVertexBlendMatrixAttr_fieldInit,0,(int)lbl_8055E23C);
}
void *igRefVertexBlendMatrixAttr_getMetaCall(){return igRefVertexBlendMatrixAttr_getMeta();}
void igRefVertexBlendMatrixAttr_fieldInit(){
 void *value0=igRefVertexBlendMatrixAttr_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_8055E244,2);
 void *value2=meta_field(value0,value1);
 void *value3=fn_80218120();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+48)=(void *)fn_800C23E4;
 meta_setupFields(value0,lbl_8055E24C,lbl_8055E254,lbl_8055E25C,value1);
}
void *igProjectionMatrixAttr_create(void *object){
 igProjectionMatrixAttr_registerNow();
 return meta_createInstance(igProjectionMatrixAttr_meta,object);
}
void *fn_800B1E20(){
 if(!igProjectionMatrixAttr_meta) igProjectionMatrixAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igProjectionMatrixAttr_meta;
}
void *igProjectionMatrixAttr_getMeta(){
 if(!igProjectionMatrixAttr_meta || !(reinterpret_cast<unsigned int *>(igProjectionMatrixAttr_meta)[0x24/4]&4)) igProjectionMatrixAttr_registerNow();
 return igProjectionMatrixAttr_meta;
}
}
#pragma pop
