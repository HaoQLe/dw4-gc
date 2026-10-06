#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8010CBD4();
void *fn_8010DB2C();
void fn_801119C4();
void fn_8011463C();
extern char lbl_80494570[];
extern char lbl_804955F4[];
extern char lbl_80495600[];
extern char lbl_80495AD8[];
extern char lbl_8049652C[];
extern char lbl_804968F8[];
extern void *lbl_805621F4;
extern void *lbl_80563818;
extern void *lbl_8056381C;
void *fn_80114460();
void *fn_8011449C();
void fn_8011457C();
void fn_801145A4();
void *fn_8011461C();
}
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
