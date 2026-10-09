#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_80024D1C();
void *fn_80029E64(void *);
void fn_80033734(void *);
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
void igCompoundMetaField_register();
void igDataList_register();
extern char lbl_80467440[];
extern char lbl_80467454[];
extern char lbl_80471914[];
extern char lbl_80472FA0[];
extern char lbl_80474018[];
extern char lbl_804755B0[];
extern char lbl_804756A4[];
extern char lbl_80475704[];
extern char lbl_8055D0A0[6];
extern char lbl_8055D5C8[8];
extern void *lbl_80561D2C;
extern char lbl_80561D30[4];
extern void *lbl_80561D34;
extern void *lbl_80561D38;
extern void *lbl_80561E10;
extern void *lbl_805621F4;
void *igDependencyList_getMeta();
void *igDependencyList_vtableRead();
void fn_80033300();
void igDependencyList_register();
void *igDependencyList_getMetaCall();
void fn_800333B8();
void *igDependencyMetaField_getMeta();
void *igDependencyMetaField_vtableRead();
void fn_80033584();
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
 inline ~UnknownGenObject800334B0(){unknown00=lbl_804755B0;}
};
extern "C" {
void *fn_80033230(){
 if(!lbl_80561D2C) lbl_80561D2C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80561D2C;
}
void *igDependencyList_getMeta(){
 if(!lbl_80561D2C || !(reinterpret_cast<unsigned int *>(lbl_80561D2C)[0x24/4]&4)) fn_80033300();
 return lbl_80561D2C;
}
void *igDependencyList_vtableRead(){
 UnknownGenObject800332A8_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80475704;
 object.unknown00=lbl_804756A4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80033300(){
 fn_80066188((int)igDependencyList_register);
}
void igDependencyList_register(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561D2C,(int)igDataList_register,(int)fn_80024D1C,(int)igDependencyList_getMetaCall,(int)lbl_80467440,20,(int)igDependencyList_vtableRead,(int)fn_800333B8,0,0);
}
void *igDependencyList_getMetaCall(){return igDependencyList_getMeta();}
void fn_800333B8(){
 void *meta=lbl_80561D2C;
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
 if(!lbl_80561D34 || !(reinterpret_cast<unsigned int *>(lbl_80561D34)[0x24/4]&4)) fn_80033584();
 return lbl_80561D34;
}
void *igDependencyMetaField_vtableRead(){
 UnknownGenObject800334B0 object;
 object.unknown00=lbl_80474018;
 object.unknown34.value=0;
 object.unknown00=lbl_804755B0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80033584(){
 fn_80066188((int)igDependencyMetaField_register);
}
void igDependencyMetaField_register(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561D34,(int)igCompoundMetaField_register,(int)fn_80033638,(int)igDependencyMetaField_getMetaCall,(int)lbl_80467454,56,(int)igDependencyMetaField_vtableRead,0,0,(int)lbl_8055D5C8);
}
void *igDependencyMetaField_getMetaCall(){return igDependencyMetaField_getMeta();}
void *fn_80033638(){return lbl_80561E10;}
void fn_80033640(){
 if(!lbl_80561D38){
  void *object=(lbl_80561D38=fn_8006546C(lbl_80561D34,fn_800607F4(lbl_805621F4)));
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
  fn_80033584();
 }
 return lbl_80561D38;
}
int igDependencyMetaField_virtual64(){return 8;}
void igDependencyMetaField_virtual2C(int p0){
 fn_80033734(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+52));
}
}
#pragma pop
