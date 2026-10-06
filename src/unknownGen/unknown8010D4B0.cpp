#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8010CBD4();
void fn_8010D6A8();
void fn_80111654();
extern char lbl_804946C4[];
extern char lbl_80496040[];
extern char lbl_80497E1C[];
extern char lbl_80497E78[];
extern char lbl_8055EEFC[8];
extern void *lbl_80563598;
extern void *lbl_80563718;
void *fn_8010D4B0();
void *fn_8010D4EC();
void fn_8010D5E4();
void fn_8010D60C();
void *fn_8010D680();
void *fn_8010D6A0();
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
}
#pragma pop
