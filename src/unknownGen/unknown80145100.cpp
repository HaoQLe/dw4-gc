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
void fn_8006665C(void *);
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
extern char lbl_8055FA40[8];
extern void *lbl_805621F4;
extern void *igCompoundList_meta;
extern void *igItemDataBaseList_meta;
extern char lbl_80564150[4];
extern void *igItemDataBaseField_meta;
extern void *lbl_80564158;
void *igItemDataBaseList_getMeta();
void *igItemDataBaseList_vtableRead();
void igItemDataBaseList_registerNow();
void igItemDataBaseList_register();
void *igItemDataBaseList_getMetaCall();
void *fn_801452A8();
void fn_801452B0();
void *igItemDataBaseField_getMeta();
void *igItemDataBaseField_vtableRead();
void igItemDataBaseField_registerNow();
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
void fn_80145100(){return fn_80177F30();}
void *fn_80145120(){
 if(!igItemDataBaseList_meta) igItemDataBaseList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igItemDataBaseList_meta;
}
void *igItemDataBaseList_getMeta(){
 if(!igItemDataBaseList_meta || !(reinterpret_cast<unsigned int *>(igItemDataBaseList_meta)[0x24/4]&4)) igItemDataBaseList_registerNow();
 return igItemDataBaseList_meta;
}
void *igItemDataBaseList_vtableRead(){
 UnknownGenObject80145198_0 object;
 fn_8006665C(&object);
 object.unknown00=igCompoundList_vtable;
 object.unknown00=lbl_804A99B0;
 object.unknown00=igItemDataBaseList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igItemDataBaseList_registerNow(){
 meta_registerNow((int)igItemDataBaseList_register);
}
void igItemDataBaseList_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igItemDataBaseList_meta,(int)igCompoundList_register,(int)fn_801452A8,(int)igItemDataBaseList_getMetaCall,(int)igItemDataBaseList_className,20,(int)igItemDataBaseList_vtableRead,(int)fn_801452B0,0,0);
}
void *igItemDataBaseList_getMetaCall(){return igItemDataBaseList_getMeta();}
void *fn_801452A8(){return igCompoundList_meta;}
void fn_801452B0(){
 void *meta=igItemDataBaseList_meta;
 UnknownGenField *field=reinterpret_cast<UnknownGenField *>(fn_800658F8(meta,lbl_8055F4B4));
 void *type=fn_80053998(reinterpret_cast<void **>(meta)[0x28/4],field);
 field=reinterpret_cast<UnknownGenFactory *>(field)->slot54(1);
 field->unknown3C=fn_801455C8();
 field->unknown38=0;
 field->unknown1C=lbl_80564150;
 fn_8006588C(meta,type,field);
 unknownGenDrop(reinterpret_cast<UnknownGenValue *>(field));
}
void *igItemDataBaseField_getMeta(){
 if(!igItemDataBaseField_meta || !(reinterpret_cast<unsigned int *>(igItemDataBaseField_meta)[0x24/4]&4)) igItemDataBaseField_registerNow();
 return igItemDataBaseField_meta;
}
void *igItemDataBaseField_vtableRead(){
 UnknownGenObject801453A8 object;
 object.unknown00=lbl_80474018;
 object.unknown34.value=0;
 object.unknown00=igItemDataBaseField_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igItemDataBaseField_registerNow(){
 meta_registerNow((int)igItemDataBaseField_register);
}
void igItemDataBaseField_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igItemDataBaseField_meta,(int)igCompoundMetaField_register,(int)fn_80033638,(int)igItemDataBaseField_getMetaCall,(int)igItemDataBaseField_className,56,(int)igItemDataBaseField_vtableRead,0,0,(int)lbl_8055FA40);
}
void *igItemDataBaseField_getMetaCall(){return igItemDataBaseField_getMeta();}
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
  igItemDataBaseField_registerNow();
 }
 return lbl_80564158;
}
int igItemDataBaseField_virtual64(){return 12;}
void igItemDataBaseField_virtual2C(int p0){
 fn_80145624(reinterpret_cast<Meta::igItemDataBaseField *>((void *)p0)->_fieldList);
}
}
#pragma pop
