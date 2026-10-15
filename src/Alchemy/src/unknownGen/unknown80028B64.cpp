#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_80024D1C();
void igObjectRefMetaField_registerNow();
void *meta_newMetaObject(void *);
void fn_80053650(void *,int);
void *fn_80053998(void *,void *);
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *meta_createInstance(void *,void *);
void fn_8006588C(void *,void *,void *);
void *fn_800658E4(void *,void *);
UnknownGenFactory *fn_800658F8(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8006ACA4(void *);
void igDataList_register();
void igDirEntry_register();
void igObjectDirEntry_fieldInit();
void igObjectRefMetaField_register();
extern char igObjectRefArrayMetaField_className[];
extern char igObjectList_className[];
extern char lbl_8046415C[];
extern char igObjectDirEntry_className[];
extern char lbl_80471384[];
extern char igObjectRefArrayMetaField_vtable[];
extern char igObjectDirEntry_vtable[];
extern char lbl_80471914[];
extern char igDirEntry_vtable[];
extern char igDataList_vtable[];
extern char lbl_804762FC[];
extern char igNamedObject_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char lbl_8055D0A0[6];
extern char lbl_8055D214[8];
extern char lbl_8055D21C[4];
extern char lbl_8055D220[4];
extern char lbl_8055D224[4];
extern char lbl_8055D228[4];
extern void *igObjectRefMetaField_meta;
extern void *lbl_805616EC;
extern void *igObjectRefArrayMetaField_meta;
extern void *lbl_80561700;
extern void *igObjectList_meta;
extern char lbl_8056170C[4];
extern void *igObjectDirEntry_meta;
extern void *igDirEntry_meta;
extern void *lbl_805621F4;
void *fn_80028BFC();
void *igObjectRefArrayMetaField_getMeta();
void *igObjectRefArrayMetaField_vtableRead();
void igObjectRefArrayMetaField_registerNow();
void igObjectRefArrayMetaField_register();
void *igObjectRefArrayMetaField_getMetaCall();
void *igObjectRefArrayMetaField_parentMeta();
void igObjectRefArrayMetaField_fieldInit();
void *igObjectList_getMeta();
void *igObjectList_vtableRead();
void igObjectList_registerNow();
void igObjectList_register();
void *igObjectList_getMetaCall();
void fn_8002910C();
void *igObjectDirEntry_getMeta();
void *igObjectDirEntry_vtableRead();
void igObjectDirEntry_registerNow();
void igObjectDirEntry_register();
void *igObjectDirEntry_getMetaCall();
void *fn_8002942C();
}
struct UnknownGenRoot80028CA0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80028CA0(){fn_8006ACA4(this);}
};
struct UnknownGenObject80028CA0_0 : UnknownGenRoot80028CA0 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject80028CA0_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject80028CA0_1 : UnknownGenObject80028CA0_0 {
 inline ~UnknownGenObject80028CA0_1(){unknown00=lbl_80471384;}
};
struct UnknownGenObject80028CA0_2 : UnknownGenObject80028CA0_1 {
 char unknown10[48];
 UnknownGenString unknown40;
 inline ~UnknownGenObject80028CA0_2(){unknown00=lbl_804762FC;}
};
struct UnknownGenObject80028CA0 : UnknownGenObject80028CA0_2 {
 char unknown44[12];
 inline ~UnknownGenObject80028CA0(){unknown00=igObjectRefArrayMetaField_vtable;}
};
struct UnknownGenObject80028FFC_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot8002923C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8002923C(){fn_8006665C(this);}
};
struct UnknownGenObject8002923C_0 : UnknownGenRoot8002923C {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject8002923C_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject8002923C_1 : UnknownGenObject8002923C_0 {
 inline ~UnknownGenObject8002923C_1(){unknown00=igDirEntry_vtable;}
};
struct UnknownGenObject8002923C : UnknownGenObject8002923C_1 {
 char unknown0C[16];
 UnknownGenRefMember unknown1C;
 UnknownGenString unknown20;
 char unknown24[20];
 inline ~UnknownGenObject8002923C(){unknown00=igObjectDirEntry_vtable;}
};
extern "C" {
void fn_80028B64(){
 if(!lbl_805616EC){
  void *object=(lbl_805616EC=meta_createInstance(igObjectRefMetaField_meta,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_805616EC));
   reinterpret_cast<short *>(lbl_805616EC)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_805616EC);
  }
 }
}
void *fn_80028BFC(){
 if(!lbl_805616EC){
  igObjectRefMetaField_registerNow();
 }
 return lbl_805616EC;
}
void *igObjectRefArrayMetaField_create(void *object){
 igObjectRefArrayMetaField_registerNow();
 return meta_createInstance(igObjectRefArrayMetaField_meta,object);
}
void *igObjectRefArrayMetaField_getMeta(){
 if(!igObjectRefArrayMetaField_meta || !(reinterpret_cast<unsigned int *>(igObjectRefArrayMetaField_meta)[0x24/4]&4)) igObjectRefArrayMetaField_registerNow();
 return igObjectRefArrayMetaField_meta;
}
void *igObjectRefArrayMetaField_vtableRead(){
 UnknownGenObject80028CA0 object;
 object.unknown00=igObjectRefArrayMetaField_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igObjectRefArrayMetaField_registerNow(){
 meta_registerNow((int)igObjectRefArrayMetaField_register);
}
void igObjectRefArrayMetaField_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igObjectRefArrayMetaField_meta,(int)igObjectRefMetaField_register,(int)igObjectRefArrayMetaField_parentMeta,(int)igObjectRefArrayMetaField_getMetaCall,(int)igObjectRefArrayMetaField_className,72,(int)igObjectRefArrayMetaField_vtableRead,(int)igObjectRefArrayMetaField_fieldInit,0,(int)lbl_8055D214);
}
void *igObjectRefArrayMetaField_getMetaCall(){return igObjectRefArrayMetaField_getMeta();}
void *igObjectRefArrayMetaField_parentMeta(){return igObjectRefMetaField_meta;}
void igObjectRefArrayMetaField_fieldInit(){
 void *meta=igObjectRefArrayMetaField_meta;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_8055D21C,1);
 fn_80053650(fn_800658E4(meta,field),1);
 fn_800659C0(meta,lbl_8055D220,lbl_8055D224,lbl_8055D228,field);
}
void fn_80028EB4(){
 if(!lbl_80561700){
  void *object=(lbl_80561700=meta_createInstance(igObjectRefArrayMetaField_meta,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80561700));
   reinterpret_cast<short *>(lbl_80561700)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80561700);
  }
 }
}
void *igObjectList_create(void *object){
 igObjectList_registerNow();
 return meta_createInstance(igObjectList_meta,object);
}
void *fn_80028F84(){
 if(!igObjectList_meta) igObjectList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igObjectList_meta;
}
void *igObjectList_getMeta(){
 if(!igObjectList_meta || !(reinterpret_cast<unsigned int *>(igObjectList_meta)[0x24/4]&4)) igObjectList_registerNow();
 return igObjectList_meta;
}
void *igObjectList_vtableRead(){
 UnknownGenObject80028FFC_0 object;
 fn_8006665C(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igObjectList_registerNow(){
 meta_registerNow((int)igObjectList_register);
}
void igObjectList_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igObjectList_meta,(int)igDataList_register,(int)fn_80024D1C,(int)igObjectList_getMetaCall,(int)igObjectList_className,20,(int)igObjectList_vtableRead,(int)fn_8002910C,0,0);
}
void *igObjectList_getMetaCall(){return igObjectList_getMeta();}
void fn_8002910C(){
 void *meta=igObjectList_meta;
 UnknownGenField *field=reinterpret_cast<UnknownGenField *>(fn_800658F8(meta,lbl_8055D0A0));
 void *type=fn_80053998(reinterpret_cast<void **>(meta)[0x28/4],field);
 field=reinterpret_cast<UnknownGenFactory *>(field)->slot54(1);
 field->unknown3C=fn_80028BFC();
 field->unknown38=0;
 field->unknown1C=lbl_8056170C;
 fn_8006588C(meta,type,field);
 unknownGenDrop(reinterpret_cast<UnknownGenValue *>(field));
}
void *igObjectDirEntry_create(void *object){
 igObjectDirEntry_registerNow();
 return meta_createInstance(igObjectDirEntry_meta,object);
}
void *igObjectDirEntry_getMeta(){
 if(!igObjectDirEntry_meta || !(reinterpret_cast<unsigned int *>(igObjectDirEntry_meta)[0x24/4]&4)) igObjectDirEntry_registerNow();
 return igObjectDirEntry_meta;
}
void *igObjectDirEntry_vtableRead(){
 UnknownGenObject8002923C object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igDirEntry_vtable;
 object.unknown00=igObjectDirEntry_vtable;
 object.unknown1C.value=0;
 object.unknown20.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igObjectDirEntry_registerNow(){
 meta_registerNow((int)igObjectDirEntry_register);
}
void igObjectDirEntry_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igObjectDirEntry_meta,(int)igDirEntry_register,(int)fn_8002942C,(int)igObjectDirEntry_getMetaCall,(int)igObjectDirEntry_className,52,(int)igObjectDirEntry_vtableRead,(int)igObjectDirEntry_fieldInit,0,(int)lbl_8046415C);
}
void *igObjectDirEntry_getMetaCall(){return igObjectDirEntry_getMeta();}
void *fn_8002942C(){return igDirEntry_meta;}
}
#pragma pop
