#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800ABC8C();
void fn_800AC034();
void *fn_800AC294();
void fn_800B05A0();
extern char lbl_80478768[];
extern char lbl_8047B2A4[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern void *lbl_805625D4;
void *fn_800B0454();
void *fn_800B0490();
void fn_800B04E8();
void fn_800B0510();
void *fn_800B0580();
}
struct UnknownGenObject800B0490_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *fn_800B041C(void *object){
 fn_800B04E8();
 return fn_8006546C(lbl_805625D4,object);
}
void *fn_800B0454(){
 if(!lbl_805625D4 || !(reinterpret_cast<unsigned int *>(lbl_805625D4)[0x24/4]&4)) fn_800B04E8();
 return lbl_805625D4;
}
void *fn_800B0490(){
 UnknownGenObject800B0490_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047B2A4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B04E8(){
 fn_80066188((int)fn_800B0510);
}
void fn_800B0510(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805625D4,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B0580,(int)lbl_80478768,40,(int)fn_800B0490,(int)fn_800B05A0,0,0);
}
void *fn_800B0580(){return fn_800B0454();}
}
#pragma pop
