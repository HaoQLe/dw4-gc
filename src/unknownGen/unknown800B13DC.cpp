#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void fn_80053650(void *,int);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
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
void *fn_800CE788();
void igRenderDestinationAttr_fieldInit();
void igVisualAttribute_register();
extern char igVisualContextAttrDefaultManager_className[];
extern char igRenderListAttr_className[];
extern char lbl_80478A18[];
extern char lbl_80478AF8[];
extern char igRenderDestinationAttr_className[];
extern char igRenderListAttr_vtable[];
extern char igRenderDestinationAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_8055E1D0[8];
extern char lbl_8055E1D8[8];
extern char lbl_8055E1E8[8];
extern char lbl_8055E1F0[8];
extern char lbl_8055E1F8[8];
extern char lbl_8055E200[8];
extern char lbl_8055E208[8];
extern void *lbl_805621F4;
extern void *igRenderListAttr_meta;
extern void *lbl_80562650;
extern void *lbl_80562654;
extern void *igRenderDestinationAttr_meta;
void *igRenderListAttr_getMeta();
void *igRenderListAttr_vtableRead();
void igRenderListAttr_registerNow();
void igRenderListAttr_register();
void *igRenderListAttr_getMetaCall();
void igRenderListAttr_fieldInit();
void *igRenderDestinationAttr_getMeta();
void *igRenderDestinationAttr_vtableRead();
void igRenderDestinationAttr_registerNow();
void igRenderDestinationAttr_register();
void *igRenderDestinationAttr_getMetaCall();
}
struct UnknownGenRoot800B1454 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B1454(){igObject_construct(this);}
};
struct UnknownGenObject800B1454 : UnknownGenRoot800B1454 {
 char unknown04[12];
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject800B1454(){unknown00=igRenderListAttr_vtable;}
};
struct UnknownGenRoot800B17B0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B17B0(){igObject_construct(this);}
};
struct UnknownGenObject800B17B0 : UnknownGenRoot800B17B0 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 char unknown24[28];
 UnknownGenRefMember unknown40;
 char unknown44[12];
 inline ~UnknownGenObject800B17B0(){unknown00=igRenderDestinationAttr_vtable;}
};
extern "C" {
void *fn_800B13DC(){
 if(!igRenderListAttr_meta) igRenderListAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igRenderListAttr_meta;
}
void *igRenderListAttr_getMeta(){
 if(!igRenderListAttr_meta || !(reinterpret_cast<unsigned int *>(igRenderListAttr_meta)[0x24/4]&4)) igRenderListAttr_registerNow();
 return igRenderListAttr_meta;
}
void *igRenderListAttr_vtableRead(){
 UnknownGenObject800B1454 object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igRenderListAttr_vtable;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igRenderListAttr_registerNow(){
 meta_registerNow((int)igRenderListAttr_register);
}
void igRenderListAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igRenderListAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igRenderListAttr_getMetaCall,(int)igRenderListAttr_className,20,(int)igRenderListAttr_vtableRead,(int)igRenderListAttr_fieldInit,0,(int)lbl_8055E1D0);
}
void *igRenderListAttr_getMetaCall(){return igRenderListAttr_getMeta();}
void igRenderListAttr_fieldInit(){
 void *value0=igRenderListAttr_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_8055E1D8,2);
 void *value2=meta_field(value0,value1);
 fn_80053650(value2,-1);
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+38)=0;
 void *value3=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value4=fn_800CE788();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value3)+56)=value4;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value3)+38)=0;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value3)+40)=1;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value3)+39)=1;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value3)+44)=3;
 meta_setupFields(value0,lbl_8055E1E8,lbl_8055E1F0,lbl_8055E1F8,value1);
}
void *fn_800B166C(){
 void *value0;
 if(!lbl_80562650){
  value0=fn_800635C8(lbl_80478A18,lbl_8055E200,lbl_8055E208,2);
  lbl_80562650=value0;
 }
 return lbl_80562650;
}
void *fn_800B16B4(){
 char *data=igVisualContextAttrDefaultManager_className;
 if(!lbl_80562654) lbl_80562654=fn_800635C8(data+0xDD0,data+0xDB8,data+0xDC4,0x3);
 return lbl_80562654;
}
void *igRenderDestinationAttr_create(void *object){
 igRenderDestinationAttr_registerNow();
 return meta_createInstance(igRenderDestinationAttr_meta,object);
}
void *fn_800B1738(){
 if(!igRenderDestinationAttr_meta) igRenderDestinationAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igRenderDestinationAttr_meta;
}
void *igRenderDestinationAttr_getMeta(){
 if(!igRenderDestinationAttr_meta || !(reinterpret_cast<unsigned int *>(igRenderDestinationAttr_meta)[0x24/4]&4)) igRenderDestinationAttr_registerNow();
 return igRenderDestinationAttr_meta;
}
void *igRenderDestinationAttr_vtableRead(){
 UnknownGenObject800B17B0 object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igRenderDestinationAttr_vtable;
 object.unknown20.value=0;
 object.unknown40.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igRenderDestinationAttr_registerNow(){
 meta_registerNow((int)igRenderDestinationAttr_register);
}
void igRenderDestinationAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igRenderDestinationAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igRenderDestinationAttr_getMetaCall,(int)igRenderDestinationAttr_className,68,(int)igRenderDestinationAttr_vtableRead,(int)igRenderDestinationAttr_fieldInit,0,(int)lbl_80478AF8);
}
void *igRenderDestinationAttr_getMetaCall(){return igRenderDestinationAttr_getMeta();}
}
#pragma pop
