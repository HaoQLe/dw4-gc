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
void fn_800B4564();
void fn_800C17B4();
void *fn_800C1848();
extern char lbl_80479100[];
extern char lbl_8047BDE8[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern void *lbl_80562774;
void *fn_800B4418();
void *fn_800B4454();
void fn_800B44AC();
void fn_800B44D4();
void *fn_800B4544();
}
struct UnknownGenObject800B4454_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void fn_800B43D8(){return fn_800C17B4();}
void *fn_800B43F8(){return fn_800C1848();}
void *fn_800B4418(){
 if(!lbl_80562774 || !(reinterpret_cast<unsigned int *>(lbl_80562774)[0x24/4]&4)) fn_800B44AC();
 return lbl_80562774;
}
void *fn_800B4454(){
 UnknownGenObject800B4454_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047BDE8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B44AC(){
 fn_80066188((int)fn_800B44D4);
}
void fn_800B44D4(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562774,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B4544,(int)lbl_80479100,20,(int)fn_800B4454,(int)fn_800B4564,0,0);
}
void *fn_800B4544(){return fn_800B4418();}
}
#pragma pop
