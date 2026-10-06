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
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804B2014[];
extern char lbl_804B64A8[];
extern char lbl_804B650C[];
extern char lbl_8056097C[8];
extern void *lbl_805621F4;
extern void *lbl_8056544C;
void *fn_801CA670();
void *fn_801CA6AC();
void fn_801CA71C();
void fn_801CA744();
void *fn_801CA7B0();
}
struct UnknownGenObject801CA6AC_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_801CA634(){
 if(!lbl_8056544C) lbl_8056544C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8056544C;
}
void *fn_801CA670(){
 if(!lbl_8056544C || !(reinterpret_cast<unsigned int *>(lbl_8056544C)[0x24/4]&4)) fn_801CA71C();
 return lbl_8056544C;
}
void *fn_801CA6AC(){
 UnknownGenObject801CA6AC_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B650C;
 object.unknown00=lbl_804B64A8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801CA71C(){
 fn_80066188((int)fn_801CA744);
}
void fn_801CA744(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_8056544C,(int)fn_8002907C,(int)fn_80024180,(int)fn_801CA7B0,(int)lbl_804B2014,20,(int)fn_801CA6AC,0,0,(int)lbl_8056097C);
}
void *fn_801CA7B0(){return fn_801CA670();}
}
#pragma pop
