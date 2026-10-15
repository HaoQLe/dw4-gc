#include <unknownGen.h>
#include <meta/igInterfaceDeclarationField.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
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
void *fn_8013BA10();
void *fn_801452A8();
void fn_80146188(void *);
void igBase_register();
void igCompoundList_register();
void igCompoundMetaField_register();
void igObjectList_register();
extern char lbl_80471914[];
extern char igDataList_vtable[];
extern char lbl_80474018[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igItemBaseListList_className[];
extern char igItemBaseList_className[];
extern char igItemBase_className[];
extern char igInterfaceDeclarationList_className[];
extern char igInterfaceDeclarationField_className[];
extern char igInterfaceDeclarationField_vtable[];
extern char igInterfaceDeclarationList_vtable[];
extern char lbl_804A9674[];
extern char igItemBaseList_vtable[];
extern char lbl_804A9734[];
extern char igItemBaseListList_vtable[];
extern char lbl_804A97FC[];
extern char igCompoundList_vtable[];
extern char lbl_8055F4B4[6];
extern char igItemBaseListList_dependencies[8];
extern char igItemBaseList_dependencies[8];
extern char igInterfaceDeclarationField_dependencies[8];
extern void *lbl_805621F4;
extern void *igItemBaseListList_meta;
extern void *igItemBaseList_meta;
extern void *igItemBase_meta;
extern void *igInterfaceDeclarationList_meta;
extern char lbl_8056416C[4];
extern void *igInterfaceDeclarationField_meta;
extern void *lbl_80564174;
void *igItemBaseListList_getMeta();
void *igItemBaseListList_vtableRead();
void igItemBaseListList_arkRegister();
void igItemBaseListList_register();
void *igItemBaseListList_getMetaCall();
void *igItemBaseList_getMeta();
void *igItemBaseList_vtableRead();
void igItemBaseList_arkRegister();
void igItemBaseList_register();
void *igItemBaseList_getMetaCall();
void *igItemBase_getMeta();
void igItemBase_arkRegister();
void igItemBase_register();
void *igItemBase_getMetaCall();
void *igInterfaceDeclarationList_getMeta();
void *igInterfaceDeclarationList_vtableRead();
void igInterfaceDeclarationList_arkRegister();
void igInterfaceDeclarationList_register();
void *igInterfaceDeclarationList_getMetaCall();
void fn_80145E14();
void *igInterfaceDeclarationField_getMeta();
void *igInterfaceDeclarationField_vtableRead();
void igInterfaceDeclarationField_arkRegister();
void igInterfaceDeclarationField_register();
void *igInterfaceDeclarationField_getMetaCall();
void *fn_8014612C();
}
struct UnknownGenObject80145924_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject80145A84_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject80145D04_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot80145F0C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80145F0C(){fn_800638E0(this);}
};
struct UnknownGenObject80145F0C_0 : UnknownGenRoot80145F0C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject80145F0C_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject80145F0C_1 : UnknownGenObject80145F0C_0 {
 char unknown10[36];
 UnknownGenRefMember unknown34;
 inline ~UnknownGenObject80145F0C_1(){unknown00=lbl_80474018;}
};
struct UnknownGenObject80145F0C : UnknownGenObject80145F0C_1 {
 char unknown38[8];
 inline ~UnknownGenObject80145F0C(){unknown00=igInterfaceDeclarationField_vtable;}
};
extern "C" {
void *igItemBaseListList_getMeta(){
 if(!igItemBaseListList_meta || !(reinterpret_cast<unsigned int *>(igItemBaseListList_meta)[0x24/4]&4)) igItemBaseListList_arkRegister();
 return igItemBaseListList_meta;
}
void *igItemBaseListList_vtableRead(){
 UnknownGenObject80145924_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804A97FC;
 object.unknown00=igItemBaseListList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igItemBaseListList_arkRegister(){
 meta_registerNow((int)igItemBaseListList_register);
}
void igItemBaseListList_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igItemBaseListList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igItemBaseListList_getMetaCall,(int)igItemBaseListList_className,20,(int)igItemBaseListList_vtableRead,0,0,(int)igItemBaseListList_dependencies);
}
void *igItemBaseListList_getMetaCall(){return igItemBaseListList_getMeta();}
void *igItemBaseList_getMeta(){
 if(!igItemBaseList_meta || !(reinterpret_cast<unsigned int *>(igItemBaseList_meta)[0x24/4]&4)) igItemBaseList_arkRegister();
 return igItemBaseList_meta;
}
void *igItemBaseList_vtableRead(){
 UnknownGenObject80145A84_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804A9734;
 object.unknown00=igItemBaseList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igItemBaseList_arkRegister(){
 meta_registerNow((int)igItemBaseList_register);
}
void igItemBaseList_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igItemBaseList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igItemBaseList_getMetaCall,(int)igItemBaseList_className,20,(int)igItemBaseList_vtableRead,0,0,(int)igItemBaseList_dependencies);
}
void *igItemBaseList_getMetaCall(){return igItemBaseList_getMeta();}
void *igItemBase_getMeta(){
 if(!igItemBase_meta || !(reinterpret_cast<unsigned int *>(igItemBase_meta)[0x24/4]&4)) igItemBase_arkRegister();
 return igItemBase_meta;
}
void igItemBase_arkRegister(){
 meta_registerNow((int)igItemBase_register);
}
void igItemBase_register(){
 fn_8012FC48();
 meta_registerClass(1,(int)&igItemBase_meta,(int)igBase_register,(int)fn_8013BA10,(int)igItemBase_getMetaCall,(int)igItemBase_className,32,0,0,0,0);
}
void *igItemBase_getMetaCall(){return igItemBase_getMeta();}
void *igInterfaceDeclarationList_create(void *object){
 igInterfaceDeclarationList_arkRegister();
 return meta_createInstance(igInterfaceDeclarationList_meta,object);
}
void *igInterfaceDeclarationList_getMeta(){
 if(!igInterfaceDeclarationList_meta || !(reinterpret_cast<unsigned int *>(igInterfaceDeclarationList_meta)[0x24/4]&4)) igInterfaceDeclarationList_arkRegister();
 return igInterfaceDeclarationList_meta;
}
void *igInterfaceDeclarationList_vtableRead(){
 UnknownGenObject80145D04_0 object;
 igObject_construct(&object);
 object.unknown00=igCompoundList_vtable;
 object.unknown00=lbl_804A9674;
 object.unknown00=igInterfaceDeclarationList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igInterfaceDeclarationList_arkRegister(){
 meta_registerNow((int)igInterfaceDeclarationList_register);
}
void igInterfaceDeclarationList_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igInterfaceDeclarationList_meta,(int)igCompoundList_register,(int)fn_801452A8,(int)igInterfaceDeclarationList_getMetaCall,(int)igInterfaceDeclarationList_className,20,(int)igInterfaceDeclarationList_vtableRead,(int)fn_80145E14,0,0);
}
void *igInterfaceDeclarationList_getMetaCall(){return igInterfaceDeclarationList_getMeta();}
void fn_80145E14(){
 void *meta=igInterfaceDeclarationList_meta;
 UnknownGenField *field=reinterpret_cast<UnknownGenField *>(fn_800658F8(meta,lbl_8055F4B4));
 void *type=fn_80053998(reinterpret_cast<void **>(meta)[0x28/4],field);
 field=reinterpret_cast<UnknownGenFactory *>(field)->slot54(1);
 field->unknown3C=fn_8014612C();
 field->unknown38=0;
 field->unknown1C=lbl_8056416C;
 fn_8006588C(meta,type,field);
 unknownGenDrop(reinterpret_cast<UnknownGenValue *>(field));
}
void *igInterfaceDeclarationField_getMeta(){
 if(!igInterfaceDeclarationField_meta || !(reinterpret_cast<unsigned int *>(igInterfaceDeclarationField_meta)[0x24/4]&4)) igInterfaceDeclarationField_arkRegister();
 return igInterfaceDeclarationField_meta;
}
void *igInterfaceDeclarationField_vtableRead(){
 UnknownGenObject80145F0C object;
 object.unknown00=lbl_80474018;
 object.unknown34.value=0;
 object.unknown00=igInterfaceDeclarationField_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igInterfaceDeclarationField_arkRegister(){
 meta_registerNow((int)igInterfaceDeclarationField_register);
}
void igInterfaceDeclarationField_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igInterfaceDeclarationField_meta,(int)igCompoundMetaField_register,(int)fn_80033638,(int)igInterfaceDeclarationField_getMetaCall,(int)igInterfaceDeclarationField_className,56,(int)igInterfaceDeclarationField_vtableRead,0,0,(int)igInterfaceDeclarationField_dependencies);
}
void *igInterfaceDeclarationField_getMetaCall(){return igInterfaceDeclarationField_getMeta();}
void fn_80146094(){
 if(!lbl_80564174){
  void *object=(lbl_80564174=meta_createInstance(igInterfaceDeclarationField_meta,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80564174));
   reinterpret_cast<short *>(lbl_80564174)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80564174);
  }
 }
}
void *fn_8014612C(){
 if(!lbl_80564174){
  igInterfaceDeclarationField_arkRegister();
 }
 return lbl_80564174;
}
int igInterfaceDeclarationField_virtual64(){return 16;}
void igInterfaceDeclarationField_virtual2C(int p0){
 fn_80146188(reinterpret_cast<Meta::igInterfaceDeclarationField *>((void *)p0)->_fieldList);
}
}
#pragma pop
