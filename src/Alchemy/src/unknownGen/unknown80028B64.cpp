#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_80024D1C();
void fn_800289F8();
void *fn_80029E64(void *);
void fn_80053650(void *,int);
void *fn_80053998(void *,void *);
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *fn_8006546C(void *,void *);
void fn_8006588C(void *,void *,void *);
void *fn_800658E4(void *,void *);
UnknownGenFactory *fn_800658F8(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8006ACA4(void *);
void igDataList_register();
void igDirEntry_register();
void igObjectDirEntry_fieldInit();
void igObjectRefMetaField_register();
extern char lbl_80464130[];
extern char lbl_8046414C[];
extern char lbl_8046415C[];
extern char lbl_80464168[];
extern char lbl_80471384[];
extern char lbl_80471650[];
extern char lbl_80471744[];
extern char lbl_80471914[];
extern char lbl_80472EF4[];
extern char lbl_80472FA0[];
extern char lbl_804762FC[];
extern char lbl_8047650C[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_8055D0A0[6];
extern char lbl_8055D214[8];
extern char lbl_8055D21C[4];
extern char lbl_8055D220[4];
extern char lbl_8055D224[4];
extern char lbl_8055D228[4];
extern void *lbl_805616E8;
extern void *lbl_805616EC;
extern void *lbl_805616FC;
extern void *lbl_80561700;
extern void *lbl_80561708;
extern char lbl_8056170C[4];
extern void *lbl_80561710;
extern void *lbl_80561D00;
extern void *lbl_805621F4;
void *fn_80028BFC();
void *igObjectRefArrayMetaField_getMeta();
void *igObjectRefArrayMetaField_vtableRead();
void fn_80028D74();
void igObjectRefArrayMetaField_register();
void *igObjectRefArrayMetaField_getMetaCall();
void *igObjectRefArrayMetaField_parentMeta();
void igObjectRefArrayMetaField_fieldInit();
void *igObjectList_getMeta();
void *igObjectList_vtableRead();
void fn_80029054();
void igObjectList_register();
void *igObjectList_getMetaCall();
void fn_8002910C();
void *igObjectDirEntry_getMeta();
void *igObjectDirEntry_vtableRead();
void fn_8002936C();
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
 inline ~UnknownGenObject80028CA0(){unknown00=lbl_80471650;}
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
 inline ~UnknownGenObject8002923C_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject8002923C_1 : UnknownGenObject8002923C_0 {
 inline ~UnknownGenObject8002923C_1(){unknown00=lbl_80472EF4;}
};
struct UnknownGenObject8002923C : UnknownGenObject8002923C_1 {
 char unknown0C[16];
 UnknownGenRefMember unknown1C;
 UnknownGenString unknown20;
 char unknown24[20];
 inline ~UnknownGenObject8002923C(){unknown00=lbl_80471744;}
};
extern "C" {
void fn_80028B64(){
 if(!lbl_805616EC){
  void *object=(lbl_805616EC=fn_8006546C(lbl_805616E8,fn_800607F4(lbl_805621F4)));
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
  fn_800289F8();
 }
 return lbl_805616EC;
}
void *fn_80028C2C(void *object){
 fn_80028D74();
 return fn_8006546C(lbl_805616FC,object);
}
void *igObjectRefArrayMetaField_getMeta(){
 if(!lbl_805616FC || !(reinterpret_cast<unsigned int *>(lbl_805616FC)[0x24/4]&4)) fn_80028D74();
 return lbl_805616FC;
}
void *igObjectRefArrayMetaField_vtableRead(){
 UnknownGenObject80028CA0 object;
 object.unknown00=lbl_80471650;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80028D74(){
 fn_80066188((int)igObjectRefArrayMetaField_register);
}
void igObjectRefArrayMetaField_register(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_805616FC,(int)igObjectRefMetaField_register,(int)igObjectRefArrayMetaField_parentMeta,(int)igObjectRefArrayMetaField_getMetaCall,(int)lbl_80464130,72,(int)igObjectRefArrayMetaField_vtableRead,(int)igObjectRefArrayMetaField_fieldInit,0,(int)lbl_8055D214);
}
void *igObjectRefArrayMetaField_getMetaCall(){return igObjectRefArrayMetaField_getMeta();}
void *igObjectRefArrayMetaField_parentMeta(){return lbl_805616E8;}
void igObjectRefArrayMetaField_fieldInit(){
 void *meta=lbl_805616FC;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_8055D21C,1);
 fn_80053650(fn_800658E4(meta,field),1);
 fn_800659C0(meta,lbl_8055D220,lbl_8055D224,lbl_8055D228,field);
}
void fn_80028EB4(){
 if(!lbl_80561700){
  void *object=(lbl_80561700=fn_8006546C(lbl_805616FC,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80561700));
   reinterpret_cast<short *>(lbl_80561700)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80561700);
  }
 }
}
void *fn_80028F4C(void *object){
 fn_80029054();
 return fn_8006546C(lbl_80561708,object);
}
void *fn_80028F84(){
 if(!lbl_80561708) lbl_80561708=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80561708;
}
void *igObjectList_getMeta(){
 if(!lbl_80561708 || !(reinterpret_cast<unsigned int *>(lbl_80561708)[0x24/4]&4)) fn_80029054();
 return lbl_80561708;
}
void *igObjectList_vtableRead(){
 UnknownGenObject80028FFC_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80029054(){
 fn_80066188((int)igObjectList_register);
}
void igObjectList_register(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561708,(int)igDataList_register,(int)fn_80024D1C,(int)igObjectList_getMetaCall,(int)lbl_8046414C,20,(int)igObjectList_vtableRead,(int)fn_8002910C,0,0);
}
void *igObjectList_getMetaCall(){return igObjectList_getMeta();}
void fn_8002910C(){
 void *meta=lbl_80561708;
 UnknownGenField *field=reinterpret_cast<UnknownGenField *>(fn_800658F8(meta,lbl_8055D0A0));
 void *type=fn_80053998(reinterpret_cast<void **>(meta)[0x28/4],field);
 field=reinterpret_cast<UnknownGenFactory *>(field)->slot54(1);
 field->unknown3C=fn_80028BFC();
 field->unknown38=0;
 field->unknown1C=lbl_8056170C;
 fn_8006588C(meta,type,field);
 unknownGenDrop(reinterpret_cast<UnknownGenValue *>(field));
}
void *fn_800291C8(void *object){
 fn_8002936C();
 return fn_8006546C(lbl_80561710,object);
}
void *igObjectDirEntry_getMeta(){
 if(!lbl_80561710 || !(reinterpret_cast<unsigned int *>(lbl_80561710)[0x24/4]&4)) fn_8002936C();
 return lbl_80561710;
}
void *igObjectDirEntry_vtableRead(){
 UnknownGenObject8002923C object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80472EF4;
 object.unknown00=lbl_80471744;
 object.unknown1C.value=0;
 object.unknown20.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8002936C(){
 fn_80066188((int)igObjectDirEntry_register);
}
void igObjectDirEntry_register(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561710,(int)igDirEntry_register,(int)fn_8002942C,(int)igObjectDirEntry_getMetaCall,(int)lbl_80464168,52,(int)igObjectDirEntry_vtableRead,(int)igObjectDirEntry_fieldInit,0,(int)lbl_8046415C);
}
void *igObjectDirEntry_getMetaCall(){return igObjectDirEntry_getMeta();}
void *fn_8002942C(){return lbl_80561D00;}
}
#pragma pop
