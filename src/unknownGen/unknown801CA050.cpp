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
void fn_801CA328();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804B1FA8[];
extern char lbl_804B65CC[];
extern char lbl_804B6630[];
extern char lbl_8056093C[8];
extern void *lbl_805621F4;
extern void *lbl_80565434;
extern void *lbl_80565438;
void *fn_801CA08C();
void *fn_801CA0C8();
void fn_801CA138();
void fn_801CA160();
void *fn_801CA1CC();
}
struct UnknownGenObject801CA0C8 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_801CA050(){
 if(!lbl_80565434) lbl_80565434=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80565434;
}
void *fn_801CA08C(){
 if(!lbl_80565434 || !(reinterpret_cast<unsigned int *>(lbl_80565434)[0x24/4]&4)) fn_801CA138();
 return lbl_80565434;
}
void *fn_801CA0C8(){
 UnknownGenObject801CA0C8 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B6630;
 object.unknown00=lbl_804B65CC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801CA138(){
 fn_80066188((int)fn_801CA160);
}
void fn_801CA160(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80565434,(int)fn_8002907C,(int)fn_80024180,(int)fn_801CA1CC,(int)lbl_804B1FA8,20,(int)fn_801CA0C8,0,0,(int)lbl_8056093C);
}
void *fn_801CA1CC(){return fn_801CA08C();}
void *fn_801CA1EC(void *object){
 fn_801CA328();
 return fn_8006546C(lbl_80565438,object);
}
void *fn_801CA224(){
 if(!lbl_80565438 || !(reinterpret_cast<unsigned int *>(lbl_80565438)[0x24/4]&4)) fn_801CA328();
 return lbl_80565438;
}
}
#pragma pop
