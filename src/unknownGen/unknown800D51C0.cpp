#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800CE2F8();
void fn_800D5498();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_8048A44C[];
extern char lbl_80493168[];
extern char lbl_804931CC[];
extern char lbl_8055ECE0[8];
extern void *lbl_8056308C;
extern void *lbl_80563090;
void *fn_800D51F8();
void *fn_800D5234();
void fn_800D52A4();
void fn_800D52CC();
void *fn_800D5338();
}
struct UnknownGenObject800D5234_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800D51C0(void *object){
 fn_800D52A4();
 return fn_8006546C(lbl_8056308C,object);
}
void *fn_800D51F8(){
 if(!lbl_8056308C || !(reinterpret_cast<unsigned int *>(lbl_8056308C)[0x24/4]&4)) fn_800D52A4();
 return lbl_8056308C;
}
void *fn_800D5234(){
 UnknownGenObject800D5234_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804931CC;
 object.unknown00=lbl_80493168;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800D52A4(){
 fn_80066188((int)fn_800D52CC);
}
void fn_800D52CC(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_8056308C,(int)fn_8002907C,(int)fn_80024180,(int)fn_800D5338,(int)lbl_8048A44C,20,(int)fn_800D5234,0,0,(int)lbl_8055ECE0);
}
void *fn_800D5338(){return fn_800D51F8();}
void *fn_800D5358(void *object){
 fn_800D5498();
 return fn_8006546C(lbl_80563090,object);
}
void *fn_800D5390(){
 if(!lbl_80563090 || !(reinterpret_cast<unsigned int *>(lbl_80563090)[0x24/4]&4)) fn_800D5498();
 return lbl_80563090;
}
}
#pragma pop
