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
void fn_800ABC8C();
void fn_800B5750();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_80479280[];
extern char lbl_8047DCE0[];
extern char lbl_8047DD44[];
extern char lbl_8055E3FC[8];
extern void *lbl_805621F4;
extern void *lbl_805627DC;
extern void *lbl_805627E0;
void *fn_800B5460();
void *fn_800B549C();
void fn_800B550C();
void fn_800B5534();
void *fn_800B55A0();
}
struct UnknownGenObject800B549C_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800B53EC(void *object){
 fn_800B550C();
 return fn_8006546C(lbl_805627DC,object);
}
void *fn_800B5424(){
 if(!lbl_805627DC) lbl_805627DC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805627DC;
}
void *fn_800B5460(){
 if(!lbl_805627DC || !(reinterpret_cast<unsigned int *>(lbl_805627DC)[0x24/4]&4)) fn_800B550C();
 return lbl_805627DC;
}
void *fn_800B549C(){
 UnknownGenObject800B549C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_8047DD44;
 object.unknown00=lbl_8047DCE0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B550C(){
 fn_80066188((int)fn_800B5534);
}
void fn_800B5534(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805627DC,(int)fn_8002907C,(int)fn_80024180,(int)fn_800B55A0,(int)lbl_80479280,20,(int)fn_800B549C,0,0,(int)lbl_8055E3FC);
}
void *fn_800B55A0(){return fn_800B5460();}
void *fn_800B55C0(void *object){
 fn_800B5750();
 return fn_8006546C(lbl_805627E0,object);
}
void *fn_800B55F8(){
 if(!lbl_805627E0) lbl_805627E0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805627E0;
}
void *fn_800B5634(){
 if(!lbl_805627E0 || !(reinterpret_cast<unsigned int *>(lbl_805627E0)[0x24/4]&4)) fn_800B5750();
 return lbl_805627E0;
}
}
#pragma pop
