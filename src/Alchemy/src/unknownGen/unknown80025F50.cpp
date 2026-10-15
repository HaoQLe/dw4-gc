#include <unknownGen.h>
#include <meta/igMetaObject.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void fn_80021B94();
void *fn_80023CF4();
void igShortMetaField_arkRegister();
void *meta_newMetaObject(void *);
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
void fn_80071108(void *);
void *igGamecubeSemaphore_getMeta();
void igNamedObject_register();
void *igShortMetaField_getMeta();
void igShortMetaField_register();
extern char igShortArrayMetaField_className[];
extern char igSemaphore_className[];
extern char igShortArrayMetaField_vtable[];
extern char lbl_80471914[];
extern char lbl_80476848[];
extern char igShortArrayMetaField_dependencies[8];
extern char igShortArrayMetaField_fieldTypes[4];
extern char igShortArrayMetaField_fieldNames[4];
extern char igShortArrayMetaField_fieldStorage[4];
extern char igShortArrayMetaField_fieldOffsets[4];
extern void *igShortMetaField_meta;
extern void *lbl_805615DC;
extern void *igShortArrayMetaField_meta;
extern void *lbl_805615E4;
extern void *igSemaphore_meta;
extern void *lbl_805621F4;
void *igShortArrayMetaField_getMeta();
void *igShortArrayMetaField_vtableRead();
void igShortArrayMetaField_arkRegister();
void igShortArrayMetaField_register();
void *igShortArrayMetaField_getMetaCall();
void *igShortArrayMetaField_parentMeta();
void igShortArrayMetaField_fieldInit();
void *igSemaphore_getMeta();
void igSemaphore_arkRegister();
void igSemaphore_register();
void *igSemaphore_getMetaCall();
void *fn_8002614C();
void *igGamecubeSemaphore_getMetaCall();
}
struct UnknownGenRoot80025D78 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80025D78(){fn_80071108(this);}
};
struct UnknownGenObject80025D78_0 : UnknownGenRoot80025D78 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject80025D78_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject80025D78_1 : UnknownGenObject80025D78_0 {
 inline ~UnknownGenObject80025D78_1(){unknown00=lbl_80476848;}
};
struct UnknownGenObject80025D78 : UnknownGenObject80025D78_1 {
 char unknown10[48];
 inline ~UnknownGenObject80025D78(){unknown00=igShortArrayMetaField_vtable;}
};
extern "C" {
void fn_80025F50(){
 if(!lbl_805615E4){
  void *object=(lbl_805615E4=meta_createInstance(igShortArrayMetaField_meta,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_805615E4));
   reinterpret_cast<short *>(lbl_805615E4)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_805615E4);
  }
 }
}
}
#pragma pop
