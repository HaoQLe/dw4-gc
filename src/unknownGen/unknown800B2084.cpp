#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800ABC8C();
void fn_800AC034();
void *fn_800AC294();
void fn_800B220C();
extern char lbl_80478CBC[];
extern char lbl_8047B85C[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern void *lbl_805621F4;
extern void *lbl_805626A8;
void *fn_800B20C0();
void *fn_800B20FC();
void fn_800B2154();
void fn_800B217C();
void *fn_800B21EC();
}
struct UnknownGenObject800B20FC_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800B2084(){
 if(!lbl_805626A8) lbl_805626A8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805626A8;
}
void *fn_800B20C0(){
 if(!lbl_805626A8 || !(reinterpret_cast<unsigned int *>(lbl_805626A8)[0x24/4]&4)) fn_800B2154();
 return lbl_805626A8;
}
void *fn_800B20FC(){
 UnknownGenObject800B20FC_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047B85C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B2154(){
 fn_80066188((int)fn_800B217C);
}
void fn_800B217C(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805626A8,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B21EC,(int)lbl_80478CBC,16,(int)fn_800B20FC,(int)fn_800B220C,0,0);
}
void *fn_800B21EC(){return fn_800B20C0();}
}
#pragma pop
