#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_801AA6DC();
void fn_801B76A8();
void fn_801BBBF8();
extern char lbl_8047650C[];
extern char lbl_804AED70[];
extern char lbl_804B4038[];
extern char lbl_804B43E8[];
extern char lbl_805604CC[8];
extern void *lbl_805621F4;
extern void *lbl_80564BC0;
extern void *lbl_80564DB4;
void *fn_801BB990();
void *fn_801BB9CC();
void fn_801BBB34();
void fn_801BBB5C();
void *fn_801BBBD0();
void *fn_801BBBF0();
}
struct UnknownGenRoot801BB9CC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801BB9CC(){fn_8006665C(this);}
};
struct UnknownGenObject801BB9CC_0 : UnknownGenRoot801BB9CC {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801BB9CC_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject801BB9CC_1 : UnknownGenObject801BB9CC_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject801BB9CC_1(){unknown00=lbl_804B4038;}
};
struct UnknownGenObject801BB9CC : UnknownGenObject801BB9CC_1 {
 char unknown14[8];
 UnknownGenRefMember unknown1C;
 char unknown20[8];
 inline ~UnknownGenObject801BB9CC(){unknown00=lbl_804B43E8;}
};
extern "C" {
void *fn_801BB954(){
 if(!lbl_80564DB4) lbl_80564DB4=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564DB4;
}
void *fn_801BB990(){
 if(!lbl_80564DB4 || !(reinterpret_cast<unsigned int *>(lbl_80564DB4)[0x24/4]&4)) fn_801BBB34();
 return lbl_80564DB4;
}
void *fn_801BB9CC(){
 UnknownGenObject801BB9CC object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804B4038;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown00=lbl_804B43E8;
 object.unknown1C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801BBB34(){
 fn_80066188((int)fn_801BBB5C);
}
void fn_801BBB5C(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564DB4,(int)fn_801B76A8,(int)fn_801BBBF0,(int)fn_801BBBD0,(int)lbl_804AED70,32,(int)fn_801BB9CC,(int)fn_801BBBF8,0,(int)lbl_805604CC);
}
void *fn_801BBBD0(){return fn_801BB990();}
void *fn_801BBBF0(){return lbl_80564BC0;}
}
#pragma pop
