#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void __dl__FPv(void *);
void fn_800ABC8C();
void *fn_800AC294();
void *fn_800B3D08();
void *fn_800B6C60();
void igMorphData_register();
void igVector3MorphData_fieldInit();
void igVisualAttribute_register();
extern char lbl_80478F00[];
extern char lbl_80478F1C[];
extern char lbl_80478F40[];
extern char lbl_80478F4C[];
extern char lbl_80478F7C[];
extern char lbl_80478F90[];
extern char lbl_8047BB6C[];
extern char lbl_8047BBEC[];
extern char lbl_8047BC70[];
extern char lbl_8047BCE4[];
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
extern void *lbl_80562718;
extern void *lbl_80562720;
extern void *lbl_80562728;
extern void *lbl_80562734;
extern void *lbl_80562764;
void *igNormalizeNormalsStateAttr_getMeta();
void *igNormalizeNormalsStateAttr_vtableRead();
void fn_800B315C();
void igNormalizeNormalsStateAttr_register();
void *igNormalizeNormalsStateAttr_getMetaCall();
void igNormalizeNormalsStateAttr_fieldInit();
void *igMultiPassStateAttr_getMeta();
void *igMultiPassStateAttr_vtableRead();
void fn_800B3310();
void igMultiPassStateAttr_register();
void *igMultiPassStateAttr_getMetaCall();
void igMultiPassStateAttr_fieldInit();
void *igMorphedGeometryAttr_getMeta();
void *igMorphedGeometryAttr_vtableRead();
void fn_800B35FC();
void igMorphedGeometryAttr_register();
void *igMorphedGeometryAttr_getMetaCall();
void igMorphedGeometryAttr_fieldInit();
void *igVector3MorphData_getMeta();
void *igVector3MorphData_vtableRead();
void fn_800B3950();
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
 inline UnknownGenRoot800B34A8(){fn_8006665C(this);}
};
struct UnknownGenObject800B34A8 : UnknownGenRoot800B34A8 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject800B34A8(){unknown00=lbl_8047BCE4;}
};
struct UnknownGenRoot800B3798 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B3798(){fn_8006665C(this);}
};
struct UnknownGenObject800B3798 : UnknownGenRoot800B3798 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 char unknown10[8];
 UnknownGenRefMember unknown18;
 UnknownGenRefMember unknown1C;
 char unknown20[24];
 inline ~UnknownGenObject800B3798(){unknown00=lbl_8047BC70;}
};
extern "C" {
void *fn_800B308C(){
 if(!lbl_80562718) lbl_80562718=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562718;
}
void *igNormalizeNormalsStateAttr_getMeta(){
 if(!lbl_80562718 || !(reinterpret_cast<unsigned int *>(lbl_80562718)[0x24/4]&4)) fn_800B315C();
 return lbl_80562718;
}
void *igNormalizeNormalsStateAttr_vtableRead(){
 UnknownGenObject800B3104_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047BB6C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B315C(){
 fn_80066188((int)igNormalizeNormalsStateAttr_register);
}
void igNormalizeNormalsStateAttr_register(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562718,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igNormalizeNormalsStateAttr_getMetaCall,(int)lbl_80478F00,16,(int)igNormalizeNormalsStateAttr_vtableRead,(int)igNormalizeNormalsStateAttr_fieldInit,0,0);
}
void *igNormalizeNormalsStateAttr_getMetaCall(){return igNormalizeNormalsStateAttr_getMeta();}
void igNormalizeNormalsStateAttr_fieldInit(){
 void *value0=lbl_80562718;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055E2EC,1);
 fn_800659C0(value0,lbl_8055E2F0,lbl_8055E2F4,lbl_8055E2F8,value1);
}
void *igMultiPassStateAttr_getMeta(){
 if(!lbl_80562720 || !(reinterpret_cast<unsigned int *>(lbl_80562720)[0x24/4]&4)) fn_800B3310();
 return lbl_80562720;
}
void *igMultiPassStateAttr_vtableRead(){
 UnknownGenObject800B32B8_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047BBEC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B3310(){
 fn_80066188((int)igMultiPassStateAttr_register);
}
void igMultiPassStateAttr_register(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562720,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igMultiPassStateAttr_getMetaCall,(int)lbl_80478F1C,16,(int)igMultiPassStateAttr_vtableRead,(int)igMultiPassStateAttr_fieldInit,0,0);
}
void *igMultiPassStateAttr_getMetaCall(){return igMultiPassStateAttr_getMeta();}
void igMultiPassStateAttr_fieldInit(){
 void *value0=lbl_80562720;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055E2FC,1);
 fn_800659C0(value0,lbl_8055E300,lbl_8055E304,lbl_8055E308,value1);
}
void *fn_800B3430(){
 if(!lbl_80562728) lbl_80562728=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562728;
}
void *igMorphedGeometryAttr_getMeta(){
 if(!lbl_80562728 || !(reinterpret_cast<unsigned int *>(lbl_80562728)[0x24/4]&4)) fn_800B35FC();
 return lbl_80562728;
}
void *igMorphedGeometryAttr_vtableRead(){
 UnknownGenObject800B34A8 object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047BCE4;
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
void fn_800B35FC(){
 fn_80066188((int)igMorphedGeometryAttr_register);
}
void igMorphedGeometryAttr_register(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562728,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igMorphedGeometryAttr_getMetaCall,(int)lbl_80478F4C,20,(int)igMorphedGeometryAttr_vtableRead,(int)igMorphedGeometryAttr_fieldInit,0,(int)lbl_80478F40);
}
void *igMorphedGeometryAttr_getMetaCall(){return igMorphedGeometryAttr_getMeta();}
void igMorphedGeometryAttr_fieldInit(){
 void *value0=lbl_80562728;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055E30C,2);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_800B6C60();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_800B3D08();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+52)=1;
 fn_800659C0(value0,lbl_8055E314,lbl_8055E31C,lbl_8055E324,value1);
}
void *igVector3MorphData_getMeta(){
 if(!lbl_80562734 || !(reinterpret_cast<unsigned int *>(lbl_80562734)[0x24/4]&4)) fn_800B3950();
 return lbl_80562734;
}
void *igVector3MorphData_vtableRead(){
 UnknownGenObject800B3798 object;
 object.unknown00=lbl_8047E058;
 object.unknown00=lbl_8047BC70;
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
void fn_800B3950(){
 fn_80066188((int)igVector3MorphData_register);
}
void igVector3MorphData_register(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562734,(int)igMorphData_register,(int)igVector3MorphData_parentMeta,(int)igVector3MorphData_getMetaCall,(int)lbl_80478F90,44,(int)igVector3MorphData_vtableRead,(int)igVector3MorphData_fieldInit,0,(int)lbl_80478F7C);
}
void *igVector3MorphData_getMetaCall(){return igVector3MorphData_getMeta();}
void *igVector3MorphData_parentMeta(){return lbl_80562764;}
}
#pragma pop
