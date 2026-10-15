#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void arkRegister__Q33Gap4Core6igFileFv();
void fn_80021B94();
void *fn_80021D70();
void *meta_newMetaObject(void *);
void fn_80053650(void *,int);
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void fn_800638E0(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *igGamecubeFolder_getMeta();
void igMetaField_register();
extern char igVirtualCFuncMetaField_className[];
extern char igFloatMetaField_className[];
extern char igFloatArrayMetaField_className[];
extern char lbl_80471914[];
extern char igFloatMetaField_vtable[];
extern char igFloatArrayMetaField_vtable[];
extern char lbl_8055D45C[8];
extern char lbl_8055D464[8];
extern char lbl_8055D46C[4];
extern char lbl_8055D470[4];
extern char lbl_8055D474[4];
extern char lbl_8055D478[4];
extern void *igFloatMetaField_meta;
extern void *lbl_80561B24;
extern void *igFloatArrayMetaField_meta;
extern void *lbl_80561B2C;
extern void *lbl_80561B34;
extern void *lbl_80561B38;
extern void *igFile_meta;
extern void *lbl_805621F4;
void *igFloatMetaField_getMeta();
void *igFloatMetaField_vtableRead();
void igFloatMetaField_registerNow();
void igFloatMetaField_register();
void *igFloatMetaField_getMetaCall();
void *igFloatArrayMetaField_getMeta();
void *igFloatArrayMetaField_vtableRead();
void igFloatArrayMetaField_registerNow();
void igFloatArrayMetaField_register();
void *igFloatArrayMetaField_getMetaCall();
void *igFloatArrayMetaField_parentMeta();
void igFloatArrayMetaField_fieldInit();
}
struct UnknownGenRoot8002FA40 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8002FA40(){fn_800638E0(this);}
};
struct UnknownGenObject8002FA40_0 : UnknownGenRoot8002FA40 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8002FA40_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8002FA40 : UnknownGenObject8002FA40_0 {
 char unknown10[48];
 inline ~UnknownGenObject8002FA40(){unknown00=igFloatMetaField_vtable;}
};
struct UnknownGenRoot8002FCBC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8002FCBC(){fn_800638E0(this);}
};
struct UnknownGenObject8002FCBC_0 : UnknownGenRoot8002FCBC {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8002FCBC_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8002FCBC_1 : UnknownGenObject8002FCBC_0 {
 inline ~UnknownGenObject8002FCBC_1(){unknown00=igFloatMetaField_vtable;}
};
struct UnknownGenObject8002FCBC : UnknownGenObject8002FCBC_1 {
 char unknown10[48];
 inline ~UnknownGenObject8002FCBC(){unknown00=igFloatArrayMetaField_vtable;}
};
extern "C" {
void *igGamecubeFolder_getMetaCall(){return igGamecubeFolder_getMeta();}
void *igFloatMetaField_create(void *object){
 igFloatMetaField_registerNow();
 return meta_createInstance(igFloatMetaField_meta,object);
}
void *fn_8002F9C8(){
 if(!igFloatMetaField_meta) igFloatMetaField_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igFloatMetaField_meta;
}
void *igFloatMetaField_getMeta(){
 if(!igFloatMetaField_meta || !(reinterpret_cast<unsigned int *>(igFloatMetaField_meta)[0x24/4]&4)) igFloatMetaField_registerNow();
 return igFloatMetaField_meta;
}
void *igFloatMetaField_vtableRead(){
 UnknownGenObject8002FA40 object;
 object.unknown00=igFloatMetaField_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igFloatMetaField_registerNow(){
 meta_registerNow((int)igFloatMetaField_register);
}
void igFloatMetaField_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igFloatMetaField_meta,(int)igMetaField_register,(int)fn_80021D70,(int)igFloatMetaField_getMetaCall,(int)igFloatMetaField_className,52,(int)igFloatMetaField_vtableRead,0,0,(int)lbl_8055D45C);
}
void *igFloatMetaField_getMetaCall(){return igFloatMetaField_getMeta();}
void fn_8002FB80(){
 if(!lbl_80561B24){
  void *object=(lbl_80561B24=meta_createInstance(igFloatMetaField_meta,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80561B24));
   reinterpret_cast<short *>(lbl_80561B24)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80561B24);
  }
 }
}
void *fn_8002FC18(){
 if(!lbl_80561B24){
  igFloatMetaField_registerNow();
 }
 return lbl_80561B24;
}
void *igFloatArrayMetaField_create(void *object){
 igFloatArrayMetaField_registerNow();
 return meta_createInstance(igFloatArrayMetaField_meta,object);
}
void *igFloatArrayMetaField_getMeta(){
 if(!igFloatArrayMetaField_meta || !(reinterpret_cast<unsigned int *>(igFloatArrayMetaField_meta)[0x24/4]&4)) igFloatArrayMetaField_registerNow();
 return igFloatArrayMetaField_meta;
}
void *igFloatArrayMetaField_vtableRead(){
 UnknownGenObject8002FCBC object;
 object.unknown00=igFloatMetaField_vtable;
 object.unknown00=igFloatArrayMetaField_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igFloatArrayMetaField_registerNow(){
 meta_registerNow((int)igFloatArrayMetaField_register);
}
void igFloatArrayMetaField_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igFloatArrayMetaField_meta,(int)igFloatMetaField_register,(int)igFloatArrayMetaField_parentMeta,(int)igFloatArrayMetaField_getMetaCall,(int)igFloatArrayMetaField_className,56,(int)igFloatArrayMetaField_vtableRead,(int)igFloatArrayMetaField_fieldInit,0,(int)lbl_8055D464);
}
void *igFloatArrayMetaField_getMetaCall(){return igFloatArrayMetaField_getMeta();}
void *igFloatArrayMetaField_parentMeta(){return igFloatMetaField_meta;}
void igFloatArrayMetaField_fieldInit(){
 void *meta=igFloatArrayMetaField_meta;
 void *field=meta_fieldCount(meta);
 meta_appendFields(meta,lbl_8055D46C,1);
 fn_80053650(meta_field(meta,field),1);
 meta_setupFields(meta,lbl_8055D470,lbl_8055D474,lbl_8055D478,field);
}
void fn_8002FE98(){
 if(!lbl_80561B2C){
  void *object=(lbl_80561B2C=meta_createInstance(igFloatArrayMetaField_meta,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80561B2C));
   reinterpret_cast<short *>(lbl_80561B2C)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80561B2C);
  }
 }
}
void *fn_8002FF30(){
 char *data=igVirtualCFuncMetaField_className;
 if(!lbl_80561B34) lbl_80561B34=fn_800635C8(data+0x2C5C,data+0x2C44,data+0x2C50,0x3);
 return lbl_80561B34;
}
void *fn_8002FF7C(){
 char *data=igVirtualCFuncMetaField_className;
 if(!lbl_80561B38) lbl_80561B38=fn_800635C8(data+0x2D10,data+0x2CC8,data+0x2CEC,0x9);
 return lbl_80561B38;
}
void *igFile_create(void *object){
 arkRegister__Q33Gap4Core6igFileFv();
 return meta_createInstance(igFile_meta,object);
}
void *fn_80030000(){
 if(!igFile_meta) igFile_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igFile_meta;
}
void *igFile_getMeta(){
 if(!igFile_meta || !(reinterpret_cast<unsigned int *>(igFile_meta)[0x24/4]&4)) arkRegister__Q33Gap4Core6igFileFv();
 return igFile_meta;
}
}
#pragma pop
