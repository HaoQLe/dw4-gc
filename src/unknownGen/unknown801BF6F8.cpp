#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_801AA6DC();
void fn_801B76A8();
void *fn_801BBBF0();
void fn_801BF9C8();
extern char lbl_8047650C[];
extern char lbl_804B4038[];
extern char lbl_804B49CC[];
extern char lbl_80560608[8];
extern char lbl_80560610[8];
extern void *lbl_805621F4;
extern void *lbl_80564ED0;
void *fn_801BF76C();
void *fn_801BF7A8();
void fn_801BF910();
void fn_801BF938();
void *fn_801BF9A8();
}
struct UnknownGenRoot801BF7A8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801BF7A8(){fn_8006665C(this);}
};
struct UnknownGenObject801BF7A8_0 : UnknownGenRoot801BF7A8 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801BF7A8_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject801BF7A8_1 : UnknownGenObject801BF7A8_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject801BF7A8_1(){unknown00=lbl_804B4038;}
};
struct UnknownGenObject801BF7A8 : UnknownGenObject801BF7A8_1 {
 char unknown14[8];
 UnknownGenRefMember unknown1C;
 char unknown20[8];
 inline ~UnknownGenObject801BF7A8(){unknown00=lbl_804B49CC;}
};
extern "C" {
void *fn_801BF6F8(void *object){
 fn_801BF910();
 return fn_8006546C(lbl_80564ED0,object);
}
void *fn_801BF730(){
 if(!lbl_80564ED0) lbl_80564ED0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564ED0;
}
void *fn_801BF76C(){
 if(!lbl_80564ED0 || !(reinterpret_cast<unsigned int *>(lbl_80564ED0)[0x24/4]&4)) fn_801BF910();
 return lbl_80564ED0;
}
void *fn_801BF7A8(){
 UnknownGenObject801BF7A8 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804B4038;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown00=lbl_804B49CC;
 object.unknown1C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801BF910(){
 fn_80066188((int)fn_801BF938);
}
void fn_801BF938(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564ED0,(int)fn_801B76A8,(int)fn_801BBBF0,(int)fn_801BF9A8,(int)lbl_80560610,32,(int)fn_801BF7A8,(int)fn_801BF9C8,0,(int)lbl_80560608);
}
void *fn_801BF9A8(){return fn_801BF76C();}
}
#pragma pop
