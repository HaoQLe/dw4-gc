#include <unknownGen.h>
#include <meta/igMemoryDescriptorMetaField.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_80024D1C();
void *fn_80033638();
void fn_8003A418(void *);
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
void igCompoundMetaField_register();
void igDataList_register();
extern char igMemoryDescriptorList_className[];
extern char igMemoryDescriptorMetaField_className[];
extern char lbl_80471914[];
extern char igDataList_vtable[];
extern char igMemoryDescriptorMetaField_vtable[];
extern char igMemoryDescriptorList_vtable[];
extern char lbl_80473730[];
extern char lbl_80474018[];
extern char lbl_8055D0A0[6];
extern char igMemoryDescriptorMetaField_dependencies[8];
extern void *igMemoryDescriptorList_meta;
extern char lbl_80562008[4];
extern void *igMemoryDescriptorMetaField_meta;
extern void *lbl_80562010;
extern void *lbl_805621F4;
void *igMemoryDescriptorList_getMeta();
void *igMemoryDescriptorList_vtableRead();
void igMemoryDescriptorList_arkRegister();
void igMemoryDescriptorList_register();
void *igMemoryDescriptorList_getMetaCall();
void fn_8003A0A4();
void *igMemoryDescriptorMetaField_getMeta();
void *igMemoryDescriptorMetaField_vtableRead();
void igMemoryDescriptorMetaField_arkRegister();
void igMemoryDescriptorMetaField_register();
void *igMemoryDescriptorMetaField_getMetaCall();
void *fn_8003A3BC();
}
struct UnknownGenObject80039F94_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot8003A19C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8003A19C(){fn_800638E0(this);}
};
struct UnknownGenObject8003A19C_0 : UnknownGenRoot8003A19C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8003A19C_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8003A19C_1 : UnknownGenObject8003A19C_0 {
 char unknown10[36];
 UnknownGenRefMember unknown34;
 inline ~UnknownGenObject8003A19C_1(){unknown00=lbl_80474018;}
};
struct UnknownGenObject8003A19C : UnknownGenObject8003A19C_1 {
 char unknown38[8];
 inline ~UnknownGenObject8003A19C(){unknown00=igMemoryDescriptorMetaField_vtable;}
};
extern "C" {
void fn_8003A324(){
 if(!lbl_80562010){
  void *object=(lbl_80562010=meta_createInstance(igMemoryDescriptorMetaField_meta,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80562010));
   reinterpret_cast<short *>(lbl_80562010)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80562010);
  }
 }
}
void *fn_8003A3BC(){
 if(!lbl_80562010){
  igMemoryDescriptorMetaField_arkRegister();
 }
 return lbl_80562010;
}
int igMemoryDescriptorMetaField_virtual64(){return 4;}
void igMemoryDescriptorMetaField_virtual2C(int p0){
 fn_8003A418(reinterpret_cast<Meta::igMemoryDescriptorMetaField *>((void *)p0)->_fieldList);
}
}
#pragma pop
