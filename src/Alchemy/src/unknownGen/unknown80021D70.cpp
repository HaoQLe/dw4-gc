#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void fn_800638E0(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igMetaField_register();
extern char igVirtualCFuncMetaField_className[];
extern char igVirtualCFuncMetaField_vtable[];
extern char lbl_80471914[];
extern char igVirtualCFuncMetaField_dependencies[8];
extern void *igVirtualCFuncMetaField_meta;
extern void *lbl_80561490;
extern void *igMetaField_meta;
extern void *lbl_805621F4;
void *igVirtualCFuncMetaField_getMeta();
void *igVirtualCFuncMetaField_vtableRead();
void igVirtualCFuncMetaField_arkRegister();
void igVirtualCFuncMetaField_register();
void *igVirtualCFuncMetaField_getMetaCall();
void *fn_80021D70();
}
struct UnknownGenRoot80021C30 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80021C30(){fn_800638E0(this);}
};
struct UnknownGenObject80021C30_0 : UnknownGenRoot80021C30 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject80021C30_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject80021C30 : UnknownGenObject80021C30_0 {
 char unknown10[48];
 inline ~UnknownGenObject80021C30(){unknown00=igVirtualCFuncMetaField_vtable;}
};
extern "C" {
void *fn_80021D70(){return igMetaField_meta;}
void fn_80021D78(){
 if(!lbl_80561490){
  void *object=(lbl_80561490=meta_createInstance(igVirtualCFuncMetaField_meta,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80561490));
   reinterpret_cast<short *>(lbl_80561490)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80561490);
  }
 }
}
}
#pragma pop
