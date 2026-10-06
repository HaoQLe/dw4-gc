#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_8013B2B0();
void fn_80142038();
void fn_80144F44();
extern char lbl_8049E628[];
extern char lbl_804A6460[];
extern char lbl_804A9A0C[];
extern char lbl_804AA22C[];
extern void *lbl_805621F4;
extern void *lbl_80564130;
extern void *lbl_80564134;
void *fn_80144C38();
void *fn_80144C74();
void fn_80144CCC();
void fn_80144CF4();
void *fn_80144D5C();
}
struct UnknownGenObject80144C74_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *fn_80144BFC(){
 if(!lbl_80564130) lbl_80564130=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564130;
}
void *fn_80144C38(){
 if(!lbl_80564130 || !(reinterpret_cast<unsigned int *>(lbl_80564130)[0x24/4]&4)) fn_80144CCC();
 return lbl_80564130;
}
void *fn_80144C74(){
 UnknownGenObject80144C74_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AA22C;
 object.unknown00=lbl_804A9A0C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80144CCC(){
 fn_80066188((int)fn_80144CF4);
}
void fn_80144CF4(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564130,(int)fn_80142038,(int)fn_8013B2B0,(int)fn_80144D5C,(int)lbl_8049E628,32,(int)fn_80144C74,0,0,0);
}
void *fn_80144D5C(){return fn_80144C38();}
void *fn_80144D7C(){
 if(!lbl_80564134) lbl_80564134=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564134;
}
void *fn_80144DB8(){
 if(!lbl_80564134 || !(reinterpret_cast<unsigned int *>(lbl_80564134)[0x24/4]&4)) fn_80144F44();
 return lbl_80564134;
}
}
#pragma pop
