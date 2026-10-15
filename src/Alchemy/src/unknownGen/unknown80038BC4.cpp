#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void igBoolMetaField_arkRegister();
void fn_8003EBC8(void *);
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
void *igBoolMetaField_getMeta();
void igBoolMetaField_register();
extern char igBoolArrayMetaField_className[];
extern char lbl_80471914[];
extern char igBoolArrayMetaField_vtable[];
extern char lbl_80473E30[];
extern char igBoolArrayMetaField_dependencies[8];
extern char igBoolArrayMetaField_fieldTypes[4];
extern char igBoolArrayMetaField_fieldNames[4];
extern char igBoolArrayMetaField_fieldStorage[4];
extern char igBoolArrayMetaField_fieldOffsets[4];
extern void *igBoolMetaField_meta;
extern void *lbl_80561E4C;
extern void *igBoolArrayMetaField_meta;
extern void *lbl_80561E54;
extern void *lbl_805621F4;
void *igBoolArrayMetaField_getMeta();
void *igBoolArrayMetaField_vtableRead();
void igBoolArrayMetaField_arkRegister();
void igBoolArrayMetaField_register();
void *igBoolArrayMetaField_getMetaCall();
void *igBoolArrayMetaField_parentMeta();
void igBoolArrayMetaField_fieldInit();
}
struct UnknownGenRoot800389EC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800389EC(){fn_8003EBC8(this);}
};
struct UnknownGenObject800389EC_0 : UnknownGenRoot800389EC {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject800389EC_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject800389EC_1 : UnknownGenObject800389EC_0 {
 inline ~UnknownGenObject800389EC_1(){unknown00=lbl_80473E30;}
};
struct UnknownGenObject800389EC : UnknownGenObject800389EC_1 {
 char unknown10[48];
 inline ~UnknownGenObject800389EC(){unknown00=igBoolArrayMetaField_vtable;}
};
extern "C" {
void fn_80038BC4(){
 if(!lbl_80561E54){
  void *object=(lbl_80561E54=meta_createInstance(igBoolArrayMetaField_meta,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80561E54));
   reinterpret_cast<short *>(lbl_80561E54)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80561E54);
  }
 }
}
}
#pragma pop
