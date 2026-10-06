#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_801AA6DC();
void fn_801CC798();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804B268C[];
extern char lbl_804B5DA0[];
extern char lbl_804B5E04[];
extern char lbl_805609F0[8];
extern void *lbl_805621F4;
extern void *lbl_8056550C;
extern void *lbl_80565510;
void *fn_801CC400();
void *fn_801CC43C();
void fn_801CC4AC();
void fn_801CC4D4();
void *fn_801CC540();
}
struct UnknownGenObject801CC43C_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_801CC38C(void *object){
 fn_801CC4AC();
 return fn_8006546C(lbl_8056550C,object);
}
void *fn_801CC3C4(){
 if(!lbl_8056550C) lbl_8056550C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8056550C;
}
void *fn_801CC400(){
 if(!lbl_8056550C || !(reinterpret_cast<unsigned int *>(lbl_8056550C)[0x24/4]&4)) fn_801CC4AC();
 return lbl_8056550C;
}
void *fn_801CC43C(){
 UnknownGenObject801CC43C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B5E04;
 object.unknown00=lbl_804B5DA0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801CC4AC(){
 fn_80066188((int)fn_801CC4D4);
}
void fn_801CC4D4(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_8056550C,(int)fn_8002907C,(int)fn_80024180,(int)fn_801CC540,(int)lbl_804B268C,20,(int)fn_801CC43C,0,0,(int)lbl_805609F0);
}
void *fn_801CC540(){return fn_801CC400();}
void *fn_801CC560(void *object){
 fn_801CC798();
 return fn_8006546C(lbl_80565510,object);
}
void *fn_801CC598(){
 if(!lbl_80565510) lbl_80565510=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80565510;
}
void *fn_801CC5D4(){
 if(!lbl_80565510 || !(reinterpret_cast<unsigned int *>(lbl_80565510)[0x24/4]&4)) fn_801CC798();
 return lbl_80565510;
}
}
#pragma pop
