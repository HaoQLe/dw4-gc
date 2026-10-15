#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80046E58(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800ABC8C();
void *fn_800AC294();
void *fn_800AD708();
void *fn_800C1444(int);
void fn_800CE17C();
void igCustomStateCollectionAttr_register();
void igMaterialAttr_fieldInit();
void *igMatrixConstantAttr_getMeta();
void igMatrixConstantAttr_vtableRead();
void igVisualAttribute_register();
extern char igMatrixConstantAttr_className[];
extern char igMaterialModeAttr_className[];
extern char igMaterialAttr_className[];
extern char igMaterialModeAttr_vtable[];
extern char igMaterialAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_8055E398[8];
extern char lbl_8055E3A0[8];
extern char lbl_8055E3A8[8];
extern char lbl_8055E3B0[8];
extern char lbl_8055E3B8[4];
extern char lbl_8055E3BC[4];
extern char lbl_8055E3C0[4];
extern char lbl_8055E3C4[4];
extern char lbl_8055E3C8[4];
extern void *igMatrixConstantAttr_meta;
extern void *igMaterialModeAttr_meta;
extern void *igMaterialAttr_meta;
void igMatrixConstantAttr_register();
void *igMatrixConstantAttr_getMetaCall();
void igMatrixConstantAttr_fieldInit();
void *igMaterialModeAttr_getMeta();
void *igMaterialModeAttr_vtableRead();
void igMaterialModeAttr_registerNow();
void igMaterialModeAttr_register();
void *igMaterialModeAttr_getMetaCall();
void igMaterialModeAttr_fieldInit();
void *igMaterialAttr_getMeta();
void *igMaterialAttr_vtableRead();
void igMaterialAttr_registerNow();
void igMaterialAttr_register();
void *igMaterialAttr_getMetaCall();
}
struct UnknownGenObject800B4A00_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B4BD8_0 {
 void *unknown00;
 char unknown04[84];
};
extern "C" {
void igMatrixConstantAttr_registerNow(){
 meta_registerNow((int)igMatrixConstantAttr_register);
}
void igMatrixConstantAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igMatrixConstantAttr_meta,(int)igCustomStateCollectionAttr_register,(int)fn_800AD708,(int)igMatrixConstantAttr_getMetaCall,(int)igMatrixConstantAttr_className,80,(int)igMatrixConstantAttr_vtableRead,(int)igMatrixConstantAttr_fieldInit,0,0);
}
void *igMatrixConstantAttr_getMetaCall(){return igMatrixConstantAttr_getMeta();}
void igMatrixConstantAttr_fieldInit(){
 void *value0=igMatrixConstantAttr_meta;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055E398,2);
 void *value2=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+48)=(void *)fn_800C1444;
 fn_800659C0(value0,lbl_8055E3A0,lbl_8055E3A8,lbl_8055E3B0,value1);
}
void *igMaterialModeAttr_getMeta(){
 if(!igMaterialModeAttr_meta || !(reinterpret_cast<unsigned int *>(igMaterialModeAttr_meta)[0x24/4]&4)) igMaterialModeAttr_registerNow();
 return igMaterialModeAttr_meta;
}
void *igMaterialModeAttr_vtableRead(){
 UnknownGenObject800B4A00_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igMaterialModeAttr_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igMaterialModeAttr_registerNow(){
 meta_registerNow((int)igMaterialModeAttr_register);
}
void igMaterialModeAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igMaterialModeAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igMaterialModeAttr_getMetaCall,(int)igMaterialModeAttr_className,16,(int)igMaterialModeAttr_vtableRead,(int)igMaterialModeAttr_fieldInit,0,0);
}
void *igMaterialModeAttr_getMetaCall(){return igMaterialModeAttr_getMeta();}
void igMaterialModeAttr_fieldInit(){
 void *value0=igMaterialModeAttr_meta;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055E3B8,1);
 void *value2=fn_800658E4(value0,value1);
 fn_80046E58(value2,lbl_8055E3C8);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+52)=(void *)fn_800CE17C;
 fn_800659C0(value0,lbl_8055E3BC,lbl_8055E3C0,lbl_8055E3C4,value1);
}
void *igMaterialAttr_getMeta(){
 if(!igMaterialAttr_meta || !(reinterpret_cast<unsigned int *>(igMaterialAttr_meta)[0x24/4]&4)) igMaterialAttr_registerNow();
 return igMaterialAttr_meta;
}
void *igMaterialAttr_vtableRead(){
 UnknownGenObject800B4BD8_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igMaterialAttr_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igMaterialAttr_registerNow(){
 meta_registerNow((int)igMaterialAttr_register);
}
void igMaterialAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igMaterialAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igMaterialAttr_getMetaCall,(int)igMaterialAttr_className,84,(int)igMaterialAttr_vtableRead,(int)igMaterialAttr_fieldInit,0,0);
}
void *igMaterialAttr_getMetaCall(){return igMaterialAttr_getMeta();}
}
#pragma pop
