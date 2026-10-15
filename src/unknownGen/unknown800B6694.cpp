#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_80075AC4(void *,int);
void fn_800ABC8C();
void *fn_800AC294();
void igGeometryAttr2_fieldInit();
void igVisualAttribute_register();
extern char igGeometryMaskAttr_className[];
extern char igGeometryAttr2_dependencies[];
extern char igGeometryAttr2_className[];
extern char igGeometryMaskAttr_vtable[];
extern char igGeometryAttr2_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char igGeometryMaskAttr_fieldTypes[4];
extern char igGeometryMaskAttr_fieldNames[4];
extern char igGeometryMaskAttr_fieldStorage[4];
extern char igGeometryMaskAttr_fieldOffsets[4];
extern void *igGeometryMaskAttr_meta;
extern void *igGeometryAttr2_meta;
void *igGeometryMaskAttr_getMeta();
void *igGeometryMaskAttr_vtableRead();
void igGeometryMaskAttr_arkRegister();
void igGeometryMaskAttr_register();
void *igGeometryMaskAttr_getMetaCall();
void igGeometryMaskAttr_fieldInit();
void *igGeometryAttr2_getMeta();
void *igGeometryAttr2_vtableRead();
void igGeometryAttr2_arkRegister();
void igGeometryAttr2_register();
void *igGeometryAttr2_getMetaCall();
}
struct UnknownGenObject800B63B4_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800B657C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B657C(){igObject_construct(this);}
};
struct UnknownGenObject800B657C : UnknownGenRoot800B657C {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 char unknown18[32];
 inline ~UnknownGenObject800B657C(){unknown00=igGeometryAttr2_vtable;}
};
extern "C" {
UnknownGenHolder *fn_800B6694(UnknownGenHolder *object,short flags){
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
void igGeometryAttr2_arkRegister(){
 meta_registerNow((int)igGeometryAttr2_register);
}
void igGeometryAttr2_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igGeometryAttr2_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igGeometryAttr2_getMetaCall,(int)igGeometryAttr2_className,44,(int)igGeometryAttr2_vtableRead,(int)igGeometryAttr2_fieldInit,0,(int)igGeometryAttr2_dependencies);
}
void *igGeometryAttr2_getMetaCall(){return igGeometryAttr2_getMeta();}
}
#pragma pop
