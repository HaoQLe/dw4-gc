#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_80024D1C();
void igObjectRefMetaField_arkRegister();
void *meta_newMetaObject(void *);
void fn_80053650(void *,int);
void *fn_80053998(void *,void *);
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *meta_createInstance(void *,void *);
void fn_8006588C(void *,void *,void *);
void *meta_field(void *,void *);
UnknownGenFactory *fn_800658F8(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8006ACA4(void *);
void igDataList_register();
void igDirEntry_register();
void igObjectDirEntry_fieldInit();
void igObjectRefMetaField_register();
extern char igObjectRefArrayMetaField_className[];
extern char igObjectList_className[];
extern char igObjectDirEntry_dependencies[];
extern char igObjectDirEntry_className[];
extern char lbl_80471384[];
extern char igObjectRefArrayMetaField_vtable[];
extern char igObjectDirEntry_vtable[];
extern char lbl_80471914[];
extern char igDirEntry_vtable[];
extern char igDataList_vtable[];
extern char lbl_804762FC[];
extern char igNamedObject_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char lbl_8055D0A0[6];
extern char igObjectRefArrayMetaField_dependencies[8];
extern char igObjectRefArrayMetaField_fieldTypes[4];
extern char igObjectRefArrayMetaField_fieldNames[4];
extern char igObjectRefArrayMetaField_fieldStorage[4];
extern char igObjectRefArrayMetaField_fieldOffsets[4];
extern void *igObjectRefMetaField_meta;
extern void *lbl_805616EC;
extern void *igObjectRefArrayMetaField_meta;
extern void *lbl_80561700;
extern void *igObjectList_meta;
extern char lbl_8056170C[4];
extern void *igObjectDirEntry_meta;
extern void *igDirEntry_meta;
extern void *lbl_805621F4;
void *fn_80028BFC();
void *igObjectRefArrayMetaField_getMeta();
void *igObjectRefArrayMetaField_vtableRead();
void igObjectRefArrayMetaField_arkRegister();
void igObjectRefArrayMetaField_register();
void *igObjectRefArrayMetaField_getMetaCall();
void *igObjectRefArrayMetaField_parentMeta();
void igObjectRefArrayMetaField_fieldInit();
void *igObjectList_getMeta();
void *igObjectList_vtableRead();
void igObjectList_arkRegister();
void igObjectList_register();
void *igObjectList_getMetaCall();
void fn_8002910C();
void *igObjectDirEntry_getMeta();
void *igObjectDirEntry_vtableRead();
void igObjectDirEntry_arkRegister();
void igObjectDirEntry_register();
void *igObjectDirEntry_getMetaCall();
void *fn_8002942C();
}
struct UnknownGenRoot80028CA0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80028CA0(){fn_8006ACA4(this);}
};
struct UnknownGenObject80028CA0_0 : UnknownGenRoot80028CA0 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject80028CA0_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject80028CA0_1 : UnknownGenObject80028CA0_0 {
 inline ~UnknownGenObject80028CA0_1(){unknown00=lbl_80471384;}
};
struct UnknownGenObject80028CA0_2 : UnknownGenObject80028CA0_1 {
 char unknown10[48];
 UnknownGenString unknown40;
 inline ~UnknownGenObject80028CA0_2(){unknown00=lbl_804762FC;}
};
struct UnknownGenObject80028CA0 : UnknownGenObject80028CA0_2 {
 char unknown44[12];
 inline ~UnknownGenObject80028CA0(){unknown00=igObjectRefArrayMetaField_vtable;}
};
struct UnknownGenObject80028FFC_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot8002923C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8002923C(){igObject_construct(this);}
};
struct UnknownGenObject8002923C_0 : UnknownGenRoot8002923C {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject8002923C_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject8002923C_1 : UnknownGenObject8002923C_0 {
 inline ~UnknownGenObject8002923C_1(){unknown00=igDirEntry_vtable;}
};
struct UnknownGenObject8002923C : UnknownGenObject8002923C_1 {
 char unknown0C[16];
 UnknownGenRefMember unknown1C;
 UnknownGenString unknown20;
 char unknown24[20];
 inline ~UnknownGenObject8002923C(){unknown00=igObjectDirEntry_vtable;}
};
extern "C" {
void fn_80028EB4(){
 if(!lbl_80561700){
  void *object=(lbl_80561700=meta_createInstance(igObjectRefArrayMetaField_meta,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80561700));
   reinterpret_cast<short *>(lbl_80561700)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80561700);
  }
 }
}
}
#pragma pop
