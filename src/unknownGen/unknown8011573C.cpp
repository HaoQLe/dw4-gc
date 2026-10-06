#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8010CBD4();
void fn_8010D60C();
void *fn_8010DD30();
void fn_8011597C();
extern char lbl_804959F8[];
extern char lbl_80496040[];
extern char lbl_80496D18[];
extern char lbl_80497E1C[];
extern char lbl_80497E78[];
extern char lbl_8055F2BC[8];
extern void *lbl_80563888;
void *fn_8011573C();
void *fn_80115778();
void fn_801158C0();
void fn_801158E8();
void *fn_8011595C();
}
struct UnknownGenRoot80115778 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80115778(){fn_8006665C(this);}
};
struct UnknownGenObject80115778_0 : UnknownGenRoot80115778 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject80115778_0(){unknown00=lbl_80496040;}
};
struct UnknownGenObject80115778_1 : UnknownGenObject80115778_0 {
 inline ~UnknownGenObject80115778_1(){unknown00=lbl_80497E78;}
};
struct UnknownGenObject80115778_2 : UnknownGenObject80115778_1 {
 char unknown0C[24];
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80115778_2(){unknown00=lbl_80497E1C;}
};
struct UnknownGenObject80115778 : UnknownGenObject80115778_2 {
 char unknown28[12];
 UnknownGenRefMember unknown34;
 char unknown38[16];
 inline ~UnknownGenObject80115778(){unknown00=lbl_80496D18;}
};
extern "C" {
void *fn_8011573C(){
 if(!lbl_80563888 || !(reinterpret_cast<unsigned int *>(lbl_80563888)[0x24/4]&4)) fn_801158C0();
 return lbl_80563888;
}
void *fn_80115778(){
 UnknownGenObject80115778 object;
 object.unknown00=lbl_80496040;
 object.unknown08.value=0;
 object.unknown00=lbl_80497E78;
 object.unknown00=lbl_80497E1C;
 object.unknown24.value=0;
 object.unknown00=lbl_80496D18;
 object.unknown34.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801158C0(){
 fn_80066188((int)fn_801158E8);
}
void fn_801158E8(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_80563888,(int)fn_8010D60C,(int)fn_8010DD30,(int)fn_8011595C,(int)lbl_804959F8,60,(int)fn_80115778,(int)fn_8011597C,0,(int)lbl_8055F2BC);
}
void *fn_8011595C(){return fn_8011573C();}
}
#pragma pop
