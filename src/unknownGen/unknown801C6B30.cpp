#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
void fn_801AA6DC();
void fn_801C6DD8();
extern char lbl_804B1294[];
extern char lbl_804B12A8[];
extern char lbl_804B6EB0[];
extern void *lbl_805621F4;
extern void *lbl_80565298;
void *fn_801C6BA4();
void *fn_801C6BE0();
void fn_801C6D18();
void fn_801C6D40();
void *fn_801C6DB8();
}
struct UnknownGenRoot801C6BE0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801C6BE0(){fn_8006665C(this);}
};
struct UnknownGenObject801C6BE0 : UnknownGenRoot801C6BE0 {
 char unknown04[16];
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 char unknown1C[4];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject801C6BE0(){unknown00=lbl_804B6EB0;}
};
extern "C" {
void *fn_801C6B30(void *object){
 fn_801C6D18();
 return fn_8006546C(lbl_80565298,object);
}
void *fn_801C6B68(){
 if(!lbl_80565298) lbl_80565298=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80565298;
}
void *fn_801C6BA4(){
 if(!lbl_80565298 || !(reinterpret_cast<unsigned int *>(lbl_80565298)[0x24/4]&4)) fn_801C6D18();
 return lbl_80565298;
}
void *fn_801C6BE0(){
 UnknownGenObject801C6BE0 object;
 object.unknown00=lbl_804B6EB0;
 object.unknown14.value=0;
 object.unknown18.value=0;
 object.unknown20.value=0;
 object.unknown24.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801C6D18(){
 fn_80066188((int)fn_801C6D40);
}
void fn_801C6D40(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80565298,(int)fn_80066B08,(int)fn_800237D0,(int)fn_801C6DB8,(int)lbl_804B12A8,40,(int)fn_801C6BE0,(int)fn_801C6DD8,0,(int)lbl_804B1294);
}
void *fn_801C6DB8(){return fn_801C6BA4();}
}
#pragma pop
