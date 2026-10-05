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
void fn_800B9040();
extern char lbl_80479B38[];
extern char lbl_8047CF20[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern void *lbl_80562974;
void *fn_800B8EF4();
void *fn_800B8F30();
void fn_800B8F88();
void fn_800B8FB0();
void *fn_800B9020();
}
struct UnknownGenObject800B8F30 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800B8EF4(){
 if(!lbl_80562974 || !(reinterpret_cast<unsigned int *>(lbl_80562974)[0x24/4]&4)) fn_800B8F88();
 return lbl_80562974;
}
void *fn_800B8F30(){
 UnknownGenObject800B8F30 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047CF20;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B8F88(){
 fn_80066188((int)fn_800B8FB0);
}
void fn_800B8FB0(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562974,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B9020,(int)lbl_80479B38,16,(int)fn_800B8F30,(int)fn_800B9040,0,0);
}
void *fn_800B9020(){return fn_800B8EF4();}
}
#pragma pop
