#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800ABC8C();
void fn_800AC034();
void *fn_800AC294();
void fn_800B1D50();
extern char lbl_80478C88[];
extern char lbl_8047B754[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_8055E23C[8];
extern void *lbl_80562694;
void *fn_800B1BB8();
void *fn_800B1BF4();
void fn_800B1C94();
void fn_800B1CBC();
void *fn_800B1D30();
}
struct UnknownGenRoot800B1BF4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B1BF4(){fn_8006665C(this);}
};
struct UnknownGenObject800B1BF4 : UnknownGenRoot800B1BF4 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 char unknown10[16];
 inline ~UnknownGenObject800B1BF4(){unknown00=lbl_8047B754;}
};
extern "C" {
void *fn_800B1BB8(){
 if(!lbl_80562694 || !(reinterpret_cast<unsigned int *>(lbl_80562694)[0x24/4]&4)) fn_800B1C94();
 return lbl_80562694;
}
void *fn_800B1BF4(){
 UnknownGenObject800B1BF4 object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047B754;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B1C94(){
 fn_80066188((int)fn_800B1CBC);
}
void fn_800B1CBC(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562694,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B1D30,(int)lbl_80478C88,20,(int)fn_800B1BF4,(int)fn_800B1D50,0,(int)lbl_8055E23C);
}
void *fn_800B1D30(){return fn_800B1BB8();}
}
#pragma pop
