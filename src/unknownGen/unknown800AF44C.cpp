#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800ABC8C();
void fn_800AC034();
void *fn_800AC294();
void fn_800AF72C();
void fn_800C3A9C();
extern char lbl_80478534[];
extern char lbl_80478548[];
extern char lbl_8047AFF4[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern void *lbl_805621F4;
extern void *lbl_80562554;
void *fn_800AF4E0();
void *fn_800AF51C();
void fn_800AF66C();
void fn_800AF694();
void *fn_800AF70C();
}
struct UnknownGenRoot800AF51C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800AF51C(){fn_8006665C(this);}
};
struct UnknownGenObject800AF51C : UnknownGenRoot800AF51C {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 char unknown10[32];
 UnknownGenRefMember unknown30;
 char unknown34[4];
 UnknownGenRefMember unknown38;
 char unknown3C[4];
 UnknownGenRefMember unknown40;
 char unknown44[4];
 inline ~UnknownGenObject800AF51C(){unknown00=lbl_8047AFF4;}
};
extern "C" {
void fn_800AF44C(){return fn_800C3A9C();}
void *fn_800AF46C(void *object){
 fn_800AF66C();
 return fn_8006546C(lbl_80562554,object);
}
void *fn_800AF4A4(){
 if(!lbl_80562554) lbl_80562554=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562554;
}
void *fn_800AF4E0(){
 if(!lbl_80562554 || !(reinterpret_cast<unsigned int *>(lbl_80562554)[0x24/4]&4)) fn_800AF66C();
 return lbl_80562554;
}
void *fn_800AF51C(){
 UnknownGenObject800AF51C object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047AFF4;
 object.unknown0C.value=0;
 object.unknown30.value=0;
 object.unknown38.value=0;
 object.unknown40.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800AF66C(){
 fn_80066188((int)fn_800AF694);
}
void fn_800AF694(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562554,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800AF70C,(int)lbl_80478548,72,(int)fn_800AF51C,(int)fn_800AF72C,0,(int)lbl_80478534);
}
void *fn_800AF70C(){return fn_800AF4E0();}
}
#pragma pop
