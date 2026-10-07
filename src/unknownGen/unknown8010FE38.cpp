#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
void fn_8010CBD4();
void *fn_8010DF8C();
void fn_8010E2EC();
void fn_80110354();
void *fn_8011205C();
void fn_801264B4(void *,void *);
extern char lbl_80494C30[];
extern char lbl_80494C54[];
extern char lbl_80494C68[];
extern char lbl_80496218[];
extern char lbl_804975A4[];
extern char lbl_80497C9C[];
extern char lbl_8055F05C[8];
extern char lbl_8055F064[8];
extern char lbl_8055F074[8];
extern char lbl_8055F07C[8];
extern char lbl_8055F084[8];
extern void *lbl_805621F4;
extern void *lbl_8056368C;
extern void *lbl_80563698;
extern char lbl_805669AC[4];
void *fn_8010FE74();
void *fn_8010FEB0();
void fn_8010FF38();
void fn_8010FF60();
void *fn_8010FFD4();
void fn_8010FFF4();
void *fn_801100D0();
void *fn_8011010C();
void fn_80110294();
void fn_801102BC();
void *fn_80110334();
}
struct UnknownGenRoot8010FEB0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010FEB0(){fn_8006665C(this);}
};
struct UnknownGenObject8010FEB0 : UnknownGenRoot8010FEB0 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[20];
 inline ~UnknownGenObject8010FEB0(){unknown00=lbl_804975A4;}
};
struct UnknownGenL8010FFF4_8 {
 float m08;
 float m0C;
};
struct UnknownGenRoot8011010C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011010C(){fn_8006665C(this);}
};
struct UnknownGenObject8011010C_0 : UnknownGenRoot8011010C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject8011010C_0(){unknown00=lbl_80497C9C;}
};
struct UnknownGenObject8011010C : UnknownGenObject8011010C_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 char unknown1C[4];
 inline ~UnknownGenObject8011010C(){unknown00=lbl_80496218;}
};
extern "C" {
void *fn_8010FE38(){
 if(!lbl_8056368C) lbl_8056368C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8056368C;
}
void *fn_8010FE74(){
 if(!lbl_8056368C || !(reinterpret_cast<unsigned int *>(lbl_8056368C)[0x24/4]&4)) fn_8010FF38();
 return lbl_8056368C;
}
void *fn_8010FEB0(){
 UnknownGenObject8010FEB0 object;
 object.unknown00=lbl_804975A4;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8010FF38(){
 fn_80066188((int)fn_8010FF60);
}
void fn_8010FF60(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_8056368C,(int)fn_80066B08,(int)fn_800237D0,(int)fn_8010FFD4,(int)lbl_80494C30,20,(int)fn_8010FEB0,(int)fn_8010FFF4,0,(int)lbl_8055F05C);
}
void *fn_8010FFD4(){return fn_8010FE74();}
void fn_8010FFF4(){
 UnknownGenL8010FFF4_8 local0;
 void *value0=lbl_8056368C;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055F064,2);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_8011205C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 local0.m08=*reinterpret_cast<float *>((lbl_805669AC+0));
 local0.m0C=*reinterpret_cast<float *>((lbl_805669AC+0));
 fn_801264B4(value4,&local0);
 fn_800659C0(value0,lbl_8055F074,lbl_8055F07C,lbl_8055F084,value1);
}
void *fn_80110094(){
 if(!lbl_80563698) lbl_80563698=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563698;
}
void *fn_801100D0(){
 if(!lbl_80563698 || !(reinterpret_cast<unsigned int *>(lbl_80563698)[0x24/4]&4)) fn_80110294();
 return lbl_80563698;
}
void *fn_8011010C(){
 UnknownGenObject8011010C object;
 object.unknown00=lbl_80497C9C;
 object.unknown08.value=0;
 object.unknown00=lbl_80496218;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 object.unknown18.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80110294(){
 fn_80066188((int)fn_801102BC);
}
void fn_801102BC(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_80563698,(int)fn_8010E2EC,(int)fn_8010DF8C,(int)fn_80110334,(int)lbl_80494C68,28,(int)fn_8011010C,(int)fn_80110354,0,(int)lbl_80494C54);
}
void *fn_80110334(){return fn_801100D0();}
}
#pragma pop
