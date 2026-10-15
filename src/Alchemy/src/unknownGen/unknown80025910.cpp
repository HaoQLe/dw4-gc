#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void igStringMetaField_arkRegister();
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
void fn_80071E44(void *);
void igStringMetaField_register();
extern char igStringArrayMetaField_className[];
extern char igStringArrayMetaField_vtable[];
extern char lbl_80471384[];
extern char lbl_80471914[];
extern char lbl_8047693C[];
extern char igStringArrayMetaField_dependencies[8];
extern char igStringArrayMetaField_fieldTypes[4];
extern char igStringArrayMetaField_fieldNames[4];
extern char igStringArrayMetaField_fieldStorage[4];
extern char igStringArrayMetaField_fieldOffsets[4];
extern void *igStringMetaField_meta;
extern void *lbl_805615B8;
extern void *igStringArrayMetaField_meta;
extern void *lbl_805615CC;
extern void *lbl_805621F4;
void *igStringArrayMetaField_getMeta();
void *igStringArrayMetaField_vtableRead();
void igStringArrayMetaField_arkRegister();
void igStringArrayMetaField_register();
void *igStringArrayMetaField_getMetaCall();
void *igStringArrayMetaField_parentMeta();
void igStringArrayMetaField_fieldInit();
}
struct UnknownGenRoot8002572C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8002572C(){fn_80071E44(this);}
};
struct UnknownGenObject8002572C_0 : UnknownGenRoot8002572C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8002572C_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8002572C_1 : UnknownGenObject8002572C_0 {
 inline ~UnknownGenObject8002572C_1(){unknown00=lbl_80471384;}
};
struct UnknownGenObject8002572C_2 : UnknownGenObject8002572C_1 {
 inline ~UnknownGenObject8002572C_2(){unknown00=lbl_8047693C;}
};
struct UnknownGenObject8002572C : UnknownGenObject8002572C_2 {
 char unknown10[48];
 inline ~UnknownGenObject8002572C(){unknown00=igStringArrayMetaField_vtable;}
};
extern "C" {
void fn_80025910(){
 if(!lbl_805615CC){
  void *object=(lbl_805615CC=meta_createInstance(igStringArrayMetaField_meta,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_805615CC));
   reinterpret_cast<short *>(lbl_805615CC)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_805615CC);
  }
 }
}
}
#pragma pop
