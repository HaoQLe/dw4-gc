#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void *fn_80024180();
void fn_8002907C();
void fn_80029D58();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_801AA6DC();
void fn_801AF880();
extern char lbl_80472FA0[];
extern char lbl_8047650C[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804AC810[];
extern char lbl_804AC81C[];
extern char lbl_804B946C[];
extern char lbl_804B94C8[];
extern char lbl_804B952C[];
extern char lbl_80560214[8];
extern char lbl_8056021C[7];
extern void *lbl_805621F4;
extern void *lbl_80564880;
extern void *lbl_80564884;
void *fn_801AF4D4();
void *fn_801AF510();
void fn_801AF580();
void fn_801AF5A8();
void *fn_801AF614();
void *fn_801AF670();
void *fn_801AF6AC();
void fn_801AF7C4();
void fn_801AF7EC();
void *fn_801AF860();
}
struct UnknownGenObject801AF510_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801AF6AC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801AF6AC(){fn_8006665C(this);}
};
struct UnknownGenObject801AF6AC_0 : UnknownGenRoot801AF6AC {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801AF6AC_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject801AF6AC : UnknownGenObject801AF6AC_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[4];
 inline ~UnknownGenObject801AF6AC(){unknown00=lbl_804B946C;}
};
extern "C" {
void *fn_801AF498(){
 if(!lbl_80564880) lbl_80564880=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564880;
}
void *fn_801AF4D4(){
 if(!lbl_80564880 || !(reinterpret_cast<unsigned int *>(lbl_80564880)[0x24/4]&4)) fn_801AF580();
 return lbl_80564880;
}
void *fn_801AF510(){
 UnknownGenObject801AF510_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B952C;
 object.unknown00=lbl_804B94C8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801AF580(){
 fn_80066188((int)fn_801AF5A8);
}
void fn_801AF5A8(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564880,(int)fn_8002907C,(int)fn_80024180,(int)fn_801AF614,(int)lbl_804AC810,20,(int)fn_801AF510,0,0,(int)lbl_80560214);
}
void *fn_801AF614(){return fn_801AF4D4();}
void *fn_801AF634(){
 if(!lbl_80564884) lbl_80564884=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564884;
}
void *fn_801AF670(){
 if(!lbl_80564884 || !(reinterpret_cast<unsigned int *>(lbl_80564884)[0x24/4]&4)) fn_801AF7C4();
 return lbl_80564884;
}
void *fn_801AF6AC(){
 UnknownGenObject801AF6AC object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804B946C;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801AF7C4(){
 fn_80066188((int)fn_801AF7EC);
}
void fn_801AF7EC(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564884,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_801AF860,(int)lbl_8056021C,20,(int)fn_801AF6AC,(int)fn_801AF880,0,(int)lbl_804AC81C);
}
void *fn_801AF860(){return fn_801AF670();}
}
#pragma pop
