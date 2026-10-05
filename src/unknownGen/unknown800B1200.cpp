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
void fn_800B134C();
extern char lbl_80478984[];
extern char lbl_8047B5CC[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern void *lbl_8056263C;
void *fn_800B1200();
void *fn_800B123C();
void fn_800B1294();
void fn_800B12BC();
void *fn_800B132C();
}
struct UnknownGenObject800B123C {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *fn_800B1200(){
 if(!lbl_8056263C || !(reinterpret_cast<unsigned int *>(lbl_8056263C)[0x24/4]&4)) fn_800B1294();
 return lbl_8056263C;
}
void *fn_800B123C(){
 UnknownGenObject800B123C object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047B5CC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B1294(){
 fn_80066188((int)fn_800B12BC);
}
void fn_800B12BC(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_8056263C,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B132C,(int)lbl_80478984,28,(int)fn_800B123C,(int)fn_800B134C,0,0);
}
void *fn_800B132C(){return fn_800B1200();}
}
#pragma pop
