#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void *fn_800635C8(void *,void *,void *,int);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800ABC8C();
void *fn_800AC294();
void igGeometrySetAttr_fieldInit();
void igVisualAttribute_register();
extern char igVisualContextAttrDefaultManager_className[];
extern char igGeometrySetAttr_dependencies[];
extern char igGeometrySetAttr_className[];
extern char igGeometrySetAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern void *lbl_80562838;
extern void *igGeometrySetAttr_meta;
void *igGeometrySetAttr_getMeta();
void *igGeometrySetAttr_vtableRead();
void igGeometrySetAttr_arkRegister();
void igGeometrySetAttr_register();
void *igGeometrySetAttr_getMetaCall();
}
struct UnknownGenRoot800B5FFC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B5FFC(){igObject_construct(this);}
};
struct UnknownGenObject800B5FFC : UnknownGenRoot800B5FFC {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 char unknown10[4];
 UnknownGenRefMember unknown14;
 char unknown18[8];
 inline ~UnknownGenObject800B5FFC(){unknown00=igGeometrySetAttr_vtable;}
};
extern "C" {
UnknownGenHolder *fn_800B60DC(UnknownGenHolder *object,short flags){
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
void igGeometrySetAttr_arkRegister(){
 meta_registerNow((int)igGeometrySetAttr_register);
}
void igGeometrySetAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igGeometrySetAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igGeometrySetAttr_getMetaCall,(int)igGeometrySetAttr_className,32,(int)igGeometrySetAttr_vtableRead,(int)igGeometrySetAttr_fieldInit,0,(int)igGeometrySetAttr_dependencies);
}
void *igGeometrySetAttr_getMetaCall(){return igGeometrySetAttr_getMeta();}
}
#pragma pop
