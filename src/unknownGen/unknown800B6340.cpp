#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void *meta_createInstance(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80075AC4(void *,int);
void fn_800ABC8C();
void *fn_800AC294();
void igGeometryAttr2_fieldInit();
void igVisualAttribute_register();
extern char igGeometryMaskAttr_className[];
extern char lbl_804795C0[];
extern char igGeometryAttr2_className[];
extern char igGeometryMaskAttr_vtable[];
extern char igGeometryAttr2_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_8055E42C[4];
extern char lbl_8055E438[4];
extern char lbl_8055E43C[4];
extern char lbl_8055E440[4];
extern void *igGeometryMaskAttr_meta;
extern void *igGeometryAttr2_meta;
void *igGeometryMaskAttr_getMeta();
void *igGeometryMaskAttr_vtableRead();
void igGeometryMaskAttr_registerNow();
void igGeometryMaskAttr_register();
void *igGeometryMaskAttr_getMetaCall();
void igGeometryMaskAttr_fieldInit();
void *igGeometryAttr2_getMeta();
void *igGeometryAttr2_vtableRead();
void igGeometryAttr2_registerNow();
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
 inline UnknownGenRoot800B657C(){fn_8006665C(this);}
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
void *igGeometryMaskAttr_create(void *object){
 igGeometryMaskAttr_registerNow();
 return meta_createInstance(igGeometryMaskAttr_meta,object);
}
void *igGeometryMaskAttr_getMeta(){
 if(!igGeometryMaskAttr_meta || !(reinterpret_cast<unsigned int *>(igGeometryMaskAttr_meta)[0x24/4]&4)) igGeometryMaskAttr_registerNow();
 return igGeometryMaskAttr_meta;
}
void *igGeometryMaskAttr_vtableRead(){
 UnknownGenObject800B63B4_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igGeometryMaskAttr_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igGeometryMaskAttr_registerNow(){
 meta_registerNow((int)igGeometryMaskAttr_register);
}
void igGeometryMaskAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igGeometryMaskAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igGeometryMaskAttr_getMetaCall,(int)igGeometryMaskAttr_className,16,(int)igGeometryMaskAttr_vtableRead,(int)igGeometryMaskAttr_fieldInit,0,0);
}
void *igGeometryMaskAttr_getMetaCall(){return igGeometryMaskAttr_getMeta();}
void igGeometryMaskAttr_fieldInit(){
 void *value0=igGeometryMaskAttr_meta;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055E42C,1);
 void *value2=fn_800658E4(value0,value1);
 fn_80075AC4(value2,-1);
 fn_800659C0(value0,lbl_8055E438,lbl_8055E43C,lbl_8055E440,value1);
}
void *igGeometryAttr2_getMeta(){
 if(!igGeometryAttr2_meta || !(reinterpret_cast<unsigned int *>(igGeometryAttr2_meta)[0x24/4]&4)) igGeometryAttr2_registerNow();
 return igGeometryAttr2_meta;
}
void *igGeometryAttr2_vtableRead(){
 UnknownGenObject800B657C object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igGeometryAttr2_vtable;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
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
void igGeometryAttr2_registerNow(){
 meta_registerNow((int)igGeometryAttr2_register);
}
void igGeometryAttr2_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igGeometryAttr2_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igGeometryAttr2_getMetaCall,(int)igGeometryAttr2_className,44,(int)igGeometryAttr2_vtableRead,(int)igGeometryAttr2_fieldInit,0,(int)lbl_804795C0);
}
void *igGeometryAttr2_getMetaCall(){return igGeometryAttr2_getMeta();}
}
#pragma pop
