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
extern char igRenderDestinationAttr_dependencies[];
extern char igRenderDestinationAttr_className[];
extern char igRenderListAttr_vtable[];
extern char igRenderDestinationAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char igRenderListAttr_dependencies[8];
extern char igRenderListAttr_fieldTypes[8];
extern char igRenderListAttr_fieldNames[8];
extern char igRenderListAttr_fieldStorage[8];
extern char igRenderListAttr_fieldOffsets[8];
extern char lbl_8055E200[8];
extern char lbl_8055E208[8];
extern void *lbl_805621F4;
extern void *igRenderListAttr_meta;
extern void *lbl_80562650;
extern void *lbl_80562654;
extern void *igRenderDestinationAttr_meta;
void *igRenderListAttr_getMeta();
void *igRenderListAttr_vtableRead();
void igRenderListAttr_arkRegister();
void igRenderListAttr_register();
void *igRenderListAttr_getMetaCall();
void igRenderListAttr_fieldInit();
void *igRenderDestinationAttr_getMeta();
void *igRenderDestinationAttr_vtableRead();
void igRenderDestinationAttr_arkRegister();
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
}
#pragma pop
