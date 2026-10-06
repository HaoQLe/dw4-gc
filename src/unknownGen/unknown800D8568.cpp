#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800CE2F8();
void fn_800D1B08();
void *fn_800D1C9C();
void fn_800D86DC();
extern char lbl_8048ED44[];
extern char lbl_804914EC[];
extern char lbl_804926E0[];
extern void *lbl_80562F40;
extern void *lbl_80563460;
void *fn_800D85A4();
void fn_800D863C();
void fn_800D8664();
void *fn_800D86D4();
}
struct UnknownGenRoot800D85A4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800D85A4(){fn_8006665C(this);}
};
struct UnknownGenObject800D85A4_0 : UnknownGenRoot800D85A4 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject800D85A4_0(){unknown00=lbl_804926E0;}
};
struct UnknownGenObject800D85A4 : UnknownGenObject800D85A4_0 {
 char unknown0C[20];
 inline ~UnknownGenObject800D85A4(){unknown00=lbl_804914EC;}
};
extern "C" {
void *fn_800D8568(){
 if(!lbl_80563460 || !(reinterpret_cast<unsigned int *>(lbl_80563460)[0x24/4]&4)) fn_800D863C();
 return lbl_80563460;
}
void *fn_800D85A4(){
 UnknownGenObject800D85A4 object;
 object.unknown00=lbl_804926E0;
 object.unknown08.value=0;
 object.unknown00=lbl_804914EC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800D863C(){
 fn_80066188((int)fn_800D8664);
}
void fn_800D8664(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_80563460,(int)fn_800D1B08,(int)fn_800D86D4,(int)fn_800D1C9C,(int)lbl_8048ED44,28,(int)fn_800D85A4,(int)fn_800D86DC,0,0);
}
void *fn_800D86D4(){return lbl_80562F40;}
}
#pragma pop
