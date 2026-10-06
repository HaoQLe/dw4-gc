#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8010CBD4();
void *fn_8010EE6C();
void fn_8010F21C();
void *fn_801110DC();
void fn_80111118();
void fn_801116E8();
void *fn_80111CD4();
void fn_801BF938();
extern char lbl_80494FF4[];
extern char lbl_80495014[];
extern char lbl_80496040[];
extern char lbl_80497E78[];
extern char lbl_8055F0B4[8];
extern char lbl_8055F0BC[4];
extern char lbl_8055F0C0[4];
extern char lbl_8055F0C4[4];
extern char lbl_8055F0C8[4];
extern char lbl_8055F0CC[8];
extern void *lbl_805621F4;
extern void *lbl_80563710;
extern void *lbl_80563718;
extern void *lbl_80564ED0;
void fn_801113F8();
void *fn_8011146C();
void *fn_8011148C();
void fn_80111494();
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
void fn_801113D0(){
 fn_80066188((int)fn_801113F8);
}
void fn_801113F8(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_80563710,(int)fn_801BF938,(int)fn_8011148C,(int)fn_8011146C,(int)lbl_80494FF4,36,(int)fn_80111118,(int)fn_80111494,0,(int)lbl_8055F0B4);
}
void *fn_8011146C(){return fn_801110DC();}
void *fn_8011148C(){return lbl_80564ED0;}
void fn_80111494(){
 void *value0=lbl_80563710;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055F0BC,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_80111CD4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+60)=0;
 fn_800659C0(value0,lbl_8055F0C0,lbl_8055F0C4,lbl_8055F0C8,value1);
}
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
