#include <unknownGen.h>
#include <meta/igDependencyMetaField.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_80024D1C();
void *meta_newMetaObject(void *);
void fn_80033734(void *);
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
void fn_8006665C(void *);
void igCompoundMetaField_register();
void igDataList_register();
extern char igDependencyList_className[];
extern char igDependencyMetaField_className[];
extern char lbl_80471914[];
extern char igDataList_vtable[];
extern char lbl_80474018[];
extern char igDependencyMetaField_vtable[];
extern char igDependencyList_vtable[];
extern char lbl_80475704[];
extern char lbl_8055D0A0[6];
extern char lbl_8055D5C8[8];
extern void *igDependencyList_meta;
extern char lbl_80561D30[4];
extern void *igDependencyMetaField_meta;
extern void *lbl_80561D38;
extern void *igCompoundMetaField_meta;
extern void *lbl_805621F4;
void *igDependencyList_getMeta();
void *igDependencyList_vtableRead();
void igDependencyList_registerNow();
void igDependencyList_register();
void *igDependencyList_getMetaCall();
void fn_800333B8();
void *igDependencyMetaField_getMeta();
void *igDependencyMetaField_vtableRead();
void igDependencyMetaField_registerNow();
void igDependencyMetaField_register();
void *igDependencyMetaField_getMetaCall();
void *fn_80033638();
void *fn_800336D8();
}
struct UnknownGenObject800332A8_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800334B0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800334B0(){fn_800638E0(this);}
};
struct UnknownGenObject800334B0_0 : UnknownGenRoot800334B0 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject800334B0_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject800334B0_1 : UnknownGenObject800334B0_0 {
 char unknown10[36];
 UnknownGenRefMember unknown34;
 inline ~UnknownGenObject800334B0_1(){unknown00=lbl_80474018;}
};
struct UnknownGenObject800334B0 : UnknownGenObject800334B0_1 {
 char unknown38[8];
 inline ~UnknownGenObject800334B0(){unknown00=igDependencyMetaField_vtable;}
};
extern "C" {
void *fn_80033230(){
 if(!igDependencyList_meta) igDependencyList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igDependencyList_meta;
}
void *igDependencyList_getMeta(){
 if(!igDependencyList_meta || !(reinterpret_cast<unsigned int *>(igDependencyList_meta)[0x24/4]&4)) igDependencyList_registerNow();
 return igDependencyList_meta;
}
void *igDependencyList_vtableRead(){
 UnknownGenObject800332A8_0 object;
 fn_8006665C(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80475704;
 object.unknown00=igDependencyList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igDependencyList_registerNow(){
 meta_registerNow((int)igDependencyList_register);
}
void igDependencyList_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igDependencyList_meta,(int)igDataList_register,(int)fn_80024D1C,(int)igDependencyList_getMetaCall,(int)igDependencyList_className,20,(int)igDependencyList_vtableRead,(int)fn_800333B8,0,0);
}
void *igDependencyList_getMetaCall(){return igDependencyList_getMeta();}
void fn_800333B8(){
 void *meta=igDependencyList_meta;
 UnknownGenField *field=reinterpret_cast<UnknownGenField *>(fn_800658F8(meta,lbl_8055D0A0));
 void *type=fn_80053998(reinterpret_cast<void **>(meta)[0x28/4],field);
 field=reinterpret_cast<UnknownGenFactory *>(field)->slot54(1);
 field->unknown3C=fn_800336D8();
 field->unknown38=0;
 field->unknown1C=lbl_80561D30;
 fn_8006588C(meta,type,field);
 unknownGenDrop(reinterpret_cast<UnknownGenValue *>(field));
}
void *igDependencyMetaField_getMeta(){
 if(!igDependencyMetaField_meta || !(reinterpret_cast<unsigned int *>(igDependencyMetaField_meta)[0x24/4]&4)) igDependencyMetaField_registerNow();
 return igDependencyMetaField_meta;
}
void *igDependencyMetaField_vtableRead(){
 UnknownGenObject800334B0 object;
 object.unknown00=lbl_80474018;
 object.unknown34.value=0;
 object.unknown00=igDependencyMetaField_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igDependencyMetaField_registerNow(){
 meta_registerNow((int)igDependencyMetaField_register);
}
void igDependencyMetaField_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igDependencyMetaField_meta,(int)igCompoundMetaField_register,(int)fn_80033638,(int)igDependencyMetaField_getMetaCall,(int)igDependencyMetaField_className,56,(int)igDependencyMetaField_vtableRead,0,0,(int)lbl_8055D5C8);
}
void *igDependencyMetaField_getMetaCall(){return igDependencyMetaField_getMeta();}
void *fn_80033638(){return igCompoundMetaField_meta;}
void fn_80033640(){
 if(!lbl_80561D38){
  void *object=(lbl_80561D38=meta_createInstance(igDependencyMetaField_meta,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80561D38));
   reinterpret_cast<short *>(lbl_80561D38)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80561D38);
  }
 }
}
void *fn_800336D8(){
 if(!lbl_80561D38){
  igDependencyMetaField_registerNow();
 }
 return lbl_80561D38;
}
int igDependencyMetaField_virtual64(){return 8;}
void igDependencyMetaField_virtual2C(int p0){
 fn_80033734(reinterpret_cast<Meta::igDependencyMetaField *>((void *)p0)->_fieldList);
}
}
#pragma pop
