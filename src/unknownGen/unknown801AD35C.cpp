#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void fn_80034A64();
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_801AA6DC();
void fn_801AD4F8();
extern char lbl_80472FA0[];
extern char lbl_80474EB8[];
extern char lbl_80474F18[];
extern char lbl_804ABC04[];
extern char lbl_804B98FC[];
extern void *lbl_80561D70;
extern void *lbl_805621F4;
extern void *lbl_80564754;
void *fn_801AD398();
void *fn_801AD3D4();
void fn_801AD438();
void fn_801AD460();
void *fn_801AD4D0();
void *fn_801AD4F0();
}
struct UnknownGenObject801AD3D4_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_801AD35C(){
 if(!lbl_80564754) lbl_80564754=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564754;
}
void *fn_801AD398(){
 if(!lbl_80564754 || !(reinterpret_cast<unsigned int *>(lbl_80564754)[0x24/4]&4)) fn_801AD438();
 return lbl_80564754;
}
void *fn_801AD3D4(){
 UnknownGenObject801AD3D4_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80474F18;
 object.unknown00=lbl_80474EB8;
 object.unknown00=lbl_804B98FC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801AD438(){
 fn_80066188((int)fn_801AD460);
}
void fn_801AD460(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564754,(int)fn_80034A64,(int)fn_801AD4F0,(int)fn_801AD4D0,(int)lbl_804ABC04,20,(int)fn_801AD3D4,(int)fn_801AD4F8,0,0);
}
void *fn_801AD4D0(){return fn_801AD398();}
void *fn_801AD4F0(){return lbl_80561D70;}
}
#pragma pop
