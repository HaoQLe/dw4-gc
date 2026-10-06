#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_801AA6DC();
void fn_801C1CCC();
void *fn_801C1D68();
void fn_801C9ABC();
extern char lbl_804AFAC8[];
extern char lbl_804B4D40[];
extern char lbl_804B559C[];
extern void *lbl_80564F94;
extern void *lbl_805653BC;
void *fn_801C1AB8();
void *fn_801C1AF4();
void fn_801C1C04();
void fn_801C1C2C();
void *fn_801C1CA4();
void *fn_801C1CC4();
}
struct UnknownGenRoot801C1AF4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801C1AF4(){fn_8006665C(this);}
};
struct UnknownGenObject801C1AF4_0 : UnknownGenRoot801C1AF4 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[12];
 UnknownGenRefMember unknown18;
 char unknown1C[92];
 UnknownGenRefMember unknown78;
 inline ~UnknownGenObject801C1AF4_0(){unknown00=lbl_804B559C;}
};
struct UnknownGenObject801C1AF4 : UnknownGenObject801C1AF4_0 {
 char unknown7C[44];
 inline ~UnknownGenObject801C1AF4(){unknown00=lbl_804B4D40;}
};
extern "C" {
void *fn_801C1AB8(){
 if(!lbl_80564F94 || !(reinterpret_cast<unsigned int *>(lbl_80564F94)[0x24/4]&4)) fn_801C1C04();
 return lbl_80564F94;
}
void *fn_801C1AF4(){
 UnknownGenObject801C1AF4 object;
 object.unknown00=lbl_804B559C;
 object.unknown08.value=0;
 object.unknown18.value=0;
 object.unknown78.value=0;
 object.unknown00=lbl_804B4D40;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801C1C04(){
 fn_80066188((int)fn_801C1C2C);
}
void fn_801C1C2C(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564F94,(int)fn_801C9ABC,(int)fn_801C1CC4,(int)fn_801C1CA4,(int)lbl_804AFAC8,168,(int)fn_801C1AF4,(int)fn_801C1CCC,(int)fn_801C1D68,0);
}
void *fn_801C1CA4(){return fn_801C1AB8();}
void *fn_801C1CC4(){return lbl_805653BC;}
}
#pragma pop
