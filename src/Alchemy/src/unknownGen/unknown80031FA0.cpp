#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_80021D70();
void *fn_80024180();
void *fn_80029E64(void *);
void *fn_80032B94();
void fn_80053650(void *,int);
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void fn_800638E0(void *);
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
void igDirectory_fieldInit();
void igMetaField_register();
void igObjectList_register();
extern char lbl_80466FE0[];
extern char lbl_80466FF4[];
extern char lbl_8046700C[];
extern char lbl_8046701C[];
extern char lbl_8046703C[];
extern char lbl_80471914[];
extern char lbl_80472CA4[];
extern char lbl_80472D98[];
extern char lbl_80472E8C[];
extern char lbl_80472FA0[];
extern char lbl_804757C0[];
extern char lbl_80475824[];
extern char lbl_80475A34[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_8055D580[8];
extern char lbl_8055D588[8];
extern char lbl_8055D590[4];
extern char lbl_8055D594[4];
extern char lbl_8055D598[4];
extern char lbl_8055D59C[4];
extern char lbl_8055D5A0[8];
extern void *lbl_80561C94;
extern void *lbl_80561C98;
extern void *lbl_80561C9C;
extern void *lbl_80561CA0;
extern void *lbl_80561CA8;
extern void *lbl_80561CAC;
extern void *lbl_805621F4;
void *igDoubleMetaField_getMeta();
void *igDoubleMetaField_vtableRead();
void fn_800320A0();
void igDoubleMetaField_register();
void *igDoubleMetaField_getMetaCall();
void *igDoubleArrayMetaField_getMeta();
void *igDoubleArrayMetaField_vtableRead();
void fn_800322F4();
void igDoubleArrayMetaField_register();
void *igDoubleArrayMetaField_getMetaCall();
void *igDoubleArrayMetaField_parentMeta();
void igDoubleArrayMetaField_fieldInit();
void *igDirectoryList_getMeta();
void *igDirectoryList_vtableRead();
void fn_800325B4();
void igDirectoryList_register();
void *igDirectoryList_getMetaCall();
void *igDirectory_getMeta();
void *igDirectory_vtableRead();
void fn_80032928();
void igDirectory_register();
void *igDirectory_getMetaCall();
}
struct UnknownGenRoot80032014 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80032014(){fn_800638E0(this);}
};
struct UnknownGenObject80032014_0 : UnknownGenRoot80032014 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject80032014_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject80032014 : UnknownGenObject80032014_0 {
 char unknown10[48];
 inline ~UnknownGenObject80032014(){unknown00=lbl_80472CA4;}
};
struct UnknownGenRoot80032258 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80032258(){fn_800638E0(this);}
};
struct UnknownGenObject80032258_0 : UnknownGenRoot80032258 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject80032258_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject80032258_1 : UnknownGenObject80032258_0 {
 inline ~UnknownGenObject80032258_1(){unknown00=lbl_80472CA4;}
};
struct UnknownGenObject80032258 : UnknownGenObject80032258_1 {
 char unknown10[48];
 inline ~UnknownGenObject80032258(){unknown00=lbl_80472D98;}
};
struct UnknownGenObject80032544_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot80032718 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80032718(){fn_8006665C(this);}
};
struct UnknownGenObject80032718 : UnknownGenRoot80032718 {
 char unknown04[16];
 UnknownGenString unknown14;
 UnknownGenRefMember unknown18;
 UnknownGenRefMember unknown1C;
 char unknown20[8];
 UnknownGenRefMember unknown28;
 UnknownGenRefMember unknown2C;
 char unknown30[12];
 UnknownGenRefMember unknown3C;
 char unknown40[4];
 UnknownGenRefMember unknown44;
 inline ~UnknownGenObject80032718(){unknown00=lbl_80472E8C;}
};
extern "C" {
void *fn_80031FA0(void *object){
 fn_800320A0();
 return fn_8006546C(lbl_80561C94,object);
}
void *igDoubleMetaField_getMeta(){
 if(!lbl_80561C94 || !(reinterpret_cast<unsigned int *>(lbl_80561C94)[0x24/4]&4)) fn_800320A0();
 return lbl_80561C94;
}
void *igDoubleMetaField_vtableRead(){
 UnknownGenObject80032014 object;
 object.unknown00=lbl_80472CA4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800320A0(){
 fn_80066188((int)igDoubleMetaField_register);
}
void igDoubleMetaField_register(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561C94,(int)igMetaField_register,(int)fn_80021D70,(int)igDoubleMetaField_getMetaCall,(int)lbl_80466FE0,52,(int)igDoubleMetaField_vtableRead,0,0,(int)lbl_8055D580);
}
void *igDoubleMetaField_getMetaCall(){return igDoubleMetaField_getMeta();}
void fn_80032154(){
 if(!lbl_80561C98){
  void *object=(lbl_80561C98=fn_8006546C(lbl_80561C94,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80561C98));
   reinterpret_cast<short *>(lbl_80561C98)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80561C98);
  }
 }
}
void *fn_800321EC(){
 if(!lbl_80561C98){
  fn_800320A0();
 }
 return lbl_80561C98;
}
void *igDoubleArrayMetaField_getMeta(){
 if(!lbl_80561C9C || !(reinterpret_cast<unsigned int *>(lbl_80561C9C)[0x24/4]&4)) fn_800322F4();
 return lbl_80561C9C;
}
void *igDoubleArrayMetaField_vtableRead(){
 UnknownGenObject80032258 object;
 object.unknown00=lbl_80472CA4;
 object.unknown00=lbl_80472D98;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800322F4(){
 fn_80066188((int)igDoubleArrayMetaField_register);
}
void igDoubleArrayMetaField_register(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561C9C,(int)igDoubleMetaField_register,(int)igDoubleArrayMetaField_parentMeta,(int)igDoubleArrayMetaField_getMetaCall,(int)lbl_80466FF4,56,(int)igDoubleArrayMetaField_vtableRead,(int)igDoubleArrayMetaField_fieldInit,0,(int)lbl_8055D588);
}
void *igDoubleArrayMetaField_getMetaCall(){return igDoubleArrayMetaField_getMeta();}
void *igDoubleArrayMetaField_parentMeta(){return lbl_80561C94;}
void igDoubleArrayMetaField_fieldInit(){
 void *meta=lbl_80561C9C;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_8055D590,1);
 fn_80053650(fn_800658E4(meta,field),1);
 fn_800659C0(meta,lbl_8055D594,lbl_8055D598,lbl_8055D59C,field);
}
void fn_80032434(){
 if(!lbl_80561CA0){
  void *object=(lbl_80561CA0=fn_8006546C(lbl_80561C9C,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80561CA0));
   reinterpret_cast<short *>(lbl_80561CA0)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80561CA0);
  }
 }
}
void *fn_800324CC(){
 if(!lbl_80561CA8) lbl_80561CA8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80561CA8;
}
void *igDirectoryList_getMeta(){
 if(!lbl_80561CA8 || !(reinterpret_cast<unsigned int *>(lbl_80561CA8)[0x24/4]&4)) fn_800325B4();
 return lbl_80561CA8;
}
void *igDirectoryList_vtableRead(){
 UnknownGenObject80032544_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_80475824;
 object.unknown00=lbl_804757C0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800325B4(){
 fn_80066188((int)igDirectoryList_register);
}
void igDirectoryList_register(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561CA8,(int)igObjectList_register,(int)fn_80024180,(int)igDirectoryList_getMetaCall,(int)lbl_8046700C,20,(int)igDirectoryList_vtableRead,0,0,(int)lbl_8055D5A0);
}
void *igDirectoryList_getMetaCall(){return igDirectoryList_getMeta();}
void *fn_80032668(void *object){
 fn_80032928();
 return fn_8006546C(lbl_80561CAC,object);
}
void *fn_800326A0(){
 if(!lbl_80561CAC) lbl_80561CAC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80561CAC;
}
void *igDirectory_getMeta(){
 if(!lbl_80561CAC || !(reinterpret_cast<unsigned int *>(lbl_80561CAC)[0x24/4]&4)) fn_80032928();
 return lbl_80561CAC;
}
void *igDirectory_vtableRead(){
 UnknownGenObject80032718 object;
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_80475A34;
 object.unknown00=lbl_80472E8C;
 object.unknown14.value=0;
 object.unknown18.value=0;
 object.unknown1C.value=0;
 object.unknown28.value=0;
 object.unknown2C.value=0;
 object.unknown3C.value=0;
 object.unknown44.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80032928(){
 fn_80066188((int)igDirectory_register);
}
void igDirectory_register(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561CAC,(int)igObjectList_register,(int)fn_80024180,(int)igDirectory_getMetaCall,(int)lbl_8046703C,72,(int)igDirectory_vtableRead,(int)igDirectory_fieldInit,(int)fn_80032B94,(int)lbl_8046701C);
}
void *igDirectory_getMetaCall(){return igDirectory_getMeta();}
}
#pragma pop
