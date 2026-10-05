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
void fn_800B4CE8();
extern char lbl_80479154[];
extern char lbl_8047C024[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern void *lbl_8056279C;
void *fn_800B4B9C();
void *fn_800B4BD8();
void fn_800B4C30();
void fn_800B4C58();
void *fn_800B4CC8();
}
struct UnknownGenObject800B4BD8 {
 void *unknown00;
 char unknown04[84];
};
extern "C" {
void *fn_800B4B9C(){
 if(!lbl_8056279C || !(reinterpret_cast<unsigned int *>(lbl_8056279C)[0x24/4]&4)) fn_800B4C30();
 return lbl_8056279C;
}
void *fn_800B4BD8(){
 UnknownGenObject800B4BD8 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047C024;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B4C30(){
 fn_80066188((int)fn_800B4C58);
}
void fn_800B4C58(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_8056279C,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B4CC8,(int)lbl_80479154,84,(int)fn_800B4BD8,(int)fn_800B4CE8,0,0);
}
void *fn_800B4CC8(){return fn_800B4B9C();}
}
#pragma pop
