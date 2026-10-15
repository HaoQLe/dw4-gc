#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void igUnsignedShortMetaField_arkRegister();
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
void fn_80075F0C(void *);
void *igUnsignedShortMetaField_getMeta();
void igUnsignedShortMetaField_register();
extern char igUnsignedShortArrayMetaField_className[];
extern char igUnsignedShortArrayMetaField_vtable[];
extern char lbl_80471914[];
extern char lbl_80477054[];
extern char igUnsignedShortArrayMetaField_dependencies[8];
extern char igUnsignedShortArrayMetaField_fieldTypes[4];
extern char igUnsignedShortArrayMetaField_fieldNames[4];
extern char igUnsignedShortArrayMetaField_fieldStorage[4];
extern char igUnsignedShortArrayMetaField_fieldOffsets[4];
extern void *igUnsignedShortMetaField_meta;
extern void *lbl_80561498;
extern void *igUnsignedShortArrayMetaField_meta;
extern void *lbl_805614A0;
extern void *lbl_805621F4;
void *igUnsignedShortArrayMetaField_getMeta();
void *igUnsignedShortArrayMetaField_vtableRead();
void igUnsignedShortArrayMetaField_arkRegister();
void igUnsignedShortArrayMetaField_register();
void *igUnsignedShortArrayMetaField_getMetaCall();
void *igUnsignedShortArrayMetaField_parentMeta();
void igUnsignedShortArrayMetaField_fieldInit();
}
struct UnknownGenRoot800221E0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800221E0(){fn_80075F0C(this);}
};
struct UnknownGenObject800221E0_0 : UnknownGenRoot800221E0 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject800221E0_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject800221E0_1 : UnknownGenObject800221E0_0 {
 inline ~UnknownGenObject800221E0_1(){unknown00=lbl_80477054;}
};
struct UnknownGenObject800221E0 : UnknownGenObject800221E0_1 {
 char unknown10[48];
 inline ~UnknownGenObject800221E0(){unknown00=igUnsignedShortArrayMetaField_vtable;}
};
extern "C" {
void *igUnsignedShortMetaField_getMetaCall(){return igUnsignedShortMetaField_getMeta();}
void fn_800220A4(){
 if(!lbl_80561498){
  void *object=(lbl_80561498=meta_createInstance(igUnsignedShortMetaField_meta,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80561498));
   reinterpret_cast<short *>(lbl_80561498)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80561498);
  }
 }
}
void *fn_8002213C(){
 if(!lbl_80561498){
  igUnsignedShortMetaField_arkRegister();
 }
 return lbl_80561498;
}
void *igUnsignedShortArrayMetaField_create(void *object){
 igUnsignedShortArrayMetaField_arkRegister();
 return meta_createInstance(igUnsignedShortArrayMetaField_meta,object);
}
void *igUnsignedShortArrayMetaField_getMeta(){
 if(!igUnsignedShortArrayMetaField_meta || !(reinterpret_cast<unsigned int *>(igUnsignedShortArrayMetaField_meta)[0x24/4]&4)) igUnsignedShortArrayMetaField_arkRegister();
 return igUnsignedShortArrayMetaField_meta;
}
void *igUnsignedShortArrayMetaField_vtableRead(){
 UnknownGenObject800221E0 object;
 object.unknown00=igUnsignedShortArrayMetaField_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igUnsignedShortArrayMetaField_arkRegister(){
 meta_registerNow((int)igUnsignedShortArrayMetaField_register);
}
void igUnsignedShortArrayMetaField_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igUnsignedShortArrayMetaField_meta,(int)igUnsignedShortMetaField_register,(int)igUnsignedShortArrayMetaField_parentMeta,(int)igUnsignedShortArrayMetaField_getMetaCall,(int)igUnsignedShortArrayMetaField_className,56,(int)igUnsignedShortArrayMetaField_vtableRead,(int)igUnsignedShortArrayMetaField_fieldInit,0,(int)igUnsignedShortArrayMetaField_dependencies);
}
void *igUnsignedShortArrayMetaField_getMetaCall(){return igUnsignedShortArrayMetaField_getMeta();}
void *igUnsignedShortArrayMetaField_parentMeta(){return igUnsignedShortMetaField_meta;}
void igUnsignedShortArrayMetaField_fieldInit(){
 void *meta=igUnsignedShortArrayMetaField_meta;
 void *field=meta_fieldCount(meta);
 meta_appendFields(meta,igUnsignedShortArrayMetaField_fieldTypes,1);
 fn_80053650(meta_field(meta,field),1);
 meta_setupFields(meta,igUnsignedShortArrayMetaField_fieldNames,igUnsignedShortArrayMetaField_fieldStorage,igUnsignedShortArrayMetaField_fieldOffsets,field);
}
void fn_800223B8(){
 if(!lbl_805614A0){
  void *object=(lbl_805614A0=meta_createInstance(igUnsignedShortArrayMetaField_meta,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_805614A0));
   reinterpret_cast<short *>(lbl_805614A0)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_805614A0);
  }
 }
}
}
#pragma pop
