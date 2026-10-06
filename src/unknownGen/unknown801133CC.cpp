#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8010CBD4();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804953F0[];
extern char lbl_80497114[];
extern char lbl_80497178[];
extern char lbl_8055F1BC[8];
extern void *lbl_805621F4;
extern void *lbl_805637D0;
void *fn_80113408();
void *fn_80113444();
void fn_801134B4();
void fn_801134DC();
void *fn_80113548();
}
struct UnknownGenObject80113444_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_801133CC(){
 if(!lbl_805637D0) lbl_805637D0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805637D0;
}
void *fn_80113408(){
 if(!lbl_805637D0 || !(reinterpret_cast<unsigned int *>(lbl_805637D0)[0x24/4]&4)) fn_801134B4();
 return lbl_805637D0;
}
void *fn_80113444(){
 UnknownGenObject80113444_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_80497178;
 object.unknown00=lbl_80497114;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801134B4(){
 fn_80066188((int)fn_801134DC);
}
void fn_801134DC(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_805637D0,(int)fn_8002907C,(int)fn_80024180,(int)fn_80113548,(int)lbl_804953F0,20,(int)fn_80113444,0,0,(int)lbl_8055F1BC);
}
void *fn_80113548(){return fn_80113408();}
}
#pragma pop
