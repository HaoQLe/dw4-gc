#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
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
void *fn_800B3D08();
void *fn_800B6C60();
void igMorphData_register();
void igVector3MorphData_fieldInit();
void igVisualAttribute_register();
extern char igNormalizeNormalsStateAttr_className[];
extern char igMultiPassStateAttr_className[];
extern char lbl_80478F40[];
extern char igMorphedGeometryAttr_className[];
extern char lbl_80478F7C[];
extern char igVector3MorphData_className[];
extern char igNormalizeNormalsStateAttr_vtable[];
extern char igMultiPassStateAttr_vtable[];
extern char igVector3MorphData_vtable[];
extern char igMorphedGeometryAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E058[];
extern char lbl_8047E50C[];
extern char lbl_8055E2EC[4];
extern char lbl_8055E2F0[4];
extern char lbl_8055E2F4[4];
extern char lbl_8055E2F8[4];
extern char lbl_8055E2FC[4];
extern char lbl_8055E300[4];
extern char lbl_8055E304[4];
extern char lbl_8055E308[4];
extern char lbl_8055E30C[8];
extern char lbl_8055E314[8];
extern char lbl_8055E31C[8];
extern char lbl_8055E324[8];
extern void *lbl_805621F4;
extern void *igNormalizeNormalsStateAttr_meta;
extern void *igMultiPassStateAttr_meta;
extern void *igMorphedGeometryAttr_meta;
extern void *igVector3MorphData_meta;
extern void *igMorphData_meta;
void *igNormalizeNormalsStateAttr_getMeta();
void *igNormalizeNormalsStateAttr_vtableRead();
void igNormalizeNormalsStateAttr_registerNow();
void igNormalizeNormalsStateAttr_register();
void *igNormalizeNormalsStateAttr_getMetaCall();
void igNormalizeNormalsStateAttr_fieldInit();
void *igMultiPassStateAttr_getMeta();
void *igMultiPassStateAttr_vtableRead();
void igMultiPassStateAttr_registerNow();
void igMultiPassStateAttr_register();
void *igMultiPassStateAttr_getMetaCall();
void igMultiPassStateAttr_fieldInit();
void *igMorphedGeometryAttr_getMeta();
void *igMorphedGeometryAttr_vtableRead();
void igMorphedGeometryAttr_registerNow();
void igMorphedGeometryAttr_register();
void *igMorphedGeometryAttr_getMetaCall();
void igMorphedGeometryAttr_fieldInit();
void *igVector3MorphData_getMeta();
void *igVector3MorphData_vtableRead();
void igVector3MorphData_registerNow();
void igVector3MorphData_register();
void *igVector3MorphData_getMetaCall();
void *igVector3MorphData_parentMeta();
}
struct UnknownGenObject800B3104_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B32B8_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800B34A8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B34A8(){igObject_construct(this);}
};
struct UnknownGenObject800B34A8 : UnknownGenRoot800B34A8 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject800B34A8(){unknown00=igMorphedGeometryAttr_vtable;}
};
struct UnknownGenRoot800B3798 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B3798(){igObject_construct(this);}
};
struct UnknownGenObject800B3798 : UnknownGenRoot800B3798 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 char unknown10[8];
 UnknownGenRefMember unknown18;
 UnknownGenRefMember unknown1C;
 char unknown20[24];
 inline ~UnknownGenObject800B3798(){unknown00=igVector3MorphData_vtable;}
};
extern "C" {
void *fn_800B308C(){
 if(!igNormalizeNormalsStateAttr_meta) igNormalizeNormalsStateAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igNormalizeNormalsStateAttr_meta;
}
void *igNormalizeNormalsStateAttr_getMeta(){
 if(!igNormalizeNormalsStateAttr_meta || !(reinterpret_cast<unsigned int *>(igNormalizeNormalsStateAttr_meta)[0x24/4]&4)) igNormalizeNormalsStateAttr_registerNow();
 return igNormalizeNormalsStateAttr_meta;
}
void *igNormalizeNormalsStateAttr_vtableRead(){
 UnknownGenObject800B3104_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igNormalizeNormalsStateAttr_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igNormalizeNormalsStateAttr_registerNow(){
 meta_registerNow((int)igNormalizeNormalsStateAttr_register);
}
void igNormalizeNormalsStateAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igNormalizeNormalsStateAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igNormalizeNormalsStateAttr_getMetaCall,(int)igNormalizeNormalsStateAttr_className,16,(int)igNormalizeNormalsStateAttr_vtableRead,(int)igNormalizeNormalsStateAttr_fieldInit,0,0);
}
void *igNormalizeNormalsStateAttr_getMetaCall(){return igNormalizeNormalsStateAttr_getMeta();}
void igNormalizeNormalsStateAttr_fieldInit(){
 void *value0=igNormalizeNormalsStateAttr_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_8055E2EC,1);
 meta_setupFields(value0,lbl_8055E2F0,lbl_8055E2F4,lbl_8055E2F8,value1);
}
void *igMultiPassStateAttr_getMeta(){
 if(!igMultiPassStateAttr_meta || !(reinterpret_cast<unsigned int *>(igMultiPassStateAttr_meta)[0x24/4]&4)) igMultiPassStateAttr_registerNow();
 return igMultiPassStateAttr_meta;
}
void *igMultiPassStateAttr_vtableRead(){
 UnknownGenObject800B32B8_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igMultiPassStateAttr_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igMultiPassStateAttr_registerNow(){
 meta_registerNow((int)igMultiPassStateAttr_register);
}
void igMultiPassStateAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igMultiPassStateAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igMultiPassStateAttr_getMetaCall,(int)igMultiPassStateAttr_className,16,(int)igMultiPassStateAttr_vtableRead,(int)igMultiPassStateAttr_fieldInit,0,0);
}
void *igMultiPassStateAttr_getMetaCall(){return igMultiPassStateAttr_getMeta();}
void igMultiPassStateAttr_fieldInit(){
 void *value0=igMultiPassStateAttr_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_8055E2FC,1);
 meta_setupFields(value0,lbl_8055E300,lbl_8055E304,lbl_8055E308,value1);
}
void *fn_800B3430(){
 if(!igMorphedGeometryAttr_meta) igMorphedGeometryAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igMorphedGeometryAttr_meta;
}
void *igMorphedGeometryAttr_getMeta(){
 if(!igMorphedGeometryAttr_meta || !(reinterpret_cast<unsigned int *>(igMorphedGeometryAttr_meta)[0x24/4]&4)) igMorphedGeometryAttr_registerNow();
 return igMorphedGeometryAttr_meta;
}
void *igMorphedGeometryAttr_vtableRead(){
 UnknownGenObject800B34A8 object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igMorphedGeometryAttr_vtable;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
UnknownGenHolder *dtor_800B3588(UnknownGenHolder *object,short flags){
 if(object){
  UnknownGenValue *value=object->unknown00;
  if(value){
   --value->unknown04;
   if(!(reinterpret_cast<volatile unsigned int *>(value)[1]&0x7FFFFF)) fn_80066E1C(value);
  }
  if(flags>0) __dl__FPv(object);
 }
 return object;
}
void igMorphedGeometryAttr_registerNow(){
 meta_registerNow((int)igMorphedGeometryAttr_register);
}
void igMorphedGeometryAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igMorphedGeometryAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igMorphedGeometryAttr_getMetaCall,(int)igMorphedGeometryAttr_className,20,(int)igMorphedGeometryAttr_vtableRead,(int)igMorphedGeometryAttr_fieldInit,0,(int)lbl_80478F40);
}
void *igMorphedGeometryAttr_getMetaCall(){return igMorphedGeometryAttr_getMeta();}
void igMorphedGeometryAttr_fieldInit(){
 void *value0=igMorphedGeometryAttr_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_8055E30C,2);
 void *value2=meta_field(value0,value1);
 void *value3=fn_800B6C60();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_800B3D08();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+52)=1;
 meta_setupFields(value0,lbl_8055E314,lbl_8055E31C,lbl_8055E324,value1);
}
void *igVector3MorphData_getMeta(){
 if(!igVector3MorphData_meta || !(reinterpret_cast<unsigned int *>(igVector3MorphData_meta)[0x24/4]&4)) igVector3MorphData_registerNow();
 return igVector3MorphData_meta;
}
void *igVector3MorphData_vtableRead(){
 UnknownGenObject800B3798 object;
 object.unknown00=lbl_8047E058;
 object.unknown00=igVector3MorphData_vtable;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown18.value=0;
 object.unknown1C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
UnknownGenHolder *dtor_800B38DC(UnknownGenHolder *object,short flags){
 if(object){
  UnknownGenValue *value=object->unknown00;
  if(value){
   --value->unknown04;
   if(!(reinterpret_cast<volatile unsigned int *>(value)[1]&0x7FFFFF)) fn_80066E1C(value);
  }
  if(flags>0) __dl__FPv(object);
 }
 return object;
}
void igVector3MorphData_registerNow(){
 meta_registerNow((int)igVector3MorphData_register);
}
void igVector3MorphData_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igVector3MorphData_meta,(int)igMorphData_register,(int)igVector3MorphData_parentMeta,(int)igVector3MorphData_getMetaCall,(int)igVector3MorphData_className,44,(int)igVector3MorphData_vtableRead,(int)igVector3MorphData_fieldInit,0,(int)lbl_80478F7C);
}
void *igVector3MorphData_getMetaCall(){return igVector3MorphData_getMeta();}
void *igVector3MorphData_parentMeta(){return igMorphData_meta;}
}
#pragma pop
