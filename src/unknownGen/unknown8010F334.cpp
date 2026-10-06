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
void fn_8010F504();
void fn_80112DF0();
extern char lbl_80494ACC[];
extern char lbl_80496100[];
extern char lbl_80497724[];
extern char lbl_8055F00C[8];
extern void *lbl_805621F4;
extern void *lbl_80563650;
extern void *lbl_805637B8;
void *fn_8010F370();
void *fn_8010F3AC();
void fn_8010F440();
void fn_8010F468();
void *fn_8010F4DC();
void *fn_8010F4FC();
}
struct UnknownGenRoot8010F3AC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010F3AC(){fn_8006665C(this);}
};
struct UnknownGenObject8010F3AC : UnknownGenRoot8010F3AC {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject8010F3AC(){unknown00=lbl_80496100;}
};
extern "C" {
void *fn_8010F334(){
 if(!lbl_80563650) lbl_80563650=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563650;
}
void *fn_8010F370(){
 if(!lbl_80563650 || !(reinterpret_cast<unsigned int *>(lbl_80563650)[0x24/4]&4)) fn_8010F440();
 return lbl_80563650;
}
void *fn_8010F3AC(){
 UnknownGenObject8010F3AC object;
 object.unknown00=lbl_80497724;
 object.unknown00=lbl_80496100;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8010F440(){
 fn_80066188((int)fn_8010F468);
}
void fn_8010F468(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_80563650,(int)fn_80112DF0,(int)fn_8010F4FC,(int)fn_8010F4DC,(int)lbl_80494ACC,12,(int)fn_8010F3AC,(int)fn_8010F504,0,(int)lbl_8055F00C);
}
void *fn_8010F4DC(){return fn_8010F370();}
void *fn_8010F4FC(){return lbl_805637B8;}
}
#pragma pop
