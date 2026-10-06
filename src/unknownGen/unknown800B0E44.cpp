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
void fn_800B0F90();
extern char lbl_80478910[];
extern char lbl_8047B4C8[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern void *lbl_8056261C;
void *fn_800B0E44();
void *fn_800B0E80();
void fn_800B0ED8();
void fn_800B0F00();
void *fn_800B0F70();
}
struct UnknownGenObject800B0E80_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800B0E44(){
 if(!lbl_8056261C || !(reinterpret_cast<unsigned int *>(lbl_8056261C)[0x24/4]&4)) fn_800B0ED8();
 return lbl_8056261C;
}
void *fn_800B0E80(){
 UnknownGenObject800B0E80_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047B4C8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B0ED8(){
 fn_80066188((int)fn_800B0F00);
}
void fn_800B0F00(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_8056261C,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B0F70,(int)lbl_80478910,16,(int)fn_800B0E80,(int)fn_800B0F90,0,0);
}
void *fn_800B0F70(){return fn_800B0E44();}
}
#pragma pop
