#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void fn_8002907C();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
void fn_80216620();
void fn_8021917C();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804BA918[];
extern char lbl_804BA928[];
extern char lbl_804BBA9C[];
extern char lbl_804BBB00[];
extern char lbl_80560C70[8];
extern void *lbl_805621F4;
extern void *lbl_80565AEC;
extern void *lbl_80565AF0;
extern void *lbl_80565AF4;
void *fn_80218D50();
void *fn_80218D8C();
void fn_80218DFC();
void fn_80218E24();
void *fn_80218E90();
void *fn_80218EEC();
void fn_80218F28();
void fn_80218F50();
void *fn_80218FB4();
}
struct UnknownGenObject80218D8C_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_80218D14(){
 if(!lbl_80565AEC) lbl_80565AEC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80565AEC;
}
void *fn_80218D50(){
 if(!lbl_80565AEC || !(reinterpret_cast<unsigned int *>(lbl_80565AEC)[0x24/4]&4)) fn_80218DFC();
 return lbl_80565AEC;
}
void *fn_80218D8C(){
 UnknownGenObject80218D8C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804BBB00;
 object.unknown00=lbl_804BBA9C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80218DFC(){
 fn_80066188((int)fn_80218E24);
}
void fn_80218E24(){
 fn_80216620();
 fn_80066204(0,(int)&lbl_80565AEC,(int)fn_8002907C,(int)fn_80024180,(int)fn_80218E90,(int)lbl_804BA918,20,(int)fn_80218D8C,0,0,(int)lbl_80560C70);
}
void *fn_80218E90(){return fn_80218D50();}
void *fn_80218EB0(){
 if(!lbl_80565AF0) lbl_80565AF0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80565AF0;
}
void *fn_80218EEC(){
 if(!lbl_80565AF0 || !(reinterpret_cast<unsigned int *>(lbl_80565AF0)[0x24/4]&4)) fn_80218F28();
 return lbl_80565AF0;
}
void fn_80218F28(){
 fn_80066188((int)fn_80218F50);
}
void fn_80218F50(){
 fn_80216620();
 fn_80066204(1,(int)&lbl_80565AF0,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80218FB4,(int)lbl_804BA928,8,0,0,0,0);
}
void *fn_80218FB4(){return fn_80218EEC();}
void *fn_80218FD4(void *object){
 fn_8021917C();
 return fn_8006546C(lbl_80565AF4,object);
}
void *fn_8021900C(){
 if(!lbl_80565AF4) lbl_80565AF4=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80565AF4;
}
void *fn_80219048(){
 if(!lbl_80565AF4 || !(reinterpret_cast<unsigned int *>(lbl_80565AF4)[0x24/4]&4)) fn_8021917C();
 return lbl_80565AF4;
}
}
#pragma pop
