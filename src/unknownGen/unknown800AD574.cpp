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
void fn_800AD710();
void fn_800B88AC();
extern char lbl_8047813C[];
extern char lbl_8047AA0C[];
extern char lbl_8047CD74[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern void *lbl_805621F4;
extern void *lbl_805624AC;
extern void *lbl_80562934;
void *fn_800AD5B0();
void *fn_800AD5EC();
void fn_800AD650();
void fn_800AD678();
void *fn_800AD6E8();
void *fn_800AD708();
}
struct UnknownGenObject800AD5EC_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *fn_800AD574(){
 if(!lbl_805624AC) lbl_805624AC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805624AC;
}
void *fn_800AD5B0(){
 if(!lbl_805624AC || !(reinterpret_cast<unsigned int *>(lbl_805624AC)[0x24/4]&4)) fn_800AD650();
 return lbl_805624AC;
}
void *fn_800AD5EC(){
 UnknownGenObject800AD5EC_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047CD74;
 object.unknown00=lbl_8047AA0C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800AD650(){
 fn_80066188((int)fn_800AD678);
}
void fn_800AD678(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805624AC,(int)fn_800B88AC,(int)fn_800AD708,(int)fn_800AD6E8,(int)lbl_8047813C,32,(int)fn_800AD5EC,(int)fn_800AD710,0,0);
}
void *fn_800AD6E8(){return fn_800AD5B0();}
void *fn_800AD708(){return lbl_80562934;}
}
#pragma pop
