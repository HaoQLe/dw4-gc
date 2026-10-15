#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800237D0();
void *meta_newMetaObject(void *);
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void igObject_register();
void igStringTable_fieldInit();
extern char igStringTable_dependencies[];
extern char igStringTable_className[];
extern char igStringTable_vtable[];
extern void *igStructMetaField_meta;
extern void *lbl_80561564;
extern void *igStringTable_meta;
extern void *lbl_805621F4;
void *igStringTable_getMeta();
void *igStringTable_vtableRead();
void igStringTable_arkRegister();
void igStringTable_register();
void *igStringTable_getMetaCall();
}
struct UnknownGenRoot8002492C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8002492C(){igObject_construct(this);}
};
struct UnknownGenObject8002492C : UnknownGenRoot8002492C {
 char unknown04[12];
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 char unknown18[8];
 inline ~UnknownGenObject8002492C(){unknown00=igStringTable_vtable;}
};
extern "C" {
void fn_800247E4(){
 if(!lbl_80561564){
  void *object=(lbl_80561564=meta_createInstance(igStructMetaField_meta,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80561564));
   reinterpret_cast<short *>(lbl_80561564)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80561564);
  }
 }
}
}
#pragma pop
