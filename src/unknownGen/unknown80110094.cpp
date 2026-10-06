#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8010CBD4();
void *fn_8010DF8C();
void fn_8010E2EC();
void fn_80110354();
extern char lbl_80494C54[];
extern char lbl_80494C68[];
extern char lbl_80496218[];
extern char lbl_80497C9C[];
extern void *lbl_805621F4;
extern void *lbl_80563698;
void *fn_801100D0();
void *fn_8011010C();
void fn_80110294();
void fn_801102BC();
void *fn_80110334();
}
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
