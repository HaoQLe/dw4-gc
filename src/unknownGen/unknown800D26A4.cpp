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
void fn_800D286C();
void *fn_800D8838();
void *fn_800DA384();
extern char lbl_80472FA0[];
extern char lbl_80489BA8[];
extern char lbl_80493BE8[];
extern char lbl_80493C48[];
extern void *lbl_805621F4;
extern void *lbl_80562FD0;
void *fn_800D2720();
void *fn_800D275C();
void fn_800D27B4();
void fn_800D27DC();
void *fn_800D284C();
}
struct UnknownGenObject800D275C_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800D26A4(){return fn_800D8838();}
void *fn_800D26C4(){return fn_800DA384();}
void *fn_800D26E4(){
 if(!lbl_80562FD0) lbl_80562FD0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562FD0;
}
void *fn_800D2720(){
 if(!lbl_80562FD0 || !(reinterpret_cast<unsigned int *>(lbl_80562FD0)[0x24/4]&4)) fn_800D27B4();
 return lbl_80562FD0;
}
void *fn_800D275C(){
 UnknownGenObject800D275C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80493C48;
 object.unknown00=lbl_80493BE8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800D27B4(){
 fn_80066188((int)fn_800D27DC);
}
void fn_800D27DC(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_80562FD0,(int)fn_80033A14,(int)fn_80024D1C,(int)fn_800D284C,(int)lbl_80489BA8,20,(int)fn_800D275C,(int)fn_800D286C,0,0);
}
void *fn_800D284C(){return fn_800D2720();}
}
#pragma pop
