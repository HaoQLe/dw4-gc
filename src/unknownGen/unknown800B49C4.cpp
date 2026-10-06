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
void fn_800B4B10();
extern char lbl_80479140[];
extern char lbl_8047BFA4[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern void *lbl_80562794;
void *fn_800B49C4();
void *fn_800B4A00();
void fn_800B4A58();
void fn_800B4A80();
void *fn_800B4AF0();
}
struct UnknownGenObject800B4A00_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800B49C4(){
 if(!lbl_80562794 || !(reinterpret_cast<unsigned int *>(lbl_80562794)[0x24/4]&4)) fn_800B4A58();
 return lbl_80562794;
}
void *fn_800B4A00(){
 UnknownGenObject800B4A00_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047BFA4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B4A58(){
 fn_80066188((int)fn_800B4A80);
}
void fn_800B4A80(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562794,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B4AF0,(int)lbl_80479140,16,(int)fn_800B4A00,(int)fn_800B4B10,0,0);
}
void *fn_800B4AF0(){return fn_800B49C4();}
}
#pragma pop
