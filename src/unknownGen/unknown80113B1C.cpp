#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void fn_8002907C();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *fn_8006546C(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
void fn_8010CBD4();
void fn_8010CFA4();
void *fn_8010DB2C();
void *fn_8010E6DC();
void fn_801119C4();
void fn_80111EAC();
void *fn_80113A78();
void fn_80113AB4();
void fn_8011463C();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_80494570[];
extern char lbl_8049553C[];
extern char lbl_80495560[];
extern char lbl_80495570[];
extern char lbl_80495580[];
extern char lbl_80495598[];
extern char lbl_804955F4[];
extern char lbl_80495600[];
extern char lbl_80495AD8[];
extern char lbl_8049652C[];
extern char lbl_8049659C[];
extern char lbl_80496834[];
extern char lbl_80496894[];
extern char lbl_804968F8[];
extern char lbl_80496F94[];
extern char lbl_80496FF8[];
extern char lbl_8049705C[];
extern char lbl_8055F1D0[8];
extern char lbl_8055F1E0[8];
extern char lbl_8055F1E8[8];
extern char lbl_8055F1F0[8];
extern char lbl_8055F1F8[8];
extern char lbl_8055F200[8];
extern char lbl_8055F208[4];
extern char lbl_8055F20C[4];
extern char lbl_8055F210[4];
extern char lbl_8055F214[4];
extern void *lbl_805621F4;
extern void *lbl_80563750;
extern void *lbl_805637F8;
extern void *lbl_80563804;
extern void *lbl_80563808;
extern void *lbl_8056380C;
extern void *lbl_80563810;
extern void *lbl_80563818;
extern void *lbl_8056381C;
void fn_80113B44();
void *fn_80113BB4();
void *fn_80113BD4();
void fn_80113BDC();
void *fn_80113C94();
void *fn_80113CD0();
void fn_80113D10();
void fn_80113D38();
void *fn_80113DA0();
void *fn_80113DFC();
void *fn_80113E38();
void fn_80113F80();
void fn_80113FA8();
void *fn_80114010();
void *fn_80114030();
void *fn_80114074();
void *fn_801140B0();
void fn_80114120();
void fn_80114148();
void *fn_801141B4();
void *fn_8011420C();
void *fn_80114248();
void fn_80114294();
void fn_801142BC();
void *fn_80114330();
void fn_80114350();
void *fn_80114424();
void *fn_80114460();
void *fn_8011449C();
void fn_8011457C();
void fn_801145A4();
void *fn_8011461C();
}
struct UnknownGenObject80113CD0_0 {
 void *unknown00;
 char unknown04[4];
};
struct UnknownGenRoot80113E38 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80113E38(){fn_8006665C(this);}
};
struct UnknownGenObject80113E38_0 : UnknownGenRoot80113E38 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 char unknown18[4];
 UnknownGenRefMember unknown1C;
 inline ~UnknownGenObject80113E38_0(){unknown00=lbl_8049659C;}
};
struct UnknownGenObject80113E38 : UnknownGenObject80113E38_0 {
 char unknown20[8];
 inline ~UnknownGenObject80113E38(){unknown00=lbl_8049705C;}
};
struct UnknownGenObject801140B0_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject80114248_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot8011449C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011449C(){fn_8006665C(this);}
};
struct UnknownGenObject8011449C : UnknownGenRoot8011449C {
 char unknown04[40];
 UnknownGenRefMember unknown2C;
 UnknownGenRefMember unknown30;
 char unknown34[12];
 inline ~UnknownGenObject8011449C(){unknown00=lbl_804968F8;}
};
extern "C" {
void fn_80113B1C(){
 fn_80066188((int)fn_80113B44);
}
void fn_80113B44(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_805637F8,(int)fn_80113D38,(int)fn_80113BD4,(int)fn_80113BB4,(int)lbl_8049553C,88,(int)fn_80113AB4,(int)fn_80113BDC,0,0);
}
void *fn_80113BB4(){return fn_80113A78();}
void *fn_80113BD4(){return lbl_80563804;}
void fn_80113BDC(){
 void *value0=lbl_805637F8;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055F1D0,2);
 void *value2=fn_800658E4(value0,value1);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+52)=(void *)4;
 fn_800659C0(value0,lbl_8055F1E0,lbl_8055F1E8,lbl_8055F1F0,value1);
}
void *fn_80113C58(){
 if(!lbl_80563804) lbl_80563804=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563804;
}
void *fn_80113C94(){
 if(!lbl_80563804 || !(reinterpret_cast<unsigned int *>(lbl_80563804)[0x24/4]&4)) fn_80113D10();
 return lbl_80563804;
}
void *fn_80113CD0(){
 UnknownGenObject80113CD0_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80496834;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80113D10(){
 fn_80066188((int)fn_80113D38);
}
void fn_80113D38(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_80563804,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80113DA0,(int)lbl_80495560,8,(int)fn_80113CD0,0,0,0);
}
void *fn_80113DA0(){return fn_80113C94();}
void *fn_80113DC0(){
 if(!lbl_80563808) lbl_80563808=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563808;
}
void *fn_80113DFC(){
 if(!lbl_80563808 || !(reinterpret_cast<unsigned int *>(lbl_80563808)[0x24/4]&4)) fn_80113F80();
 return lbl_80563808;
}
void *fn_80113E38(){
 UnknownGenObject80113E38 object;
 object.unknown00=lbl_8049659C;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 object.unknown1C.value=0;
 object.unknown00=lbl_8049705C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80113F80(){
 fn_80066188((int)fn_80113FA8);
}
void fn_80113FA8(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_80563808,(int)fn_80111EAC,(int)fn_80114030,(int)fn_80114010,(int)lbl_80495570,36,(int)fn_80113E38,0,0,0);
}
void *fn_80114010(){return fn_80113DFC();}
void *fn_80114030(){return lbl_80563750;}
void *fn_80114038(){
 if(!lbl_8056380C) lbl_8056380C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8056380C;
}
void *fn_80114074(){
 if(!lbl_8056380C || !(reinterpret_cast<unsigned int *>(lbl_8056380C)[0x24/4]&4)) fn_80114120();
 return lbl_8056380C;
}
void *fn_801140B0(){
 UnknownGenObject801140B0_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_80496FF8;
 object.unknown00=lbl_80496F94;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80114120(){
 fn_80066188((int)fn_80114148);
}
void fn_80114148(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_8056380C,(int)fn_8002907C,(int)fn_80024180,(int)fn_801141B4,(int)lbl_80495580,20,(int)fn_801140B0,0,0,(int)lbl_8055F1F8);
}
void *fn_801141B4(){return fn_80114074();}
void *fn_801141D4(void *object){
 fn_80114294();
 return fn_8006546C(lbl_80563810,object);
}
void *fn_8011420C(){
 if(!lbl_80563810 || !(reinterpret_cast<unsigned int *>(lbl_80563810)[0x24/4]&4)) fn_80114294();
 return lbl_80563810;
}
void *fn_80114248(){
 UnknownGenObject80114248_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80495AD8;
 object.unknown00=lbl_80496894;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80114294(){
 fn_80066188((int)fn_801142BC);
}
void fn_801142BC(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_80563810,(int)fn_8010CFA4,(int)fn_8010E6DC,(int)fn_80114330,(int)lbl_80495598,16,(int)fn_80114248,(int)fn_80114350,0,(int)lbl_8055F200);
}
void *fn_80114330(){return fn_8011420C();}
void fn_80114350(){
 void *value0=lbl_80563810;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055F208,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_80114424();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+60)=0;
 fn_800659C0(value0,lbl_8055F20C,lbl_8055F210,lbl_8055F214,value1);
}
void *fn_801143D8(){
 char *data=lbl_80494570;
 if(!lbl_80563818) lbl_80563818=fn_800635C8(data+0x1078,data+0x1060,data+0x106C,0x3);
 return lbl_80563818;
}
void *fn_80114424(){
 if(!lbl_8056381C) lbl_8056381C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8056381C;
}
void *fn_80114460(){
 if(!lbl_8056381C || !(reinterpret_cast<unsigned int *>(lbl_8056381C)[0x24/4]&4)) fn_8011457C();
 return lbl_8056381C;
}
void *fn_8011449C(){
 UnknownGenObject8011449C object;
 object.unknown00=lbl_80495AD8;
 object.unknown00=lbl_8049652C;
 object.unknown00=lbl_804968F8;
 object.unknown2C.value=0;
 object.unknown30.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8011457C(){
 fn_80066188((int)fn_801145A4);
}
void fn_801145A4(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_8056381C,(int)fn_801119C4,(int)fn_8010DB2C,(int)fn_8011461C,(int)lbl_80495600,52,(int)fn_8011449C,(int)fn_8011463C,0,(int)lbl_804955F4);
}
void *fn_8011461C(){return fn_80114460();}
}
#pragma pop
