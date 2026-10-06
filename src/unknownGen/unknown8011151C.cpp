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
void *fn_8010EE6C();
void fn_8010F21C();
void fn_801116E8();
extern char lbl_80495014[];
extern char lbl_80496040[];
extern char lbl_80497E78[];
extern char lbl_8055F0CC[8];
extern void *lbl_805621F4;
extern void *lbl_80563718;
void *fn_80111558();
void *fn_80111594();
void fn_8011162C();
void fn_80111654();
void *fn_801116C8();
}
struct UnknownGenRoot80111594 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80111594(){fn_8006665C(this);}
};
struct UnknownGenObject80111594_0 : UnknownGenRoot80111594 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject80111594_0(){unknown00=lbl_80496040;}
};
struct UnknownGenObject80111594 : UnknownGenObject80111594_0 {
 char unknown0C[36];
 inline ~UnknownGenObject80111594(){unknown00=lbl_80497E78;}
};
extern "C" {
void *fn_8011151C(){
 if(!lbl_80563718) lbl_80563718=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563718;
}
void *fn_80111558(){
 if(!lbl_80563718 || !(reinterpret_cast<unsigned int *>(lbl_80563718)[0x24/4]&4)) fn_8011162C();
 return lbl_80563718;
}
void *fn_80111594(){
 UnknownGenObject80111594 object;
 object.unknown00=lbl_80496040;
 object.unknown08.value=0;
 object.unknown00=lbl_80497E78;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8011162C(){
 fn_80066188((int)fn_80111654);
}
void fn_80111654(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_80563718,(int)fn_8010F21C,(int)fn_8010EE6C,(int)fn_801116C8,(int)lbl_80495014,36,(int)fn_80111594,(int)fn_801116E8,0,(int)lbl_8055F0CC);
}
void *fn_801116C8(){return fn_80111558();}
}
#pragma pop
