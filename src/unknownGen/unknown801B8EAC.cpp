#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
void fn_801AA6DC();
void fn_801B911C();
extern char lbl_804AE564[];
extern char lbl_804AE574[];
extern char lbl_804B4158[];
extern void *lbl_805621F4;
extern void *lbl_80564C88;
void *fn_801B8EE8();
void *fn_801B8F24();
void fn_801B905C();
void fn_801B9084();
void *fn_801B90FC();
}
struct UnknownGenRoot801B8F24 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801B8F24(){fn_8006665C(this);}
};
struct UnknownGenObject801B8F24 : UnknownGenRoot801B8F24 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 char unknown18[64];
 inline ~UnknownGenObject801B8F24(){unknown00=lbl_804B4158;}
};
extern "C" {
void *fn_801B8EAC(){
 if(!lbl_80564C88) lbl_80564C88=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564C88;
}
void *fn_801B8EE8(){
 if(!lbl_80564C88 || !(reinterpret_cast<unsigned int *>(lbl_80564C88)[0x24/4]&4)) fn_801B905C();
 return lbl_80564C88;
}
void *fn_801B8F24(){
 UnknownGenObject801B8F24 object;
 object.unknown00=lbl_804B4158;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801B905C(){
 fn_80066188((int)fn_801B9084);
}
void fn_801B9084(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564C88,(int)fn_80066B08,(int)fn_800237D0,(int)fn_801B90FC,(int)lbl_804AE574,80,(int)fn_801B8F24,(int)fn_801B911C,0,(int)lbl_804AE564);
}
void *fn_801B90FC(){return fn_801B8EE8();}
}
#pragma pop
