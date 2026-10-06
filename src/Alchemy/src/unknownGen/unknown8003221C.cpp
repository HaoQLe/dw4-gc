#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_80024180();
void fn_8002907C();
void *fn_80029E64(void *);
void fn_800320C8();
void fn_800329EC();
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
extern char lbl_8055D588[8];
extern char lbl_8055D590[4];
extern char lbl_8055D594[4];
extern char lbl_8055D598[4];
extern char lbl_8055D59C[4];
extern char lbl_8055D5A0[8];
extern void *lbl_80561C94;
extern void *lbl_80561C9C;
extern void *lbl_80561CA0;
extern void *lbl_80561CA8;
extern void *lbl_80561CAC;
extern void *lbl_805621F4;
void *fn_8003221C();
void *fn_80032258();
void fn_800322F4();
void fn_8003231C();
void *fn_80032390();
void *fn_800323B0();
void fn_800323B8();
void *fn_80032508();
void *fn_80032544();
void fn_800325B4();
void fn_800325DC();
void *fn_80032648();
void *fn_800326DC();
void *fn_80032718();
void fn_80032928();
void fn_80032950();
void *fn_800329CC();
}
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
void *fn_8003221C(){
 if(!lbl_80561C9C || !(reinterpret_cast<unsigned int *>(lbl_80561C9C)[0x24/4]&4)) fn_800322F4();
 return lbl_80561C9C;
}
void *fn_80032258(){
 UnknownGenObject80032258 object;
 object.unknown00=lbl_80472CA4;
 object.unknown00=lbl_80472D98;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800322F4(){
 fn_80066188((int)fn_8003231C);
}
void fn_8003231C(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561C9C,(int)fn_800320C8,(int)fn_800323B0,(int)fn_80032390,(int)lbl_80466FF4,56,(int)fn_80032258,(int)fn_800323B8,0,(int)lbl_8055D588);
}
void *fn_80032390(){return fn_8003221C();}
void *fn_800323B0(){return lbl_80561C94;}
void fn_800323B8(){
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
void *fn_80032508(){
 if(!lbl_80561CA8 || !(reinterpret_cast<unsigned int *>(lbl_80561CA8)[0x24/4]&4)) fn_800325B4();
 return lbl_80561CA8;
}
void *fn_80032544(){
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
 fn_80066188((int)fn_800325DC);
}
void fn_800325DC(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561CA8,(int)fn_8002907C,(int)fn_80024180,(int)fn_80032648,(int)lbl_8046700C,20,(int)fn_80032544,0,0,(int)lbl_8055D5A0);
}
void *fn_80032648(){return fn_80032508();}
void *fn_80032668(void *object){
 fn_80032928();
 return fn_8006546C(lbl_80561CAC,object);
}
void *fn_800326A0(){
 if(!lbl_80561CAC) lbl_80561CAC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80561CAC;
}
void *fn_800326DC(){
 if(!lbl_80561CAC || !(reinterpret_cast<unsigned int *>(lbl_80561CAC)[0x24/4]&4)) fn_80032928();
 return lbl_80561CAC;
}
void *fn_80032718(){
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
 fn_80066188((int)fn_80032950);
}
void fn_80032950(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561CAC,(int)fn_8002907C,(int)fn_80024180,(int)fn_800329CC,(int)lbl_8046703C,72,(int)fn_80032718,(int)fn_800329EC,(int)fn_80032B94,(int)lbl_8046701C);
}
void *fn_800329CC(){return fn_800326DC();}
}
#pragma pop
