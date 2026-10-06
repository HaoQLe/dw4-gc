#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800C6F28();
void fn_800C7034();
void fn_800C735C();
extern char lbl_8047E87C[];
extern char lbl_8047E88C[];
extern char lbl_8047E978[];
extern char lbl_8047EA3C[];
extern void *lbl_80562B24;
extern void *lbl_80562B40;
void *fn_800C714C();
void *fn_800C716C();
void *fn_800C71A8();
void fn_800C72B4();
void fn_800C72DC();
void *fn_800C7354();
}
struct UnknownGenRoot800C71A8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800C71A8(){fn_8006665C(this);}
};
struct UnknownGenObject800C71A8 : UnknownGenRoot800C71A8 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 char unknown18[16];
 inline ~UnknownGenObject800C71A8(){unknown00=lbl_8047E978;}
};
extern "C" {
void *fn_800C714C(){return fn_800C716C();}
void *fn_800C716C(){
 if(!lbl_80562B40 || !(reinterpret_cast<unsigned int *>(lbl_80562B40)[0x24/4]&4)) fn_800C72B4();
 return lbl_80562B40;
}
void *fn_800C71A8(){
 UnknownGenObject800C71A8 object;
 object.unknown00=lbl_8047EA3C;
 object.unknown00=lbl_8047E978;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800C72B4(){
 fn_80066188((int)fn_800C72DC);
}
void fn_800C72DC(){
 fn_800C6F28();
 fn_80066204(0,(int)&lbl_80562B40,(int)fn_800C7034,(int)fn_800C7354,(int)fn_800C714C,(int)lbl_8047E88C,40,(int)fn_800C71A8,(int)fn_800C735C,0,(int)lbl_8047E87C);
}
void *fn_800C7354(){return lbl_80562B24;}
}
#pragma pop
