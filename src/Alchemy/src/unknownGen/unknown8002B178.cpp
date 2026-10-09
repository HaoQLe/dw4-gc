#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_80024180();
void *fn_80029E64(void *);
void fn_8002AE84();
void fn_8002BAF8();
void fn_80053650(void *,int);
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void fn_800632A4(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *fn_8006546C(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void igMemoryRefMetaField_register();
void igObjectList_register();
extern char lbl_80464AE8[];
extern char lbl_80464B04[];
extern char lbl_80471384[];
extern char lbl_80471914[];
extern char lbl_80471A08[];
extern char lbl_80472FA0[];
extern char lbl_80475FC0[];
extern char lbl_80476024[];
extern char lbl_80476088[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_8055D2AC[8];
extern char lbl_8055D2B4[4];
extern char lbl_8055D2B8[4];
extern char lbl_8055D2BC[4];
extern char lbl_8055D2C0[4];
extern char lbl_8055D2C4[8];
extern void *lbl_80561818;
extern void *lbl_8056181C;
extern void *lbl_80561848;
extern void *lbl_8056184C;
extern void *lbl_80561854;
extern void *lbl_80561858;
extern void *lbl_805621F4;
void *igMemoryRefArrayMetaField_getMeta();
void *igMemoryRefArrayMetaField_vtableRead();
void fn_8002B380();
void igMemoryRefArrayMetaField_register();
void *igMemoryRefArrayMetaField_getMetaCall();
void *igMemoryRefArrayMetaField_parentMeta();
void igMemoryRefArrayMetaField_fieldInit();
void *igMemoryPoolInfoList_getMeta();
void *igMemoryPoolInfoList_vtableRead();
void fn_8002B640();
void igMemoryPoolInfoList_register();
void *igMemoryPoolInfoList_getMetaCall();
}
struct UnknownGenRoot8002B27C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8002B27C(){fn_800632A4(this);}
};
struct UnknownGenObject8002B27C_0 : UnknownGenRoot8002B27C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8002B27C_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8002B27C_1 : UnknownGenObject8002B27C_0 {
 inline ~UnknownGenObject8002B27C_1(){unknown00=lbl_80471384;}
};
struct UnknownGenObject8002B27C_2 : UnknownGenObject8002B27C_1 {
 char unknown10[56];
 UnknownGenRefMember unknown48;
 UnknownGenString unknown4C;
 inline ~UnknownGenObject8002B27C_2(){unknown00=lbl_80476088;}
};
struct UnknownGenObject8002B27C : UnknownGenObject8002B27C_2 {
 char unknown50[16];
 inline ~UnknownGenObject8002B27C(){unknown00=lbl_80471A08;}
};
struct UnknownGenObject8002B5D0_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void fn_8002B178(){
 if(!lbl_8056181C){
  void *object=(lbl_8056181C=fn_8006546C(lbl_80561818,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_8056181C));
   reinterpret_cast<short *>(lbl_8056181C)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_8056181C);
  }
 }
}
void *fn_8002B210(){
 if(!lbl_8056181C){
  fn_8002AE84();
 }
 return lbl_8056181C;
}
void *igMemoryRefArrayMetaField_getMeta(){
 if(!lbl_80561848 || !(reinterpret_cast<unsigned int *>(lbl_80561848)[0x24/4]&4)) fn_8002B380();
 return lbl_80561848;
}
void *igMemoryRefArrayMetaField_vtableRead(){
 UnknownGenObject8002B27C object;
 object.unknown00=lbl_80471A08;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8002B380(){
 fn_80066188((int)igMemoryRefArrayMetaField_register);
}
void igMemoryRefArrayMetaField_register(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561848,(int)igMemoryRefMetaField_register,(int)igMemoryRefArrayMetaField_parentMeta,(int)igMemoryRefArrayMetaField_getMetaCall,(int)lbl_80464AE8,84,(int)igMemoryRefArrayMetaField_vtableRead,(int)igMemoryRefArrayMetaField_fieldInit,0,(int)lbl_8055D2AC);
}
void *igMemoryRefArrayMetaField_getMetaCall(){return igMemoryRefArrayMetaField_getMeta();}
void *igMemoryRefArrayMetaField_parentMeta(){return lbl_80561818;}
void igMemoryRefArrayMetaField_fieldInit(){
 void *meta=lbl_80561848;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_8055D2B4,1);
 fn_80053650(fn_800658E4(meta,field),1);
 fn_800659C0(meta,lbl_8055D2B8,lbl_8055D2BC,lbl_8055D2C0,field);
}
void fn_8002B4C0(){
 if(!lbl_8056184C){
  void *object=(lbl_8056184C=fn_8006546C(lbl_80561848,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_8056184C));
   reinterpret_cast<short *>(lbl_8056184C)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_8056184C);
  }
 }
}
void *fn_8002B558(){
 if(!lbl_80561854) lbl_80561854=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80561854;
}
void *igMemoryPoolInfoList_getMeta(){
 if(!lbl_80561854 || !(reinterpret_cast<unsigned int *>(lbl_80561854)[0x24/4]&4)) fn_8002B640();
 return lbl_80561854;
}
void *igMemoryPoolInfoList_vtableRead(){
 UnknownGenObject8002B5D0_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_80476024;
 object.unknown00=lbl_80475FC0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8002B640(){
 fn_80066188((int)igMemoryPoolInfoList_register);
}
void igMemoryPoolInfoList_register(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561854,(int)igObjectList_register,(int)fn_80024180,(int)igMemoryPoolInfoList_getMetaCall,(int)lbl_80464B04,20,(int)igMemoryPoolInfoList_vtableRead,0,0,(int)lbl_8055D2C4);
}
void *igMemoryPoolInfoList_getMetaCall(){return igMemoryPoolInfoList_getMeta();}
void *fn_8002B6F4(void *object){
 fn_8002BAF8();
 return fn_8006546C(lbl_80561858,object);
}
void *igMemoryPoolInfo_getMeta(){
 if(!lbl_80561858 || !(reinterpret_cast<unsigned int *>(lbl_80561858)[0x24/4]&4)) fn_8002BAF8();
 return lbl_80561858;
}
}
#pragma pop
