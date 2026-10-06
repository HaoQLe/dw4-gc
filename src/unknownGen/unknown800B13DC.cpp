#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800ABC8C();
void fn_800AC034();
void *fn_800AC294();
void fn_800B15B0();
extern char lbl_8047899C[];
extern char lbl_8047B650[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_8055E1D0[8];
extern void *lbl_805621F4;
extern void *lbl_80562644;
void *fn_800B1418();
void *fn_800B1454();
void fn_800B14F4();
void fn_800B151C();
void *fn_800B1590();
}
struct UnknownGenRoot800B1454 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B1454(){fn_8006665C(this);}
};
struct UnknownGenObject800B1454 : UnknownGenRoot800B1454 {
 char unknown04[12];
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject800B1454(){unknown00=lbl_8047B650;}
};
extern "C" {
void *fn_800B13DC(){
 if(!lbl_80562644) lbl_80562644=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562644;
}
void *fn_800B1418(){
 if(!lbl_80562644 || !(reinterpret_cast<unsigned int *>(lbl_80562644)[0x24/4]&4)) fn_800B14F4();
 return lbl_80562644;
}
void *fn_800B1454(){
 UnknownGenObject800B1454 object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047B650;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B14F4(){
 fn_80066188((int)fn_800B151C);
}
void fn_800B151C(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562644,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B1590,(int)lbl_8047899C,20,(int)fn_800B1454,(int)fn_800B15B0,0,(int)lbl_8055E1D0);
}
void *fn_800B1590(){return fn_800B1418();}
}
#pragma pop
