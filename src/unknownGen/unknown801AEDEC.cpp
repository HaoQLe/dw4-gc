#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80023FDC();
void fn_80029694();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
void fn_801AA6DC();
void fn_801ADA38();
void fn_801AF3A8();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476DA8[];
extern char lbl_80476E0C[];
extern char lbl_804AC718[];
extern char lbl_804AC72C[];
extern char lbl_804AC740[];
extern char lbl_804AC74C[];
extern char lbl_804B9590[];
extern char lbl_804B95EC[];
extern char lbl_804B9650[];
extern char lbl_804B96B4[];
extern char lbl_804B9718[];
extern char lbl_804B9898[];
extern char lbl_80560204[8];
extern char lbl_8056020C[8];
extern void *lbl_805621F4;
extern void *lbl_805647A0;
extern void *lbl_8056485C;
extern void *lbl_80564860;
extern void *lbl_80564864;
void *fn_801AEE28();
void *fn_801AEE64();
void fn_801AEED4();
void fn_801AEEFC();
void *fn_801AEF68();
void *fn_801AEFC4();
void *fn_801AF000();
void fn_801AF07C();
void fn_801AF0A4();
void *fn_801AF110();
void *fn_801AF130();
void *fn_801AF1AC();
void *fn_801AF1E8();
void fn_801AF2E8();
void fn_801AF310();
void *fn_801AF388();
}
struct UnknownGenObject801AEE64_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject801AF000_0 {
 void *unknown00;
 char unknown04[36];
};
struct UnknownGenRoot801AF1E8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801AF1E8(){fn_8006665C(this);}
};
struct UnknownGenObject801AF1E8 : UnknownGenRoot801AF1E8 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 UnknownGenRefMember unknown10;
 char unknown14[8];
 UnknownGenRefMember unknown1C;
 char unknown20[8];
 inline ~UnknownGenObject801AF1E8(){unknown00=lbl_804B9590;}
};
extern "C" {
void *fn_801AEDEC(){
 if(!lbl_8056485C) lbl_8056485C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8056485C;
}
void *fn_801AEE28(){
 if(!lbl_8056485C || !(reinterpret_cast<unsigned int *>(lbl_8056485C)[0x24/4]&4)) fn_801AEED4();
 return lbl_8056485C;
}
void *fn_801AEE64(){
 UnknownGenObject801AEE64_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476DA8;
 object.unknown00=lbl_804B9718;
 object.unknown00=lbl_804B96B4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801AEED4(){
 fn_80066188((int)fn_801AEEFC);
}
void fn_801AEEFC(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_8056485C,(int)fn_80029694,(int)fn_80023FDC,(int)fn_801AEF68,(int)lbl_804AC718,20,(int)fn_801AEE64,0,0,(int)lbl_80560204);
}
void *fn_801AEF68(){return fn_801AEE28();}
void *fn_801AEF88(){
 if(!lbl_80564860) lbl_80564860=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564860;
}
void *fn_801AEFC4(){
 if(!lbl_80564860 || !(reinterpret_cast<unsigned int *>(lbl_80564860)[0x24/4]&4)) fn_801AF07C();
 return lbl_80564860;
}
void *fn_801AF000(){
 UnknownGenObject801AF000_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B9898;
 object.unknown00=lbl_804B9650;
 object.unknown00=lbl_804B95EC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801AF07C(){
 fn_80066188((int)fn_801AF0A4);
}
void fn_801AF0A4(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564860,(int)fn_801ADA38,(int)fn_801AF130,(int)fn_801AF110,(int)lbl_804AC72C,32,(int)fn_801AF000,0,0,(int)lbl_8056020C);
}
void *fn_801AF110(){return fn_801AEFC4();}
void *fn_801AF130(){return lbl_805647A0;}
void *fn_801AF138(void *object){
 fn_801AF2E8();
 return fn_8006546C(lbl_80564864,object);
}
void *fn_801AF170(){
 if(!lbl_80564864) lbl_80564864=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564864;
}
void *fn_801AF1AC(){
 if(!lbl_80564864 || !(reinterpret_cast<unsigned int *>(lbl_80564864)[0x24/4]&4)) fn_801AF2E8();
 return lbl_80564864;
}
void *fn_801AF1E8(){
 UnknownGenObject801AF1E8 object;
 object.unknown00=lbl_804B9590;
 object.unknown08.value=0;
 object.unknown10.value=0;
 object.unknown1C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801AF2E8(){
 fn_80066188((int)fn_801AF310);
}
void fn_801AF310(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564864,(int)fn_80066B08,(int)fn_800237D0,(int)fn_801AF388,(int)lbl_804AC74C,32,(int)fn_801AF1E8,(int)fn_801AF3A8,0,(int)lbl_804AC740);
}
void *fn_801AF388(){return fn_801AF1AC();}
}
#pragma pop
