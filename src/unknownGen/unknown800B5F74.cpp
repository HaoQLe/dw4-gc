#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void __dl__FPv(void *);
void fn_800ABC8C();
void *fn_800AC294();
void igGeometrySetAttr_fieldInit();
void igVisualAttribute_register();
extern char lbl_80477D08[];
extern char lbl_804794F4[];
extern char lbl_80479500[];
extern char lbl_8047C364[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern void *lbl_80562838;
extern void *lbl_8056283C;
void *igGeometrySetAttr_getMeta();
void *igGeometrySetAttr_vtableRead();
void fn_800B6150();
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
 inline ~UnknownGenObject800B5FFC(){unknown00=lbl_8047C364;}
};
extern "C" {
void *fn_800B5F74(){
 char *data=lbl_80477D08;
 if(!lbl_80562838) lbl_80562838=fn_800635C8(data+0x17E0,data+0x17C8,data+0x17D4,0x3);
 return lbl_80562838;
}
void *igGeometrySetAttr_getMeta(){
 if(!lbl_8056283C || !(reinterpret_cast<unsigned int *>(lbl_8056283C)[0x24/4]&4)) fn_800B6150();
 return lbl_8056283C;
}
void *igGeometrySetAttr_vtableRead(){
 UnknownGenObject800B5FFC object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047C364;
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
void fn_800B6150(){
 fn_80066188((int)igGeometrySetAttr_register);
}
void igGeometrySetAttr_register(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_8056283C,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igGeometrySetAttr_getMetaCall,(int)lbl_80479500,32,(int)igGeometrySetAttr_vtableRead,(int)igGeometrySetAttr_fieldInit,0,(int)lbl_804794F4);
}
void *igGeometrySetAttr_getMetaCall(){return igGeometrySetAttr_getMeta();}
}
#pragma pop
