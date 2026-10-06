#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
void fn_8010CBD4();
void fn_8010EBAC();
extern char lbl_80494918[];
extern char lbl_80494928[];
extern char lbl_80495EF4[];
extern void *lbl_805621F4;
extern void *lbl_805635FC;
void *fn_8010E9B0();
void *fn_8010E9EC();
void fn_8010EAEC();
void fn_8010EB14();
void *fn_8010EB8C();
}
struct UnknownGenRoot8010E9EC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010E9EC(){fn_8006665C(this);}
};
struct UnknownGenObject8010E9EC : UnknownGenRoot8010E9EC {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[20];
 inline ~UnknownGenObject8010E9EC(){unknown00=lbl_80495EF4;}
};
extern "C" {
void *fn_8010E974(){
 if(!lbl_805635FC) lbl_805635FC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805635FC;
}
void *fn_8010E9B0(){
 if(!lbl_805635FC || !(reinterpret_cast<unsigned int *>(lbl_805635FC)[0x24/4]&4)) fn_8010EAEC();
 return lbl_805635FC;
}
void *fn_8010E9EC(){
 UnknownGenObject8010E9EC object;
 object.unknown00=lbl_80495EF4;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8010EAEC(){
 fn_80066188((int)fn_8010EB14);
}
void fn_8010EB14(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_805635FC,(int)fn_80066B08,(int)fn_800237D0,(int)fn_8010EB8C,(int)lbl_80494928,32,(int)fn_8010E9EC,(int)fn_8010EBAC,0,(int)lbl_80494918);
}
void *fn_8010EB8C(){return fn_8010E9B0();}
}
#pragma pop
