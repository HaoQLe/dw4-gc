#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_80024180();
void *meta_newMetaObject(void *);
void igMemoryRefMetaField_arkRegister();
void igMemoryPoolInfo_arkRegister();
void fn_80053650(void *,int);
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void fn_800632A4(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void igMemoryRefMetaField_register();
void igObjectList_register();
extern char igMemoryRefArrayMetaField_className[];
extern char igMemoryPoolInfoList_className[];
extern char lbl_80471384[];
extern char lbl_80471914[];
extern char igMemoryRefArrayMetaField_vtable[];
extern char igDataList_vtable[];
extern char igMemoryPoolInfoList_vtable[];
extern char lbl_80476024[];
extern char lbl_80476088[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igMemoryRefArrayMetaField_dependencies[8];
extern char igMemoryRefArrayMetaField_fieldTypes[4];
extern char igMemoryRefArrayMetaField_fieldNames[4];
extern char igMemoryRefArrayMetaField_fieldStorage[4];
extern char igMemoryRefArrayMetaField_fieldOffsets[4];
extern char igMemoryPoolInfoList_dependencies[8];
extern void *igMemoryRefMetaField_meta;
extern void *lbl_8056181C;
extern void *igMemoryRefArrayMetaField_meta;
extern void *lbl_8056184C;
extern void *igMemoryPoolInfoList_meta;
extern void *igMemoryPoolInfo_meta;
extern void *lbl_805621F4;
void *igMemoryRefArrayMetaField_getMeta();
void *igMemoryRefArrayMetaField_vtableRead();
void igMemoryRefArrayMetaField_arkRegister();
void igMemoryRefArrayMetaField_register();
void *igMemoryRefArrayMetaField_getMetaCall();
void *igMemoryRefArrayMetaField_parentMeta();
void igMemoryRefArrayMetaField_fieldInit();
void *igMemoryPoolInfoList_getMeta();
void *igMemoryPoolInfoList_vtableRead();
void igMemoryPoolInfoList_arkRegister();
void igMemoryPoolInfoList_register();
void *igMemoryPoolInfoList_getMetaCall();
}
struct UnknownGenRoot8002B27C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8002B27C(){fn_800632A4(this);}
};
struct UnknownGenObject8002B27C_0 : UnknownGenRoot8002B27C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8002B27C_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8002B27C_1 : UnknownGenObject8002B27C_0 {
 inline ~UnknownGenObject8002B27C_1(){unknown00=lbl_80471384;}
};
struct UnknownGenObject8002B27C_2 : UnknownGenObject8002B27C_1 {
 char unknown10[56];
 UnknownGenRefMember unknown48;
 UnknownGenString unknown4C;
 inline ~UnknownGenObject8002B27C_2(){unknown00=lbl_80476088;}
};
struct UnknownGenObject8002B27C : UnknownGenObject8002B27C_2 {
 char unknown50[16];
 inline ~UnknownGenObject8002B27C(){unknown00=igMemoryRefArrayMetaField_vtable;}
};
struct UnknownGenObject8002B5D0_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *igMemoryPoolInfo_create(void *object){
 igMemoryPoolInfo_arkRegister();
 return meta_createInstance(igMemoryPoolInfo_meta,object);
}
void *igMemoryPoolInfo_getMeta(){
 if(!igMemoryPoolInfo_meta || !(reinterpret_cast<unsigned int *>(igMemoryPoolInfo_meta)[0x24/4]&4)) igMemoryPoolInfo_arkRegister();
 return igMemoryPoolInfo_meta;
}
}
#pragma pop
