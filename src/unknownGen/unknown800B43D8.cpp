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
void fn_800B43D8(){return fn_800C17B4();}
void *fn_800B43F8(){return fn_800C1848();}
void *igMipMapAttr_getMeta(){
 if(!igMipMapAttr_meta || !(reinterpret_cast<unsigned int *>(igMipMapAttr_meta)[0x24/4]&4)) igMipMapAttr_arkRegister();
 return igMipMapAttr_meta;
}
void *igMipMapAttr_vtableRead(){
 UnknownGenObject800B4454_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igMipMapAttr_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igMipMapAttr_arkRegister(){
 meta_registerNow((int)igMipMapAttr_register);
}
void igMipMapAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igMipMapAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igMipMapAttr_getMetaCall,(int)igMipMapAttr_className,20,(int)igMipMapAttr_vtableRead,(int)igMipMapAttr_fieldInit,0,0);
}
void *igMipMapAttr_getMetaCall(){return igMipMapAttr_getMeta();}
void igMipMapAttr_fieldInit(){
 void *value0=igMipMapAttr_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,igMipMapAttr_fieldTypes,2);
 void *value2=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 fn_8004D4BC(value2,*reinterpret_cast<float *>((lbl_8056681C+0)));
 meta_setupFields(value0,igMipMapAttr_fieldNames,igMipMapAttr_fieldStorage,igMipMapAttr_fieldOffsets,value1);
}
void *fn_800B45E0(){
 if(!igMatrixOptStateAttr_meta) igMatrixOptStateAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igMatrixOptStateAttr_meta;
}
void *igMatrixOptStateAttr_getMeta(){
 if(!igMatrixOptStateAttr_meta || !(reinterpret_cast<unsigned int *>(igMatrixOptStateAttr_meta)[0x24/4]&4)) igMatrixOptStateAttr_arkRegister();
 return igMatrixOptStateAttr_meta;
}
void *igMatrixOptStateAttr_vtableRead(){
 UnknownGenObject800B4658_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igMatrixOptStateAttr_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igMatrixOptStateAttr_arkRegister(){
 meta_registerNow((int)igMatrixOptStateAttr_register);
}
void igMatrixOptStateAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igMatrixOptStateAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igMatrixOptStateAttr_getMetaCall,(int)igMatrixOptStateAttr_className,16,(int)igMatrixOptStateAttr_vtableRead,(int)igMatrixOptStateAttr_fieldInit,0,0);
}
void *igMatrixOptStateAttr_getMetaCall(){return igMatrixOptStateAttr_getMeta();}
void igMatrixOptStateAttr_fieldInit(){
 void *meta=igMatrixOptStateAttr_meta;
 void *field=meta_fieldCount(meta);
 meta_appendFields(meta,igMatrixOptStateAttr_fieldTypes,1);
 fn_8003EC68(meta_field(meta,field),1);
 meta_setupFields(meta,igMatrixOptStateAttr_fieldNames,igMatrixOptStateAttr_fieldStorage,igMatrixOptStateAttr_fieldOffsets,field);
}
void *igMatrixConstantAttr_getMeta(){
 if(!igMatrixConstantAttr_meta || !(reinterpret_cast<unsigned int *>(igMatrixConstantAttr_meta)[0x24/4]&4)) igMatrixConstantAttr_arkRegister();
 return igMatrixConstantAttr_meta;
}
}
#pragma pop
