#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_80021D70();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_80032B94();
void fn_80053650(void *,int);
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void fn_800638E0(void *);
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
void igDirectory_fieldInit();
void igMetaField_register();
void igObjectList_register();
extern char igDoubleMetaField_className[];
extern char igDoubleArrayMetaField_className[];
extern char igDirectoryList_className[];
extern char igDirectory_dependencies[];
extern char igDirectory_className[];
extern char lbl_80471914[];
extern char igDoubleMetaField_vtable[];
extern char igDoubleArrayMetaField_vtable[];
extern char igDirectory_vtable[];
extern char igDataList_vtable[];
extern char igDirectoryList_vtable[];
extern char lbl_80475824[];
extern char lbl_80475A34[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igDoubleMetaField_dependencies[8];
extern char igDoubleArrayMetaField_dependencies[8];
extern char igDoubleArrayMetaField_fieldTypes[4];
extern char igDoubleArrayMetaField_fieldNames[4];
extern char igDoubleArrayMetaField_fieldStorage[4];
extern char igDoubleArrayMetaField_fieldOffsets[4];
extern char igDirectoryList_dependencies[8];
extern void *igDoubleMetaField_meta;
extern void *lbl_80561C98;
extern void *igDoubleArrayMetaField_meta;
extern void *lbl_80561CA0;
extern void *igDirectoryList_meta;
extern void *igDirectory_meta;
extern void *lbl_805621F4;
void *igDoubleMetaField_getMeta();
void *igDoubleMetaField_vtableRead();
void igDoubleMetaField_arkRegister();
void igDoubleMetaField_register();
void *igDoubleMetaField_getMetaCall();
void *igDoubleArrayMetaField_getMeta();
void *igDoubleArrayMetaField_vtableRead();
void igDoubleArrayMetaField_arkRegister();
void igDoubleArrayMetaField_register();
void *igDoubleArrayMetaField_getMetaCall();
void *igDoubleArrayMetaField_parentMeta();
void igDoubleArrayMetaField_fieldInit();
void *igDirectoryList_getMeta();
void *igDirectoryList_vtableRead();
void igDirectoryList_arkRegister();
void igDirectoryList_register();
void *igDirectoryList_getMetaCall();
void *igDirectory_getMeta();
void *igDirectory_vtableRead();
void igDirectory_arkRegister();
void igDirectory_register();
void *igDirectory_getMetaCall();
}
struct UnknownGenRoot80032014 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80032014(){fn_800638E0(this);}
};
struct UnknownGenObject80032014_0 : UnknownGenRoot80032014 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject80032014_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject80032014 : UnknownGenObject80032014_0 {
 char unknown10[48];
 inline ~UnknownGenObject80032014(){unknown00=igDoubleMetaField_vtable;}
};
struct UnknownGenRoot80032258 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80032258(){fn_800638E0(this);}
};
struct UnknownGenObject80032258_0 : UnknownGenRoot80032258 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject80032258_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject80032258_1 : UnknownGenObject80032258_0 {
 inline ~UnknownGenObject80032258_1(){unknown00=igDoubleMetaField_vtable;}
};
struct UnknownGenObject80032258 : UnknownGenObject80032258_1 {
 char unknown10[48];
 inline ~UnknownGenObject80032258(){unknown00=igDoubleArrayMetaField_vtable;}
};
struct UnknownGenObject80032544_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot80032718 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80032718(){igObject_construct(this);}
};
struct UnknownGenObject80032718 : UnknownGenRoot80032718 {
 char unknown04[16];
 UnknownGenString unknown14;
 UnknownGenRefMember unknown18;
 UnknownGenRefMember unknown1C;
 char unknown20[8];
 UnknownGenRefMember unknown28;
 UnknownGenRefMember unknown2C;
 char unknown30[12];
 UnknownGenRefMember unknown3C;
 char unknown40[4];
 UnknownGenRefMember unknown44;
 inline ~UnknownGenObject80032718(){unknown00=igDirectory_vtable;}
};
extern "C" {
void fn_80032434(){
 if(!lbl_80561CA0){
  void *object=(lbl_80561CA0=meta_createInstance(igDoubleArrayMetaField_meta,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80561CA0));
   reinterpret_cast<short *>(lbl_80561CA0)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80561CA0);
  }
 }
}
void *fn_800324CC(){
 if(!igDirectoryList_meta) igDirectoryList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igDirectoryList_meta;
}
}
#pragma pop
