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
void fn_801AA6DC();
void fn_801AF7C4();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804AC810[];
extern char lbl_804B94C8[];
extern char lbl_804B952C[];
extern char lbl_80560214[8];
extern void *lbl_805621F4;
extern void *lbl_80564880;
extern void *lbl_80564884;
void *fn_801AF4D4();
void *fn_801AF510();
void fn_801AF580();
void fn_801AF5A8();
void *fn_801AF614();
}
struct UnknownGenObject801AF510 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_801AF498(){
 if(!lbl_80564880) lbl_80564880=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564880;
}
void *fn_801AF4D4(){
 if(!lbl_80564880 || !(reinterpret_cast<unsigned int *>(lbl_80564880)[0x24/4]&4)) fn_801AF580();
 return lbl_80564880;
}
void *fn_801AF510(){
 UnknownGenObject801AF510 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B952C;
 object.unknown00=lbl_804B94C8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801AF580(){
 fn_80066188((int)fn_801AF5A8);
}
void fn_801AF5A8(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564880,(int)fn_8002907C,(int)fn_80024180,(int)fn_801AF614,(int)lbl_804AC810,20,(int)fn_801AF510,0,0,(int)lbl_80560214);
}
void *fn_801AF614(){return fn_801AF4D4();}
void *fn_801AF634(){
 if(!lbl_80564884) lbl_80564884=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564884;
}
void *fn_801AF670(){
 if(!lbl_80564884 || !(reinterpret_cast<unsigned int *>(lbl_80564884)[0x24/4]&4)) fn_801AF7C4();
 return lbl_80564884;
}
}
#pragma pop
