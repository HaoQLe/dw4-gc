#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void igUnsignedShortMetaField_registerNow();
void fn_80053650(void *,int);
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *meta_createInstance(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_80075F0C(void *);
void *igUnsignedShortMetaField_getMeta();
void igUnsignedShortMetaField_register();
extern char igUnsignedShortArrayMetaField_className[];
extern char igUnsignedShortArrayMetaField_vtable[];
extern char lbl_80471914[];
extern char lbl_80477054[];
extern char lbl_8055CF10[8];
extern char lbl_8055CF18[4];
extern char lbl_8055CF24[4];
extern char lbl_8055CF28[4];
extern char lbl_8055CF2C[4];
extern void *igUnsignedShortMetaField_meta;
extern void *lbl_80561498;
extern void *igUnsignedShortArrayMetaField_meta;
extern void *lbl_805614A0;
extern void *lbl_805621F4;
void *igUnsignedShortArrayMetaField_getMeta();
void *igUnsignedShortArrayMetaField_vtableRead();
void igUnsignedShortArrayMetaField_registerNow();
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
  igUnsignedShortMetaField_registerNow();
 }
 return lbl_80561498;
}
void *igUnsignedShortArrayMetaField_create(void *object){
 igUnsignedShortArrayMetaField_registerNow();
 return meta_createInstance(igUnsignedShortArrayMetaField_meta,object);
}
void *igUnsignedShortArrayMetaField_getMeta(){
 if(!igUnsignedShortArrayMetaField_meta || !(reinterpret_cast<unsigned int *>(igUnsignedShortArrayMetaField_meta)[0x24/4]&4)) igUnsignedShortArrayMetaField_registerNow();
 return igUnsignedShortArrayMetaField_meta;
}
void *igUnsignedShortArrayMetaField_vtableRead(){
 UnknownGenObject800221E0 object;
 object.unknown00=igUnsignedShortArrayMetaField_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igUnsignedShortArrayMetaField_registerNow(){
 meta_registerNow((int)igUnsignedShortArrayMetaField_register);
}
void igUnsignedShortArrayMetaField_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igUnsignedShortArrayMetaField_meta,(int)igUnsignedShortMetaField_register,(int)igUnsignedShortArrayMetaField_parentMeta,(int)igUnsignedShortArrayMetaField_getMetaCall,(int)igUnsignedShortArrayMetaField_className,56,(int)igUnsignedShortArrayMetaField_vtableRead,(int)igUnsignedShortArrayMetaField_fieldInit,0,(int)lbl_8055CF10);
}
void *igUnsignedShortArrayMetaField_getMetaCall(){return igUnsignedShortArrayMetaField_getMeta();}
void *igUnsignedShortArrayMetaField_parentMeta(){return igUnsignedShortMetaField_meta;}
void igUnsignedShortArrayMetaField_fieldInit(){
 void *meta=igUnsignedShortArrayMetaField_meta;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_8055CF18,1);
 fn_80053650(fn_800658E4(meta,field),1);
 fn_800659C0(meta,lbl_8055CF24,lbl_8055CF28,lbl_8055CF2C,field);
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
