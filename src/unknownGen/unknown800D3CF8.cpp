#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024D1C();
void *fn_80029E64(void *);
void fn_80033A14();
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800CE2F8();
void fn_800D3E80();
extern char lbl_80472FA0[];
extern char lbl_8048A0B4[];
extern char lbl_8049365C[];
extern char lbl_804936BC[];
extern void *lbl_805621F4;
extern void *lbl_80563034;
void *fn_800D3D34();
void *fn_800D3D70();
void fn_800D3DC8();
void fn_800D3DF0();
void *fn_800D3E60();
}
struct UnknownGenObject800D3D70_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800D3CF8(){
 if(!lbl_80563034) lbl_80563034=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563034;
}
void *fn_800D3D34(){
 if(!lbl_80563034 || !(reinterpret_cast<unsigned int *>(lbl_80563034)[0x24/4]&4)) fn_800D3DC8();
 return lbl_80563034;
}
void *fn_800D3D70(){
 UnknownGenObject800D3D70_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_804936BC;
 object.unknown00=lbl_8049365C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800D3DC8(){
 fn_80066188((int)fn_800D3DF0);
}
void fn_800D3DF0(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_80563034,(int)fn_80033A14,(int)fn_80024D1C,(int)fn_800D3E60,(int)lbl_8048A0B4,20,(int)fn_800D3D70,(int)fn_800D3E80,0,0);
}
void *fn_800D3E60(){return fn_800D3D34();}
}
#pragma pop
