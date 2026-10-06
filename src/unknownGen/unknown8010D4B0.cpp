#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8010CBD4();
void fn_8010D9E4();
void fn_80111654();
void *fn_80111CD4();
void fn_8011486C();
extern char lbl_804946C4[];
extern char lbl_8049475C[];
extern char lbl_80494768[];
extern char lbl_80496040[];
extern char lbl_80497D64[];
extern char lbl_80497DC0[];
extern char lbl_80497E1C[];
extern char lbl_80497E78[];
extern char lbl_8055EEFC[8];
extern char lbl_8055EF04[8];
extern char lbl_8055EF14[8];
extern char lbl_8055EF1C[8];
extern char lbl_8055EF24[8];
extern void *lbl_80563598;
extern void *lbl_805635AC;
extern void *lbl_80563718;
extern void *lbl_80563830;
void *fn_8010D4B0();
void *fn_8010D4EC();
void fn_8010D5E4();
void fn_8010D60C();
void *fn_8010D680();
void *fn_8010D6A0();
void fn_8010D6A8();
void *fn_8010D728();
void *fn_8010D764();
void fn_8010D91C();
void fn_8010D944();
void *fn_8010D9BC();
void *fn_8010D9DC();
}
struct UnknownGenRoot8010D4EC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010D4EC(){fn_8006665C(this);}
};
struct UnknownGenObject8010D4EC_0 : UnknownGenRoot8010D4EC {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject8010D4EC_0(){unknown00=lbl_80496040;}
};
struct UnknownGenObject8010D4EC_1 : UnknownGenObject8010D4EC_0 {
 inline ~UnknownGenObject8010D4EC_1(){unknown00=lbl_80497E78;}
};
struct UnknownGenObject8010D4EC : UnknownGenObject8010D4EC_1 {
 char unknown0C[24];
 UnknownGenRefMember unknown24;
 char unknown28[24];
 inline ~UnknownGenObject8010D4EC(){unknown00=lbl_80497E1C;}
};
struct UnknownGenRoot8010D764 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010D764(){fn_8006665C(this);}
};
struct UnknownGenObject8010D764_0 : UnknownGenRoot8010D764 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject8010D764_0(){unknown00=lbl_80496040;}
};
struct UnknownGenObject8010D764_1 : UnknownGenObject8010D764_0 {
 inline ~UnknownGenObject8010D764_1(){unknown00=lbl_80497E78;}
};
struct UnknownGenObject8010D764_2 : UnknownGenObject8010D764_1 {
 char unknown0C[24];
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8010D764_2(){unknown00=lbl_80497DC0;}
};
struct UnknownGenObject8010D764 : UnknownGenObject8010D764_2 {
 UnknownGenRefMember unknown28;
 UnknownGenRefMember unknown2C;
 UnknownGenRefMember unknown30;
 char unknown34[12];
 inline ~UnknownGenObject8010D764(){unknown00=lbl_80497D64;}
};
extern "C" {
void *fn_8010D4B0(){
 if(!lbl_80563598 || !(reinterpret_cast<unsigned int *>(lbl_80563598)[0x24/4]&4)) fn_8010D5E4();
 return lbl_80563598;
}
void *fn_8010D4EC(){
 UnknownGenObject8010D4EC object;
 object.unknown00=lbl_80496040;
 object.unknown08.value=0;
 object.unknown00=lbl_80497E78;
 object.unknown00=lbl_80497E1C;
 object.unknown24.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8010D5E4(){
 fn_80066188((int)fn_8010D60C);
}
void fn_8010D60C(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_80563598,(int)fn_80111654,(int)fn_8010D6A0,(int)fn_8010D680,(int)lbl_804946C4,52,(int)fn_8010D4EC,(int)fn_8010D6A8,0,(int)lbl_8055EEFC);
}
void *fn_8010D680(){return fn_8010D4B0();}
void *fn_8010D6A0(){return lbl_80563718;}
void fn_8010D6A8(){
 void *value0=lbl_80563598;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055EF04,2);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_80111CD4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 fn_800659C0(value0,lbl_8055EF14,lbl_8055EF1C,lbl_8055EF24,value1);
}
void *fn_8010D728(){
 if(!lbl_805635AC || !(reinterpret_cast<unsigned int *>(lbl_805635AC)[0x24/4]&4)) fn_8010D91C();
 return lbl_805635AC;
}
void *fn_8010D764(){
 UnknownGenObject8010D764 object;
 object.unknown00=lbl_80496040;
 object.unknown08.value=0;
 object.unknown00=lbl_80497E78;
 object.unknown00=lbl_80497DC0;
 object.unknown24.value=0;
 object.unknown00=lbl_80497D64;
 object.unknown28.value=0;
 object.unknown2C.value=0;
 object.unknown30.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8010D91C(){
 fn_80066188((int)fn_8010D944);
}
void fn_8010D944(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_805635AC,(int)fn_8011486C,(int)fn_8010D9DC,(int)fn_8010D9BC,(int)lbl_80494768,60,(int)fn_8010D764,(int)fn_8010D9E4,0,(int)lbl_8049475C);
}
void *fn_8010D9BC(){return fn_8010D728();}
void *fn_8010D9DC(){return lbl_80563830;}
}
#pragma pop
