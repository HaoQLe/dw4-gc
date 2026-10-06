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
void fn_800BC97C();
extern char lbl_8047A260[];
extern char lbl_8047A59C[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern void *lbl_80562AD0;
void *fn_800BC830();
void *fn_800BC86C();
void fn_800BC8C4();
void fn_800BC8EC();
void *fn_800BC95C();
}
struct UnknownGenObject800BC86C_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800BC830(){
 if(!lbl_80562AD0 || !(reinterpret_cast<unsigned int *>(lbl_80562AD0)[0x24/4]&4)) fn_800BC8C4();
 return lbl_80562AD0;
}
void *fn_800BC86C(){
 UnknownGenObject800BC86C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047A59C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800BC8C4(){
 fn_80066188((int)fn_800BC8EC);
}
void fn_800BC8EC(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562AD0,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800BC95C,(int)lbl_8047A260,20,(int)fn_800BC86C,(int)fn_800BC97C,0,0);
}
void *fn_800BC95C(){return fn_800BC830();}
}
#pragma pop
