#include <unknownGen.h>
#include <meta/igItemDataBaseField.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_80033638();
void *fn_80053998(void *,void *);
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void fn_800638E0(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *meta_createInstance(void *,void *);
void fn_8006588C(void *,void *,void *);
UnknownGenFactory *fn_800658F8(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8012FC48();
void fn_80145624(void *);
void fn_80177F30();
void igCompoundList_register();
void igCompoundMetaField_register();
extern char lbl_80471914[];
extern char lbl_80474018[];
extern char igItemDataBaseList_className[];
extern char igItemDataBaseField_className[];
extern char igItemDataBaseField_vtable[];
extern char igItemDataBaseList_vtable[];
extern char lbl_804A99B0[];
extern char igCompoundList_vtable[];
extern char lbl_8055F4B4[6];
extern char igItemDataBaseField_dependencies[8];
extern void *lbl_805621F4;
extern void *igCompoundList_meta;
extern void *igItemDataBaseList_meta;
extern char lbl_80564150[4];
extern void *igItemDataBaseField_meta;
extern void *lbl_80564158;
void *igItemDataBaseList_getMeta();
void *igItemDataBaseList_vtableRead();
void igItemDataBaseList_arkRegister();
void igItemDataBaseList_register();
void *igItemDataBaseList_getMetaCall();
void *fn_801452A8();
void fn_801452B0();
void *igItemDataBaseField_getMeta();
void *igItemDataBaseField_vtableRead();
void igItemDataBaseField_arkRegister();
void igItemDataBaseField_register();
void *igItemDataBaseField_getMetaCall();
void *fn_801455C8();
}
struct UnknownGenObject80145198_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801453A8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801453A8(){fn_800638E0(this);}
};
struct UnknownGenObject801453A8_0 : UnknownGenRoot801453A8 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject801453A8_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject801453A8_1 : UnknownGenObject801453A8_0 {
 char unknown10[36];
 UnknownGenRefMember unknown34;
 inline ~UnknownGenObject801453A8_1(){unknown00=lbl_80474018;}
};
struct UnknownGenObject801453A8 : UnknownGenObject801453A8_1 {
 char unknown38[8];
 inline ~UnknownGenObject801453A8(){unknown00=igItemDataBaseField_vtable;}
};
extern "C" {
void fn_80145530(){
 if(!lbl_80564158){
  void *object=(lbl_80564158=meta_createInstance(igItemDataBaseField_meta,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80564158));
   reinterpret_cast<short *>(lbl_80564158)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80564158);
  }
 }
}
void *fn_801455C8(){
 if(!lbl_80564158){
  igItemDataBaseField_arkRegister();
 }
 return lbl_80564158;
}
int igItemDataBaseField_virtual64(){return 12;}
void igItemDataBaseField_virtual2C(int p0){
 fn_80145624(reinterpret_cast<Meta::igItemDataBaseField *>((void *)p0)->_fieldList);
}
}
#pragma pop
