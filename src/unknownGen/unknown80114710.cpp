#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8010CBD4();
void *fn_8010D6A0();
void fn_80111654();
void fn_80114900();
extern char lbl_804956A4[];
extern char lbl_80496040[];
extern char lbl_80497DC0[];
extern char lbl_80497E78[];
extern char lbl_8055F224[8];
extern void *lbl_80563830;
void *fn_80114710();
void *fn_8011474C();
void fn_80114844();
void fn_8011486C();
void *fn_801148E0();
}
struct UnknownGenRoot8011474C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011474C(){fn_8006665C(this);}
};
struct UnknownGenObject8011474C_0 : UnknownGenRoot8011474C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject8011474C_0(){unknown00=lbl_80496040;}
};
struct UnknownGenObject8011474C_1 : UnknownGenObject8011474C_0 {
 inline ~UnknownGenObject8011474C_1(){unknown00=lbl_80497E78;}
};
struct UnknownGenObject8011474C : UnknownGenObject8011474C_1 {
 char unknown0C[24];
 UnknownGenRefMember unknown24;
 char unknown28[8];
 inline ~UnknownGenObject8011474C(){unknown00=lbl_80497DC0;}
};
extern "C" {
void *fn_80114710(){
 if(!lbl_80563830 || !(reinterpret_cast<unsigned int *>(lbl_80563830)[0x24/4]&4)) fn_80114844();
 return lbl_80563830;
}
void *fn_8011474C(){
 UnknownGenObject8011474C object;
 object.unknown00=lbl_80496040;
 object.unknown08.value=0;
 object.unknown00=lbl_80497E78;
 object.unknown00=lbl_80497DC0;
 object.unknown24.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80114844(){
 fn_80066188((int)fn_8011486C);
}
void fn_8011486C(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_80563830,(int)fn_80111654,(int)fn_8010D6A0,(int)fn_801148E0,(int)lbl_804956A4,40,(int)fn_8011474C,(int)fn_80114900,0,(int)lbl_8055F224);
}
void *fn_801148E0(){return fn_80114710();}
}
#pragma pop
