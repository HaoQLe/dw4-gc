#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
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
void fn_800AC6A0(void *,short);
void igVertexShaderAttr_arkRegister();
void igVisualAttribute_register();
extern char igVertexShaderBindAttr_className[];
extern char igVertexShaderBindAttr_vtable[];
extern char igVertexShaderAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char igVertexShaderBindAttr_dependencies[8];
extern char igVertexShaderBindAttr_fieldTypes[4];
extern char igVertexShaderBindAttr_fieldNames[4];
extern char igVertexShaderBindAttr_fieldStorage[4];
extern char igVertexShaderBindAttr_fieldOffsets[4];
extern void *lbl_805621F4;
extern void *igVertexShaderBindAttr_meta;
extern void *igVertexShaderAttr_meta;
void *igVertexShaderBindAttr_getMeta();
void *igVertexShaderBindAttr_vtableRead();
void igVertexShaderBindAttr_arkRegister();
void igVertexShaderBindAttr_register();
void *igVertexShaderBindAttr_getMetaCall();
void igVertexShaderBindAttr_fieldInit();
void *fn_800AC594();
}
struct UnknownGenRoot800AC3B8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800AC3B8(){igObject_construct(this);}
};
struct UnknownGenObject800AC3B8 : UnknownGenRoot800AC3B8 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject800AC3B8(){unknown00=igVertexShaderBindAttr_vtable;}
};
struct UnknownGenObject800AC60C {
 void *unknown00;
 char unknown04[8];
 int unknown0C;
 int unknown10;
 int unknown14;
 int unknown18;
 int unknown1C;
 char unknown20[8];
 int unknown28;
 int unknown2C;
 int unknown30;
 int unknown34;
 char unknown38[8];
};
extern "C" {
void *fn_800AC594(){
 if(!igVertexShaderAttr_meta) igVertexShaderAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igVertexShaderAttr_meta;
}
void *igVertexShaderAttr_getMeta(){
 if(!igVertexShaderAttr_meta || !(reinterpret_cast<unsigned int *>(igVertexShaderAttr_meta)[0x24/4]&4)) igVertexShaderAttr_arkRegister();
 return igVertexShaderAttr_meta;
}
void *igVertexShaderAttr_vtableRead(){
 UnknownGenObject800AC60C object;
 igObject_construct(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igVertexShaderAttr_vtable;
 object.unknown0C=0;
 object.unknown10=0;
 object.unknown14=0;
 object.unknown18=0;
 object.unknown1C=0;
 object.unknown28=0;
 object.unknown2C=0;
 object.unknown30=0;
 object.unknown34=0;
 void *result=*reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
 fn_800AC6A0(&object,-1);
 return result;
}
}
#pragma pop
