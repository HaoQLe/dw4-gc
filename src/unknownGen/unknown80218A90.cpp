#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
void fn_80216620();
void fn_80218C84();
extern char lbl_804BA8F4[];
extern char lbl_804BBB64[];
extern char lbl_80560C58[8];
extern void *lbl_805621F4;
extern void *lbl_80565AE4;
void *fn_80218B04();
void *fn_80218B40();
void fn_80218BC8();
void fn_80218BF0();
void *fn_80218C64();
}
struct UnknownGenRoot80218B40 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80218B40(){fn_8006665C(this);}
};
struct UnknownGenObject80218B40 : UnknownGenRoot80218B40 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject80218B40(){unknown00=lbl_804BBB64;}
};
extern "C" {
void *fn_80218A90(void *object){
 fn_80218BC8();
 return fn_8006546C(lbl_80565AE4,object);
}
void *fn_80218AC8(){
 if(!lbl_80565AE4) lbl_80565AE4=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80565AE4;
}
void *fn_80218B04(){
 if(!lbl_80565AE4 || !(reinterpret_cast<unsigned int *>(lbl_80565AE4)[0x24/4]&4)) fn_80218BC8();
 return lbl_80565AE4;
}
void *fn_80218B40(){
 UnknownGenObject80218B40 object;
 object.unknown00=lbl_804BBB64;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80218BC8(){
 fn_80066188((int)fn_80218BF0);
}
void fn_80218BF0(){
 fn_80216620();
 fn_80066204(0,(int)&lbl_80565AE4,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80218C64,(int)lbl_804BA8F4,12,(int)fn_80218B40,(int)fn_80218C84,0,(int)lbl_80560C58);
}
void *fn_80218C64(){return fn_80218B04();}
}
#pragma pop
