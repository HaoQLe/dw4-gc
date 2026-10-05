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
void fn_800B87E0();
extern char lbl_80479904[];
extern char lbl_8047CCF4[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern void *lbl_8056292C;
void *fn_800B8694();
void *fn_800B86D0();
void fn_800B8728();
void fn_800B8750();
void *fn_800B87C0();
}
struct UnknownGenObject800B86D0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800B8694(){
 if(!lbl_8056292C || !(reinterpret_cast<unsigned int *>(lbl_8056292C)[0x24/4]&4)) fn_800B8728();
 return lbl_8056292C;
}
void *fn_800B86D0(){
 UnknownGenObject800B86D0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047CCF4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B8728(){
 fn_80066188((int)fn_800B8750);
}
void fn_800B8750(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_8056292C,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B87C0,(int)lbl_80479904,16,(int)fn_800B86D0,(int)fn_800B87E0,0,0);
}
void *fn_800B87C0(){return fn_800B8694();}
}
#pragma pop
