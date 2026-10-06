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
void fn_800AC514();
extern char lbl_80477DDC[];
extern char lbl_8047A704[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_8055DEA0[8];
extern void *lbl_80562430;
void *fn_800AC37C();
void *fn_800AC3B8();
void fn_800AC458();
void fn_800AC480();
void *fn_800AC4F4();
}
struct UnknownGenRoot800AC3B8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800AC3B8(){fn_8006665C(this);}
};
struct UnknownGenObject800AC3B8 : UnknownGenRoot800AC3B8 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject800AC3B8(){unknown00=lbl_8047A704;}
};
extern "C" {
void *fn_800AC37C(){
 if(!lbl_80562430 || !(reinterpret_cast<unsigned int *>(lbl_80562430)[0x24/4]&4)) fn_800AC458();
 return lbl_80562430;
}
void *fn_800AC3B8(){
 UnknownGenObject800AC3B8 object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047A704;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800AC458(){
 fn_80066188((int)fn_800AC480);
}
void fn_800AC480(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562430,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800AC4F4,(int)lbl_80477DDC,16,(int)fn_800AC3B8,(int)fn_800AC514,0,(int)lbl_8055DEA0);
}
void *fn_800AC4F4(){return fn_800AC37C();}
}
#pragma pop
