#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800ABC8C();
void fn_800B6BA8();
void fn_800B6D00();
extern char lbl_80479688[];
extern char lbl_8047C4FC[];
extern char lbl_8047C5AC[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_8055E448[8];
extern void *lbl_80562880;
extern void *lbl_80562888;
void *fn_800B68D0();
void *fn_800B690C();
void fn_800B6AE4();
void fn_800B6B0C();
void *fn_800B6B80();
void *fn_800B6BA0();
}
struct UnknownGenRoot800B690C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B690C(){fn_8006665C(this);}
};
struct UnknownGenObject800B690C_0 : UnknownGenRoot800B690C {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[12];
 UnknownGenRefMember unknown20;
 char unknown24[4];
 UnknownGenRefMember unknown28;
 UnknownGenRefMember unknown2C;
 inline ~UnknownGenObject800B690C_0(){unknown00=lbl_8047C5AC;}
};
struct UnknownGenObject800B690C : UnknownGenObject800B690C_0 {
 UnknownGenRefMember unknown30;
 char unknown34[12];
 inline ~UnknownGenObject800B690C(){unknown00=lbl_8047C4FC;}
};
extern "C" {
void *fn_800B68D0(){
 if(!lbl_80562880 || !(reinterpret_cast<unsigned int *>(lbl_80562880)[0x24/4]&4)) fn_800B6AE4();
 return lbl_80562880;
}
void *fn_800B690C(){
 UnknownGenObject800B690C object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047C5AC;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown20.value=0;
 object.unknown28.value=0;
 object.unknown2C.value=0;
 object.unknown00=lbl_8047C4FC;
 object.unknown30.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B6AE4(){
 fn_80066188((int)fn_800B6B0C);
}
void fn_800B6B0C(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562880,(int)fn_800B6D00,(int)fn_800B6BA0,(int)fn_800B6B80,(int)lbl_80479688,52,(int)fn_800B690C,(int)fn_800B6BA8,0,(int)lbl_8055E448);
}
void *fn_800B6B80(){return fn_800B68D0();}
void *fn_800B6BA0(){return lbl_80562888;}
}
#pragma pop
