#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800284EC();
void fn_8002EABC();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_801AA6DC();
void fn_801AB354();
void *fn_801ABB34();
void fn_801C9FC8();
extern char lbl_80472460[];
extern char lbl_8047650C[];
extern char lbl_804B1F84[];
extern char lbl_804B1F98[];
extern char lbl_804B5608[];
extern char lbl_80560924[8];
extern void *lbl_80565428;
extern void *lbl_8056542C;
void *fn_801C9CF0();
void fn_801C9D2C();
void fn_801C9D54();
void *fn_801C9DB8();
void *fn_801C9DD8();
void *fn_801C9E14();
void fn_801C9F0C();
void fn_801C9F34();
void *fn_801C9FA8();
}
struct UnknownGenRoot801C9E14 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801C9E14(){fn_8006665C(this);}
};
struct UnknownGenObject801C9E14_0 : UnknownGenRoot801C9E14 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801C9E14_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject801C9E14_1 : UnknownGenObject801C9E14_0 {
 inline ~UnknownGenObject801C9E14_1(){unknown00=lbl_80472460;}
};
struct UnknownGenObject801C9E14 : UnknownGenObject801C9E14_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 char unknown18[8];
 inline ~UnknownGenObject801C9E14(){unknown00=lbl_804B5608;}
};
extern "C" {
void *fn_801C9CF0(){
 if(!lbl_80565428 || !(reinterpret_cast<unsigned int *>(lbl_80565428)[0x24/4]&4)) fn_801C9D2C();
 return lbl_80565428;
}
void fn_801C9D2C(){
 fn_80066188((int)fn_801C9D54);
}
void fn_801C9D54(){
 fn_801AA6DC();
 fn_80066204(1,(int)&lbl_80565428,(int)fn_801AB354,(int)fn_801ABB34,(int)fn_801C9DB8,(int)lbl_804B1F84,8,0,0,0,0);
}
void *fn_801C9DB8(){return fn_801C9CF0();}
void *fn_801C9DD8(){
 if(!lbl_8056542C || !(reinterpret_cast<unsigned int *>(lbl_8056542C)[0x24/4]&4)) fn_801C9F0C();
 return lbl_8056542C;
}
void *fn_801C9E14(){
 UnknownGenObject801C9E14 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80472460;
 object.unknown00=lbl_804B5608;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801C9F0C(){
 fn_80066188((int)fn_801C9F34);
}
void fn_801C9F34(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_8056542C,(int)fn_8002EABC,(int)fn_800284EC,(int)fn_801C9FA8,(int)lbl_804B1F98,24,(int)fn_801C9E14,(int)fn_801C9FC8,0,(int)lbl_80560924);
}
void *fn_801C9FA8(){return fn_801C9DD8();}
}
#pragma pop
