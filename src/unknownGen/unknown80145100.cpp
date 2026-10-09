#include <unknownGen.h>
#include <meta/igItemDataBaseField.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_80033638();
void *fn_80053998(void *,void *);
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void fn_800638E0(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *fn_8006546C(void *,void *);
void fn_8006588C(void *,void *,void *);
UnknownGenFactory *fn_800658F8(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void fn_80145624(void *);
void fn_80177F30();
void igCompoundList_register();
void igCompoundMetaField_register();
extern char lbl_80471914[];
extern char lbl_80474018[];
extern char lbl_8049E6FC[];
extern char lbl_8049E710[];
extern char lbl_804A9860[];
extern char lbl_804A9954[];
extern char lbl_804A99B0[];
extern char lbl_804AAD84[];
extern char lbl_8055F4B4[6];
extern char lbl_8055FA40[8];
extern void *lbl_805621F4;
extern void *lbl_80563ABC;
extern void *lbl_8056414C;
extern char lbl_80564150[4];
extern void *lbl_80564154;
extern void *lbl_80564158;
void *igItemDataBaseList_getMeta();
void *igItemDataBaseList_vtableRead();
void fn_801451F0();
void igItemDataBaseList_register();
void *igItemDataBaseList_getMetaCall();
void *fn_801452A8();
void fn_801452B0();
void *igItemDataBaseField_getMeta();
void *igItemDataBaseField_vtableRead();
void fn_8014547C();
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
 inline ~UnknownGenObject801453A8(){unknown00=lbl_804A9860;}
};
extern "C" {
void fn_80145100(){return fn_80177F30();}
void *fn_80145120(){
 if(!lbl_8056414C) lbl_8056414C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8056414C;
}
void *igItemDataBaseList_getMeta(){
 if(!lbl_8056414C || !(reinterpret_cast<unsigned int *>(lbl_8056414C)[0x24/4]&4)) fn_801451F0();
 return lbl_8056414C;
}
void *igItemDataBaseList_vtableRead(){
 UnknownGenObject80145198_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804AAD84;
 object.unknown00=lbl_804A99B0;
 object.unknown00=lbl_804A9954;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801451F0(){
 fn_80066188((int)igItemDataBaseList_register);
}
void igItemDataBaseList_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_8056414C,(int)igCompoundList_register,(int)fn_801452A8,(int)igItemDataBaseList_getMetaCall,(int)lbl_8049E6FC,20,(int)igItemDataBaseList_vtableRead,(int)fn_801452B0,0,0);
}
void *igItemDataBaseList_getMetaCall(){return igItemDataBaseList_getMeta();}
void *fn_801452A8(){return lbl_80563ABC;}
void fn_801452B0(){
 void *meta=lbl_8056414C;
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
 if(!lbl_80564154 || !(reinterpret_cast<unsigned int *>(lbl_80564154)[0x24/4]&4)) fn_8014547C();
 return lbl_80564154;
}
void *igItemDataBaseField_vtableRead(){
 UnknownGenObject801453A8 object;
 object.unknown00=lbl_80474018;
 object.unknown34.value=0;
 object.unknown00=lbl_804A9860;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8014547C(){
 fn_80066188((int)igItemDataBaseField_register);
}
void igItemDataBaseField_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564154,(int)igCompoundMetaField_register,(int)fn_80033638,(int)igItemDataBaseField_getMetaCall,(int)lbl_8049E710,56,(int)igItemDataBaseField_vtableRead,0,0,(int)lbl_8055FA40);
}
void *igItemDataBaseField_getMetaCall(){return igItemDataBaseField_getMeta();}
void fn_80145530(){
 if(!lbl_80564158){
  void *object=(lbl_80564158=fn_8006546C(lbl_80564154,fn_800607F4(lbl_805621F4)));
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
  fn_8014547C();
 }
 return lbl_80564158;
}
int igItemDataBaseField_virtual64(){return 12;}
void igItemDataBaseField_virtual2C(int p0){
 fn_80145624(reinterpret_cast<Meta::igItemDataBaseField *>((void *)p0)->_fieldList);
}
}
#pragma pop
