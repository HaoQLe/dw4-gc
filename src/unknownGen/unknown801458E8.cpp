#include <unknownGen.h>
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
void *fn_8006546C(void *,void *);
void fn_8006588C(void *,void *,void *);
UnknownGenFactory *fn_800658F8(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_8013BA10();
void *fn_801452A8();
void fn_80146188(void *);
void igBase_register();
void igCompoundList_register();
void igCompoundMetaField_register();
void igObjectList_register();
extern char lbl_80471914[];
extern char lbl_80472FA0[];
extern char lbl_80474018[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_8049E740[];
extern char lbl_8049E754[];
extern char lbl_8049E764[];
extern char lbl_8049E770[];
extern char lbl_8049E78C[];
extern char lbl_804A9524[];
extern char lbl_804A9618[];
extern char lbl_804A9674[];
extern char lbl_804A96D0[];
extern char lbl_804A9734[];
extern char lbl_804A9798[];
extern char lbl_804A97FC[];
extern char lbl_804AAD84[];
extern char lbl_8055F4B4[6];
extern char lbl_8055FA48[8];
extern char lbl_8055FA50[8];
extern char lbl_8055FA58[8];
extern void *lbl_805621F4;
extern void *lbl_8056415C;
extern void *lbl_80564160;
extern void *lbl_80564164;
extern void *lbl_80564168;
extern char lbl_8056416C[4];
extern void *lbl_80564170;
extern void *lbl_80564174;
void *igItemBaseListList_getMeta();
void *igItemBaseListList_vtableRead();
void fn_80145994();
void igItemBaseListList_register();
void *igItemBaseListList_getMetaCall();
void *igItemBaseList_getMeta();
void *igItemBaseList_vtableRead();
void fn_80145AF4();
void igItemBaseList_register();
void *igItemBaseList_getMetaCall();
void *igItemBase_getMeta();
void fn_80145BE4();
void igItemBase_register();
void *igItemBase_getMetaCall();
void *igInterfaceDeclarationList_getMeta();
void *igInterfaceDeclarationList_vtableRead();
void fn_80145D5C();
void igInterfaceDeclarationList_register();
void *igInterfaceDeclarationList_getMetaCall();
void fn_80145E14();
void *igInterfaceDeclarationField_getMeta();
void *igInterfaceDeclarationField_vtableRead();
void fn_80145FE0();
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
 inline ~UnknownGenObject80145F0C(){unknown00=lbl_804A9524;}
};
extern "C" {
void *igItemBaseListList_getMeta(){
 if(!lbl_8056415C || !(reinterpret_cast<unsigned int *>(lbl_8056415C)[0x24/4]&4)) fn_80145994();
 return lbl_8056415C;
}
void *igItemBaseListList_vtableRead(){
 UnknownGenObject80145924_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804A97FC;
 object.unknown00=lbl_804A9798;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80145994(){
 fn_80066188((int)igItemBaseListList_register);
}
void igItemBaseListList_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_8056415C,(int)igObjectList_register,(int)fn_80024180,(int)igItemBaseListList_getMetaCall,(int)lbl_8049E740,20,(int)igItemBaseListList_vtableRead,0,0,(int)lbl_8055FA48);
}
void *igItemBaseListList_getMetaCall(){return igItemBaseListList_getMeta();}
void *igItemBaseList_getMeta(){
 if(!lbl_80564160 || !(reinterpret_cast<unsigned int *>(lbl_80564160)[0x24/4]&4)) fn_80145AF4();
 return lbl_80564160;
}
void *igItemBaseList_vtableRead(){
 UnknownGenObject80145A84_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804A9734;
 object.unknown00=lbl_804A96D0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80145AF4(){
 fn_80066188((int)igItemBaseList_register);
}
void igItemBaseList_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564160,(int)igObjectList_register,(int)fn_80024180,(int)igItemBaseList_getMetaCall,(int)lbl_8049E754,20,(int)igItemBaseList_vtableRead,0,0,(int)lbl_8055FA50);
}
void *igItemBaseList_getMetaCall(){return igItemBaseList_getMeta();}
void *igItemBase_getMeta(){
 if(!lbl_80564164 || !(reinterpret_cast<unsigned int *>(lbl_80564164)[0x24/4]&4)) fn_80145BE4();
 return lbl_80564164;
}
void fn_80145BE4(){
 fn_80066188((int)igItemBase_register);
}
void igItemBase_register(){
 fn_8012FC48();
 fn_80066204(1,(int)&lbl_80564164,(int)igBase_register,(int)fn_8013BA10,(int)igItemBase_getMetaCall,(int)lbl_8049E764,32,0,0,0,0);
}
void *igItemBase_getMetaCall(){return igItemBase_getMeta();}
void *fn_80145C90(void *object){
 fn_80145D5C();
 return fn_8006546C(lbl_80564168,object);
}
void *igInterfaceDeclarationList_getMeta(){
 if(!lbl_80564168 || !(reinterpret_cast<unsigned int *>(lbl_80564168)[0x24/4]&4)) fn_80145D5C();
 return lbl_80564168;
}
void *igInterfaceDeclarationList_vtableRead(){
 UnknownGenObject80145D04_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804AAD84;
 object.unknown00=lbl_804A9674;
 object.unknown00=lbl_804A9618;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80145D5C(){
 fn_80066188((int)igInterfaceDeclarationList_register);
}
void igInterfaceDeclarationList_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564168,(int)igCompoundList_register,(int)fn_801452A8,(int)igInterfaceDeclarationList_getMetaCall,(int)lbl_8049E770,20,(int)igInterfaceDeclarationList_vtableRead,(int)fn_80145E14,0,0);
}
void *igInterfaceDeclarationList_getMetaCall(){return igInterfaceDeclarationList_getMeta();}
void fn_80145E14(){
 void *meta=lbl_80564168;
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
 if(!lbl_80564170 || !(reinterpret_cast<unsigned int *>(lbl_80564170)[0x24/4]&4)) fn_80145FE0();
 return lbl_80564170;
}
void *igInterfaceDeclarationField_vtableRead(){
 UnknownGenObject80145F0C object;
 object.unknown00=lbl_80474018;
 object.unknown34.value=0;
 object.unknown00=lbl_804A9524;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80145FE0(){
 fn_80066188((int)igInterfaceDeclarationField_register);
}
void igInterfaceDeclarationField_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564170,(int)igCompoundMetaField_register,(int)fn_80033638,(int)igInterfaceDeclarationField_getMetaCall,(int)lbl_8049E78C,56,(int)igInterfaceDeclarationField_vtableRead,0,0,(int)lbl_8055FA58);
}
void *igInterfaceDeclarationField_getMetaCall(){return igInterfaceDeclarationField_getMeta();}
void fn_80146094(){
 if(!lbl_80564174){
  void *object=(lbl_80564174=fn_8006546C(lbl_80564170,fn_800607F4(lbl_805621F4)));
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
  fn_80145FE0();
 }
 return lbl_80564174;
}
int igInterfaceDeclarationField_virtual64(){return 16;}
void igInterfaceDeclarationField_virtual2C(int p0){
 fn_80146188(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+52));
}
}
#pragma pop
