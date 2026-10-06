#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_801308D0();
void fn_8013B97C();
void fn_801517A4();
extern char lbl_8049BC80[];
extern char lbl_804A001C[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804A8194[];
extern char lbl_804AAF48[];
extern void *lbl_80564500;
extern void *lbl_80564504;
void *fn_80151580();
void *fn_801515BC();
void fn_801516EC();
void fn_80151714();
void *fn_80151784();
}
struct UnknownGenRoot801515BC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801515BC(){fn_8006665C(this);}
};
struct UnknownGenObject801515BC_0 : UnknownGenRoot801515BC {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject801515BC_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject801515BC : UnknownGenObject801515BC_0 {
 char unknown28[16];
 UnknownGenString unknown38;
 char unknown3C[12];
 inline ~UnknownGenObject801515BC(){unknown00=lbl_804A8194;}
};
extern "C" {
void *fn_80151534(){
 char *data=lbl_8049BC80;
 if(!lbl_80564500) lbl_80564500=fn_800635C8(data+0x4388,data+0x4370,data+0x437C,0x3);
 return lbl_80564500;
}
void *fn_80151580(){
 if(!lbl_80564504 || !(reinterpret_cast<unsigned int *>(lbl_80564504)[0x24/4]&4)) fn_801516EC();
 return lbl_80564504;
}
void *fn_801515BC(){
 UnknownGenObject801515BC object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A8194;
 object.unknown38.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801516EC(){
 fn_80066188((int)fn_80151714);
}
void fn_80151714(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564504,(int)fn_8013B97C,(int)fn_801308D0,(int)fn_80151784,(int)lbl_804A001C,60,(int)fn_801515BC,(int)fn_801517A4,0,0);
}
void *fn_80151784(){return fn_80151580();}
}
#pragma pop
