#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_80021D70();
void *fn_800237D0();
void *meta_newMetaObject(void *);
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
void *igGamecubeLongTimer_getMeta();
void igLocationTable_fieldInit();
void igMetaField_register();
void igObject_register();
extern char igLongMetaField_className[];
extern char igLongArrayMetaField_className[];
extern char igLocationTable_dependencies[];
extern char igLocationTable_className[];
extern char lbl_80471914[];
extern char igLongMetaField_vtable[];
extern char igLongArrayMetaField_vtable[];
extern char igLocationTable_vtable[];
extern char igLongMetaField_dependencies[8];
extern char igLongArrayMetaField_dependencies[8];
extern char igLongArrayMetaField_fieldTypes[4];
extern char igLongArrayMetaField_fieldNames[4];
extern char igLongArrayMetaField_fieldStorage[4];
extern char igLongArrayMetaField_fieldOffsets[4];
extern void *igLongMetaField_meta;
extern void *lbl_80561990;
extern void *igLongArrayMetaField_meta;
extern void *lbl_80561998;
extern void *igLocationTable_meta;
extern void *lbl_805621F4;
void *igLongMetaField_getMeta();
void *igLongMetaField_vtableRead();
void igLongMetaField_arkRegister();
void igLongMetaField_register();
void *igLongMetaField_getMetaCall();
void *igLongArrayMetaField_getMeta();
void *igLongArrayMetaField_vtableRead();
void igLongArrayMetaField_arkRegister();
void igLongArrayMetaField_register();
void *igLongArrayMetaField_getMetaCall();
void *igLongArrayMetaField_parentMeta();
void igLongArrayMetaField_fieldInit();
void *igLocationTable_getMeta();
void *igLocationTable_vtableRead();
void igLocationTable_arkRegister();
void igLocationTable_register();
void *igLocationTable_getMetaCall();
}
struct UnknownGenRoot8002CF1C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8002CF1C(){fn_800638E0(this);}
};
struct UnknownGenObject8002CF1C_0 : UnknownGenRoot8002CF1C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8002CF1C_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8002CF1C : UnknownGenObject8002CF1C_0 {
 char unknown10[48];
 inline ~UnknownGenObject8002CF1C(){unknown00=igLongMetaField_vtable;}
};
struct UnknownGenRoot8002D160 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8002D160(){fn_800638E0(this);}
};
struct UnknownGenObject8002D160_0 : UnknownGenRoot8002D160 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8002D160_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8002D160_1 : UnknownGenObject8002D160_0 {
 inline ~UnknownGenObject8002D160_1(){unknown00=igLongMetaField_vtable;}
};
struct UnknownGenObject8002D160 : UnknownGenObject8002D160_1 {
 char unknown10[48];
 inline ~UnknownGenObject8002D160(){unknown00=igLongArrayMetaField_vtable;}
};
struct UnknownGenRoot8002D44C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8002D44C(){igObject_construct(this);}
};
struct UnknownGenObject8002D44C : UnknownGenRoot8002D44C {
 char unknown04[12];
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 UnknownGenRefMember unknown1C;
 char unknown20[8];
 inline ~UnknownGenObject8002D44C(){unknown00=igLocationTable_vtable;}
};
extern "C" {
void fn_8002D05C(){
 if(!lbl_80561990){
  void *object=(lbl_80561990=meta_createInstance(igLongMetaField_meta,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80561990));
   reinterpret_cast<short *>(lbl_80561990)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80561990);
  }
 }
}
void *fn_8002D0F4(){
 if(!lbl_80561990){
  igLongMetaField_arkRegister();
 }
 return lbl_80561990;
}
}
#pragma pop
