#include <unknownGen.h>
#include <meta/igTrackedElementMetaField.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80033638();
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void fn_800638E0(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_800CE2F8();
void fn_800D2C30(void *);
void igCompoundMetaField_register();
extern char lbl_80471914[];
extern char lbl_80474018[];
extern char igTrackedElementMetaField_className[];
extern char igTrackedElementMetaField_vtable[];
extern char igTrackedElementMetaField_dependencies[8];
extern void *lbl_805621F4;
extern void *igTrackedElementMetaField_meta;
extern void *lbl_80562FE0;
void *igTrackedElementMetaField_getMeta();
void *igTrackedElementMetaField_vtableRead();
void igTrackedElementMetaField_arkRegister();
void igTrackedElementMetaField_register();
void *igTrackedElementMetaField_getMetaCall();
}
struct UnknownGenRoot800D29B4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800D29B4(){fn_800638E0(this);}
};
struct UnknownGenObject800D29B4_0 : UnknownGenRoot800D29B4 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject800D29B4_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject800D29B4_1 : UnknownGenObject800D29B4_0 {
 char unknown10[36];
 UnknownGenRefMember unknown34;
 inline ~UnknownGenObject800D29B4_1(){unknown00=lbl_80474018;}
};
struct UnknownGenObject800D29B4 : UnknownGenObject800D29B4_1 {
 char unknown38[8];
 inline ~UnknownGenObject800D29B4(){unknown00=igTrackedElementMetaField_vtable;}
};
extern "C" {
void fn_800D2B3C(){
 if(!lbl_80562FE0){
  void *object=(lbl_80562FE0=meta_createInstance(igTrackedElementMetaField_meta,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80562FE0));
   reinterpret_cast<short *>(lbl_80562FE0)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80562FE0);
  }
 }
}
void *fn_800D2BD4(){
 if(!lbl_80562FE0){
  igTrackedElementMetaField_arkRegister();
 }
 return lbl_80562FE0;
}
int igTrackedElementMetaField_virtual64(){return 12;}
void igTrackedElementMetaField_virtual2C(int p0){
 fn_800D2C30(reinterpret_cast<Meta::igTrackedElementMetaField *>((void *)p0)->_fieldList);
}
}
#pragma pop
