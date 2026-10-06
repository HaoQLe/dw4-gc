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
void fn_800B9D30();
extern char lbl_80479C94[];
extern char lbl_8047D22C[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern void *lbl_805629D0;
void *fn_800B9BE4();
void *fn_800B9C20();
void fn_800B9C78();
void fn_800B9CA0();
void *fn_800B9D10();
}
struct UnknownGenObject800B9C20_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800B9BE4(){
 if(!lbl_805629D0 || !(reinterpret_cast<unsigned int *>(lbl_805629D0)[0x24/4]&4)) fn_800B9C78();
 return lbl_805629D0;
}
void *fn_800B9C20(){
 UnknownGenObject800B9C20_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047D22C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B9C78(){
 fn_80066188((int)fn_800B9CA0);
}
void fn_800B9CA0(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805629D0,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B9D10,(int)lbl_80479C94,16,(int)fn_800B9C20,(int)fn_800B9D30,0,0);
}
void *fn_800B9D10(){return fn_800B9BE4();}
}
#pragma pop
