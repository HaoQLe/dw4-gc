#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_80023CF4();
void *fn_80024180();
void *meta_newMetaObject(void *);
void igIntMetaField_arkRegister();
void igIGBFile_arkRegister();
void *fn_800326A0();
void fn_8003EC68(void *,int);
void fn_800535B8(void *);
void fn_80053650(void *,int);
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
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
void *igIntMetaField_getMeta();
void igIntMetaField_register();
void igNamedObject_register();
void igObjectList_register();
extern char igIntArrayMetaField_className[];
extern char igInfoList_className[];
extern char lbl_80471914[];
extern char igIntArrayMetaField_vtable[];
extern char igInfo_vtable[];
extern char igDataList_vtable[];
extern char igInfoList_vtable[];
extern char lbl_80475AFC[];
extern char lbl_80475B60[];
extern char igNamedObject_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igIntArrayMetaField_dependencies[8];
extern char igIntArrayMetaField_fieldTypes[4];
extern char igIntArrayMetaField_fieldNames[4];
extern char igIntArrayMetaField_fieldStorage[4];
extern char igIntArrayMetaField_fieldOffsets[4];
extern char igInfoList_dependencies[8];
extern char igInfo_dependencies[8];
extern char lbl_8055D3F4[7];
extern char igInfo_fieldTypes[8];
extern char igInfo_fieldNames[8];
extern char igInfo_fieldStorage[8];
extern char igInfo_fieldOffsets[8];
extern void *igIntMetaField_meta;
extern void *lbl_805619E4;
extern void *igIntArrayMetaField_meta;
extern void *lbl_805619EC;
extern void *igInfoList_meta;
extern void *igInfo_meta;
extern void *igIGBFile_meta;
extern void *lbl_805621F4;
void *igIntArrayMetaField_getMeta();
void *igIntArrayMetaField_vtableRead();
void igIntArrayMetaField_arkRegister();
void igIntArrayMetaField_register();
void *igIntArrayMetaField_getMetaCall();
void *igIntArrayMetaField_parentMeta();
void igIntArrayMetaField_fieldInit();
void *igInfoList_getMeta();
void *igInfoList_vtableRead();
void igInfoList_arkRegister();
void igInfoList_register();
void *igInfoList_getMetaCall();
void *igInfo_getMeta();
void *igInfo_vtableRead();
void igInfo_arkRegister();
void igInfo_register();
void *igInfo_getMetaCall();
void igInfo_fieldInit();
}
struct UnknownGenRoot8002E57C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8002E57C(){fn_800535B8(this);}
};
struct UnknownGenObject8002E57C_0 : UnknownGenRoot8002E57C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8002E57C_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8002E57C_1 : UnknownGenObject8002E57C_0 {
 inline ~UnknownGenObject8002E57C_1(){unknown00=lbl_80475B60;}
};
struct UnknownGenObject8002E57C : UnknownGenObject8002E57C_1 {
 char unknown10[48];
 inline ~UnknownGenObject8002E57C(){unknown00=igIntArrayMetaField_vtable;}
};
struct UnknownGenObject8002E89C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot8002E9FC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8002E9FC(){igObject_construct(this);}
};
struct UnknownGenObject8002E9FC_0 : UnknownGenRoot8002E9FC {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject8002E9FC_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject8002E9FC : UnknownGenObject8002E9FC_0 {
 char unknown0C[20];
 inline ~UnknownGenObject8002E9FC(){unknown00=igInfo_vtable;}
};
extern "C" {
void fn_8002E440(){
 if(!lbl_805619E4){
  void *object=(lbl_805619E4=meta_createInstance(igIntMetaField_meta,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_805619E4));
   reinterpret_cast<short *>(lbl_805619E4)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_805619E4);
  }
 }
}
void *fn_8002E4D8(){
 if(!lbl_805619E4){
  igIntMetaField_arkRegister();
 }
 return lbl_805619E4;
}
}
#pragma pop
