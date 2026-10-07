#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void fn_80037510();
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800CE2F8();
void fn_800D05CC();
void fn_800D0780();
void *fn_800D7B5C();
extern char lbl_80488A38[];
extern char lbl_80488A48[];
extern char lbl_80488A70[];
extern char lbl_80491C58[];
extern char lbl_80492510[];
extern void *lbl_80561DF8;
extern void *lbl_805621F4;
extern void *lbl_80562E10;
extern void *lbl_80562E14;
extern void *lbl_80562E1C;
extern void *lbl_80562E24;
void *fn_800D0234();
void fn_800D0270();
void fn_800D0298();
void *fn_800D02FC();
void *fn_800D031C();
void *fn_800D0360();
void fn_800D039C();
void fn_800D03C4();
void *fn_800D0430();
void *fn_800D0450();
void *fn_800D0464();
void *fn_800D0484();
void *fn_800D04C0();
void fn_800D050C();
void fn_800D0534();
void *fn_800D05A4();
void *fn_800D05C4();
}
struct UnknownGenObject800D04C0_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800D0234(){
 if(!lbl_80562E10 || !(reinterpret_cast<unsigned int *>(lbl_80562E10)[0x24/4]&4)) fn_800D0270();
 return lbl_80562E10;
}
void fn_800D0270(){
 fn_80066188((int)fn_800D0298);
}
void fn_800D0298(){
 fn_800CE2F8();
 fn_80066204(1,(int)&lbl_80562E10,(int)fn_80037510,(int)fn_800D031C,(int)fn_800D02FC,(int)lbl_80488A38,20,0,0,0,0);
}
void *fn_800D02FC(){return fn_800D0234();}
void *fn_800D031C(){return lbl_80561DF8;}
void *fn_800D0324(){
 if(!lbl_80562E14) lbl_80562E14=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562E14;
}
void *fn_800D0360(){
 if(!lbl_80562E14 || !(reinterpret_cast<unsigned int *>(lbl_80562E14)[0x24/4]&4)) fn_800D039C();
 return lbl_80562E14;
}
void fn_800D039C(){
 fn_80066188((int)fn_800D03C4);
}
void fn_800D03C4(){
 fn_800CE2F8();
 fn_80066204(1,(int)&lbl_80562E14,(int)fn_80037510,(int)fn_800D031C,(int)fn_800D0430,(int)lbl_80488A48,20,0,(int)fn_800D0450,0,0);
}
void *fn_800D0430(){return fn_800D0360();}
void *fn_800D0450(){
 void *value0=lbl_80562E14;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+60)=(void *)fn_800D0464;
 return value0;
}
void *fn_800D0464(){return fn_800D7B5C();}
void *fn_800D0484(){
 if(!lbl_80562E1C || !(reinterpret_cast<unsigned int *>(lbl_80562E1C)[0x24/4]&4)) fn_800D050C();
 return lbl_80562E1C;
}
void *fn_800D04C0(){
 UnknownGenObject800D04C0_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80491C58;
 object.unknown00=lbl_80492510;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800D050C(){
 fn_80066188((int)fn_800D0534);
}
void fn_800D0534(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_80562E1C,(int)fn_800D0780,(int)fn_800D05C4,(int)fn_800D05A4,(int)lbl_80488A70,20,(int)fn_800D04C0,(int)fn_800D05CC,0,0);
}
void *fn_800D05A4(){return fn_800D0484();}
void *fn_800D05C4(){return lbl_80562E24;}
}
#pragma pop
