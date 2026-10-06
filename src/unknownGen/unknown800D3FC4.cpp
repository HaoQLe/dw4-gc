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
void fn_800CE2F8();
void fn_800D427C();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_8048A0CC[];
extern char lbl_80493594[];
extern char lbl_804935F8[];
extern char lbl_8055EC78[8];
extern void *lbl_805621F4;
extern void *lbl_8056303C;
extern void *lbl_80563040;
void *fn_800D4000();
void *fn_800D403C();
void fn_800D40AC();
void fn_800D40D4();
void *fn_800D4140();
}
struct UnknownGenObject800D403C_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800D3FC4(){
 if(!lbl_8056303C) lbl_8056303C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8056303C;
}
void *fn_800D4000(){
 if(!lbl_8056303C || !(reinterpret_cast<unsigned int *>(lbl_8056303C)[0x24/4]&4)) fn_800D40AC();
 return lbl_8056303C;
}
void *fn_800D403C(){
 UnknownGenObject800D403C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804935F8;
 object.unknown00=lbl_80493594;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800D40AC(){
 fn_80066188((int)fn_800D40D4);
}
void fn_800D40D4(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_8056303C,(int)fn_8002907C,(int)fn_80024180,(int)fn_800D4140,(int)lbl_8048A0CC,20,(int)fn_800D403C,0,0,(int)lbl_8055EC78);
}
void *fn_800D4140(){return fn_800D4000();}
void *fn_800D4160(){
 if(!lbl_80563040 || !(reinterpret_cast<unsigned int *>(lbl_80563040)[0x24/4]&4)) fn_800D427C();
 return lbl_80563040;
}
}
#pragma pop
