#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void *fn_800635C8(void *,void *,void *,int);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800ABC8C();
void *fn_800AC294();
void igGeometrySetAttr_fieldInit();
void igVisualAttribute_register();
extern char igVisualContextAttrDefaultManager_className[];
extern char lbl_804794F4[];
extern char igGeometrySetAttr_className[];
extern char igGeometrySetAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern void *lbl_80562838;
extern void *igGeometrySetAttr_meta;
void *igGeometrySetAttr_getMeta();
void *igGeometrySetAttr_vtableRead();
void igGeometrySetAttr_registerNow();
void igGeometrySetAttr_register();
void *igGeometrySetAttr_getMetaCall();
}
struct UnknownGenRoot800B5FFC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B5FFC(){fn_8006665C(this);}
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
void *fn_800B5F74(){
 char *data=igVisualContextAttrDefaultManager_className;
 if(!lbl_80562838) lbl_80562838=fn_800635C8(data+0x17E0,data+0x17C8,data+0x17D4,0x3);
 return lbl_80562838;
}
void *igGeometrySetAttr_getMeta(){
 if(!igGeometrySetAttr_meta || !(reinterpret_cast<unsigned int *>(igGeometrySetAttr_meta)[0x24/4]&4)) igGeometrySetAttr_registerNow();
 return igGeometrySetAttr_meta;
}
void *igGeometrySetAttr_vtableRead(){
 UnknownGenObject800B5FFC object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igGeometrySetAttr_vtable;
 object.unknown0C.value=0;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
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
void igGeometrySetAttr_registerNow(){
 meta_registerNow((int)igGeometrySetAttr_register);
}
void igGeometrySetAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igGeometrySetAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igGeometrySetAttr_getMetaCall,(int)igGeometrySetAttr_className,32,(int)igGeometrySetAttr_vtableRead,(int)igGeometrySetAttr_fieldInit,0,(int)lbl_804794F4);
}
void *igGeometrySetAttr_getMetaCall(){return igGeometrySetAttr_getMeta();}
}
#pragma pop
