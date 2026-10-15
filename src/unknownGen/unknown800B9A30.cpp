#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800ABC8C();
void *fn_800AC294();
void igBlendMatrixPaletteAttr_fieldInit();
void igObjectList_register();
void igVisualAttribute_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igBlendingCorrectionStateAttr_className[];
extern char igBlendingControlStateAttr_className[];
extern char igBlendStateAttr_className[];
extern char igBlendMatrixPaletteAttrList_className[];
extern char igBlendMatrixPaletteAttr_className[];
extern char igBlendingCorrectionStateAttr_vtable[];
extern char igBlendingControlStateAttr_vtable[];
extern char igBlendStateAttr_vtable[];
extern char igBlendMatrixPaletteAttr_vtable[];
extern char lbl_8047D578[];
extern char igBlendMatrixPaletteAttrList_vtable[];
extern char lbl_8047DBB4[];
extern char lbl_8047E50C[];
extern char lbl_8055E638[4];
extern char lbl_8055E63C[4];
extern char lbl_8055E640[4];
extern char lbl_8055E644[4];
extern char lbl_8055E648[4];
extern char lbl_8055E64C[4];
extern char lbl_8055E650[4];
extern char lbl_8055E654[4];
extern char lbl_8055E658[4];
extern char lbl_8055E65C[4];
extern char lbl_8055E660[4];
extern char lbl_8055E664[4];
extern char lbl_8055E668[8];
extern void *lbl_805621F4;
extern void *igBlendingCorrectionStateAttr_meta;
extern void *igBlendingControlStateAttr_meta;
extern void *igBlendStateAttr_meta;
extern void *igBlendMatrixPaletteAttrList_meta;
extern void *igBlendMatrixPaletteAttr_meta;
void *igBlendingCorrectionStateAttr_getMeta();
void *igBlendingCorrectionStateAttr_vtableRead();
void igBlendingCorrectionStateAttr_registerNow();
void igBlendingCorrectionStateAttr_register();
void *igBlendingCorrectionStateAttr_getMetaCall();
void igBlendingCorrectionStateAttr_fieldInit();
void *igBlendingControlStateAttr_getMeta();
void *igBlendingControlStateAttr_vtableRead();
void igBlendingControlStateAttr_registerNow();
void igBlendingControlStateAttr_register();
void *igBlendingControlStateAttr_getMetaCall();
void igBlendingControlStateAttr_fieldInit();
void *igBlendStateAttr_getMeta();
void *igBlendStateAttr_vtableRead();
void igBlendStateAttr_registerNow();
void igBlendStateAttr_register();
void *igBlendStateAttr_getMetaCall();
void igBlendStateAttr_fieldInit();
void *igBlendMatrixPaletteAttrList_getMeta();
void *igBlendMatrixPaletteAttrList_vtableRead();
void igBlendMatrixPaletteAttrList_registerNow();
void igBlendMatrixPaletteAttrList_register();
void *igBlendMatrixPaletteAttrList_getMetaCall();
void *igBlendMatrixPaletteAttr_getMeta();
void *igBlendMatrixPaletteAttr_vtableRead();
void igBlendMatrixPaletteAttr_registerNow();
void igBlendMatrixPaletteAttr_register();
void *igBlendMatrixPaletteAttr_getMetaCall();
}
struct UnknownGenObject800B9A6C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B9C20_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B9E48_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BA038_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BA20C_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *igBlendingCorrectionStateAttr_getMeta(){
 if(!igBlendingCorrectionStateAttr_meta || !(reinterpret_cast<unsigned int *>(igBlendingCorrectionStateAttr_meta)[0x24/4]&4)) igBlendingCorrectionStateAttr_registerNow();
 return igBlendingCorrectionStateAttr_meta;
}
void *igBlendingCorrectionStateAttr_vtableRead(){
 UnknownGenObject800B9A6C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igBlendingCorrectionStateAttr_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igBlendingCorrectionStateAttr_registerNow(){
 meta_registerNow((int)igBlendingCorrectionStateAttr_register);
}
void igBlendingCorrectionStateAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igBlendingCorrectionStateAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igBlendingCorrectionStateAttr_getMetaCall,(int)igBlendingCorrectionStateAttr_className,16,(int)igBlendingCorrectionStateAttr_vtableRead,(int)igBlendingCorrectionStateAttr_fieldInit,0,0);
}
void *igBlendingCorrectionStateAttr_getMetaCall(){return igBlendingCorrectionStateAttr_getMeta();}
void igBlendingCorrectionStateAttr_fieldInit(){
 void *value0=igBlendingCorrectionStateAttr_meta;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055E638,1);
 fn_800659C0(value0,lbl_8055E63C,lbl_8055E640,lbl_8055E644,value1);
}
void *igBlendingControlStateAttr_getMeta(){
 if(!igBlendingControlStateAttr_meta || !(reinterpret_cast<unsigned int *>(igBlendingControlStateAttr_meta)[0x24/4]&4)) igBlendingControlStateAttr_registerNow();
 return igBlendingControlStateAttr_meta;
}
void *igBlendingControlStateAttr_vtableRead(){
 UnknownGenObject800B9C20_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igBlendingControlStateAttr_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igBlendingControlStateAttr_registerNow(){
 meta_registerNow((int)igBlendingControlStateAttr_register);
}
void igBlendingControlStateAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igBlendingControlStateAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igBlendingControlStateAttr_getMetaCall,(int)igBlendingControlStateAttr_className,16,(int)igBlendingControlStateAttr_vtableRead,(int)igBlendingControlStateAttr_fieldInit,0,0);
}
void *igBlendingControlStateAttr_getMetaCall(){return igBlendingControlStateAttr_getMeta();}
void igBlendingControlStateAttr_fieldInit(){
 void *value0=igBlendingControlStateAttr_meta;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055E648,1);
 fn_800659C0(value0,lbl_8055E64C,lbl_8055E650,lbl_8055E654,value1);
}
void *igBlendStateAttr_create(void *object){
 igBlendStateAttr_registerNow();
 return meta_createInstance(igBlendStateAttr_meta,object);
}
void *fn_800B9DD0(){
 if(!igBlendStateAttr_meta) igBlendStateAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igBlendStateAttr_meta;
}
void *igBlendStateAttr_getMeta(){
 if(!igBlendStateAttr_meta || !(reinterpret_cast<unsigned int *>(igBlendStateAttr_meta)[0x24/4]&4)) igBlendStateAttr_registerNow();
 return igBlendStateAttr_meta;
}
void *igBlendStateAttr_vtableRead(){
 UnknownGenObject800B9E48_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igBlendStateAttr_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igBlendStateAttr_registerNow(){
 meta_registerNow((int)igBlendStateAttr_register);
}
void igBlendStateAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igBlendStateAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igBlendStateAttr_getMetaCall,(int)igBlendStateAttr_className,16,(int)igBlendStateAttr_vtableRead,(int)igBlendStateAttr_fieldInit,0,0);
}
void *igBlendStateAttr_getMetaCall(){return igBlendStateAttr_getMeta();}
void igBlendStateAttr_fieldInit(){
 void *value0=igBlendStateAttr_meta;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055E658,1);
 fn_800659C0(value0,lbl_8055E65C,lbl_8055E660,lbl_8055E664,value1);
}
void *fn_800B9FC0(){
 if(!igBlendMatrixPaletteAttrList_meta) igBlendMatrixPaletteAttrList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igBlendMatrixPaletteAttrList_meta;
}
void *igBlendMatrixPaletteAttrList_getMeta(){
 if(!igBlendMatrixPaletteAttrList_meta || !(reinterpret_cast<unsigned int *>(igBlendMatrixPaletteAttrList_meta)[0x24/4]&4)) igBlendMatrixPaletteAttrList_registerNow();
 return igBlendMatrixPaletteAttrList_meta;
}
void *igBlendMatrixPaletteAttrList_vtableRead(){
 UnknownGenObject800BA038_0 object;
 fn_8006665C(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_8047DBB4;
 object.unknown00=igBlendMatrixPaletteAttrList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igBlendMatrixPaletteAttrList_registerNow(){
 meta_registerNow((int)igBlendMatrixPaletteAttrList_register);
}
void igBlendMatrixPaletteAttrList_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igBlendMatrixPaletteAttrList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igBlendMatrixPaletteAttrList_getMetaCall,(int)igBlendMatrixPaletteAttrList_className,20,(int)igBlendMatrixPaletteAttrList_vtableRead,0,0,(int)lbl_8055E668);
}
void *igBlendMatrixPaletteAttrList_getMetaCall(){return igBlendMatrixPaletteAttrList_getMeta();}
void *igBlendMatrixPaletteAttr_create(void *object){
 igBlendMatrixPaletteAttr_registerNow();
 return meta_createInstance(igBlendMatrixPaletteAttr_meta,object);
}
void *fn_800BA194(){
 if(!igBlendMatrixPaletteAttr_meta) igBlendMatrixPaletteAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igBlendMatrixPaletteAttr_meta;
}
void *igBlendMatrixPaletteAttr_getMeta(){
 if(!igBlendMatrixPaletteAttr_meta || !(reinterpret_cast<unsigned int *>(igBlendMatrixPaletteAttr_meta)[0x24/4]&4)) igBlendMatrixPaletteAttr_registerNow();
 return igBlendMatrixPaletteAttr_meta;
}
void *igBlendMatrixPaletteAttr_vtableRead(){
 UnknownGenObject800BA20C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igBlendMatrixPaletteAttr_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igBlendMatrixPaletteAttr_registerNow(){
 meta_registerNow((int)igBlendMatrixPaletteAttr_register);
}
void igBlendMatrixPaletteAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igBlendMatrixPaletteAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igBlendMatrixPaletteAttr_getMetaCall,(int)igBlendMatrixPaletteAttr_className,28,(int)igBlendMatrixPaletteAttr_vtableRead,(int)igBlendMatrixPaletteAttr_fieldInit,0,0);
}
void *igBlendMatrixPaletteAttr_getMetaCall(){return igBlendMatrixPaletteAttr_getMeta();}
}
#pragma pop
