#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void fn_8002907C();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
void fn_801AA6DC();
void fn_801CA99C();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804AAFB8[];
extern char lbl_804B2014[];
extern char lbl_804B2074[];
extern char lbl_804B644C[];
extern char lbl_804B64A8[];
extern char lbl_804B650C[];
extern char lbl_8056097C[8];
extern char lbl_80560994[8];
extern void *lbl_805621F4;
extern void *lbl_8056544C;
extern void *lbl_80565450;
extern void *lbl_80565454;
void *fn_801CA670();
void *fn_801CA6AC();
void fn_801CA71C();
void fn_801CA744();
void *fn_801CA7B0();
void *fn_801CA81C();
void *fn_801CA858();
void fn_801CA8E0();
void fn_801CA908();
void *fn_801CA97C();
}
struct UnknownGenObject801CA6AC_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801CA858 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801CA858(){fn_8006665C(this);}
};
struct UnknownGenObject801CA858 : UnknownGenRoot801CA858 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 char unknown10[16];
 inline ~UnknownGenObject801CA858(){unknown00=lbl_804B644C;}
};
extern "C" {
void *fn_801CA634(){
 if(!lbl_8056544C) lbl_8056544C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8056544C;
}
void *fn_801CA670(){
 if(!lbl_8056544C || !(reinterpret_cast<unsigned int *>(lbl_8056544C)[0x24/4]&4)) fn_801CA71C();
 return lbl_8056544C;
}
void *fn_801CA6AC(){
 UnknownGenObject801CA6AC_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B650C;
 object.unknown00=lbl_804B64A8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801CA71C(){
 fn_80066188((int)fn_801CA744);
}
void fn_801CA744(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_8056544C,(int)fn_8002907C,(int)fn_80024180,(int)fn_801CA7B0,(int)lbl_804B2014,20,(int)fn_801CA6AC,0,0,(int)lbl_8056097C);
}
void *fn_801CA7B0(){return fn_801CA670();}
void *fn_801CA7D0(){
 char *data=lbl_804AAFB8;
 if(!lbl_80565450) lbl_80565450=fn_800635C8(data+0x70AC,data+0x708C,data+0x709C,0x4);
 return lbl_80565450;
}
void *fn_801CA81C(){
 if(!lbl_80565454 || !(reinterpret_cast<unsigned int *>(lbl_80565454)[0x24/4]&4)) fn_801CA8E0();
 return lbl_80565454;
}
void *fn_801CA858(){
 UnknownGenObject801CA858 object;
 object.unknown00=lbl_804B644C;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801CA8E0(){
 fn_80066188((int)fn_801CA908);
}
void fn_801CA908(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80565454,(int)fn_80066B08,(int)fn_800237D0,(int)fn_801CA97C,(int)lbl_804B2074,20,(int)fn_801CA858,(int)fn_801CA99C,0,(int)lbl_80560994);
}
void *fn_801CA97C(){return fn_801CA81C();}
}
#pragma pop
