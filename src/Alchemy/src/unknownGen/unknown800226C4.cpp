#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void igUnsignedLongMetaField_arkRegister();
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
void fn_80075C84(void *);
void *igUnsignedLongMetaField_getMeta();
void igUnsignedLongMetaField_register();
extern char igUnsignedLongArrayMetaField_className[];
extern char igUnsignedLongArrayMetaField_vtable[];
extern char lbl_80471914[];
extern char lbl_80476F60[];
extern char igUnsignedLongArrayMetaField_dependencies[8];
extern char igUnsignedLongArrayMetaField_fieldTypes[4];
extern char igUnsignedLongArrayMetaField_fieldNames[4];
extern char igUnsignedLongArrayMetaField_fieldStorage[4];
extern char igUnsignedLongArrayMetaField_fieldOffsets[4];
extern void *igUnsignedLongMetaField_meta;
extern void *lbl_805614AC;
extern void *igUnsignedLongArrayMetaField_meta;
extern void *lbl_805614B4;
extern void *lbl_805621F4;
void *igUnsignedLongArrayMetaField_getMeta();
void *igUnsignedLongArrayMetaField_vtableRead();
void igUnsignedLongArrayMetaField_arkRegister();
void igUnsignedLongArrayMetaField_register();
void *igUnsignedLongArrayMetaField_getMetaCall();
void *igUnsignedLongArrayMetaField_parentMeta();
void igUnsignedLongArrayMetaField_fieldInit();
}
struct UnknownGenRoot80022820 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80022820(){fn_80075C84(this);}
};
struct UnknownGenObject80022820_0 : UnknownGenRoot80022820 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject80022820_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject80022820_1 : UnknownGenObject80022820_0 {
 inline ~UnknownGenObject80022820_1(){unknown00=lbl_80476F60;}
};
struct UnknownGenObject80022820 : UnknownGenObject80022820_1 {
 char unknown10[48];
 inline ~UnknownGenObject80022820(){unknown00=igUnsignedLongArrayMetaField_vtable;}
};
extern "C" {
void *igUnsignedLongMetaField_getMetaCall(){return igUnsignedLongMetaField_getMeta();}
void fn_800226E4(){
 if(!lbl_805614AC){
  void *object=(lbl_805614AC=meta_createInstance(igUnsignedLongMetaField_meta,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_805614AC));
   reinterpret_cast<short *>(lbl_805614AC)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_805614AC);
  }
 }
}
void *fn_8002277C(){
 if(!lbl_805614AC){
  igUnsignedLongMetaField_arkRegister();
 }
 return lbl_805614AC;
}
void *igUnsignedLongArrayMetaField_create(void *object){
 igUnsignedLongArrayMetaField_arkRegister();
 return meta_createInstance(igUnsignedLongArrayMetaField_meta,object);
}
void *igUnsignedLongArrayMetaField_getMeta(){
 if(!igUnsignedLongArrayMetaField_meta || !(reinterpret_cast<unsigned int *>(igUnsignedLongArrayMetaField_meta)[0x24/4]&4)) igUnsignedLongArrayMetaField_arkRegister();
 return igUnsignedLongArrayMetaField_meta;
}
void *igUnsignedLongArrayMetaField_vtableRead(){
 UnknownGenObject80022820 object;
 object.unknown00=igUnsignedLongArrayMetaField_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igUnsignedLongArrayMetaField_arkRegister(){
 meta_registerNow((int)igUnsignedLongArrayMetaField_register);
}
void igUnsignedLongArrayMetaField_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igUnsignedLongArrayMetaField_meta,(int)igUnsignedLongMetaField_register,(int)igUnsignedLongArrayMetaField_parentMeta,(int)igUnsignedLongArrayMetaField_getMetaCall,(int)igUnsignedLongArrayMetaField_className,56,(int)igUnsignedLongArrayMetaField_vtableRead,(int)igUnsignedLongArrayMetaField_fieldInit,0,(int)igUnsignedLongArrayMetaField_dependencies);
}
void *igUnsignedLongArrayMetaField_getMetaCall(){return igUnsignedLongArrayMetaField_getMeta();}
void *igUnsignedLongArrayMetaField_parentMeta(){return igUnsignedLongMetaField_meta;}
void igUnsignedLongArrayMetaField_fieldInit(){
 void *meta=igUnsignedLongArrayMetaField_meta;
 void *field=meta_fieldCount(meta);
 meta_appendFields(meta,igUnsignedLongArrayMetaField_fieldTypes,1);
 fn_80053650(meta_field(meta,field),1);
 meta_setupFields(meta,igUnsignedLongArrayMetaField_fieldNames,igUnsignedLongArrayMetaField_fieldStorage,igUnsignedLongArrayMetaField_fieldOffsets,field);
}
void fn_800229F8(){
 if(!lbl_805614B4){
  void *object=(lbl_805614B4=meta_createInstance(igUnsignedLongArrayMetaField_meta,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_805614B4));
   reinterpret_cast<short *>(lbl_805614B4)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_805614B4);
  }
 }
}
}
#pragma pop
