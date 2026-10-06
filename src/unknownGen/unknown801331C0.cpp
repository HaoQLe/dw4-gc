#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_801308D0();
void fn_8013345C();
void fn_8013B97C();
extern char lbl_8049C3DC[];
extern char lbl_8049C3E8[];
extern char lbl_804A3238[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern void *lbl_80563BC8;
void *fn_801331C0();
void *fn_801331FC();
void fn_8013339C();
void fn_801333C4();
void *fn_8013343C();
}
struct UnknownGenRoot801331FC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801331FC(){fn_8006665C(this);}
};
struct UnknownGenObject801331FC_0 : UnknownGenRoot801331FC {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject801331FC_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject801331FC : UnknownGenObject801331FC_0 {
 UnknownGenRefMember unknown28;
 UnknownGenString unknown2C;
 UnknownGenRefMember unknown30;
 char unknown34[12];
 inline ~UnknownGenObject801331FC(){unknown00=lbl_804A3238;}
};
extern "C" {
void *fn_801331C0(){
 if(!lbl_80563BC8 || !(reinterpret_cast<unsigned int *>(lbl_80563BC8)[0x24/4]&4)) fn_8013339C();
 return lbl_80563BC8;
}
void *fn_801331FC(){
 UnknownGenObject801331FC object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A3238;
 object.unknown28.value=0;
 object.unknown2C.value=0;
 object.unknown30.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8013339C(){
 fn_80066188((int)fn_801333C4);
}
void fn_801333C4(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563BC8,(int)fn_8013B97C,(int)fn_801308D0,(int)fn_8013343C,(int)lbl_8049C3E8,52,(int)fn_801331FC,(int)fn_8013345C,0,(int)lbl_8049C3DC);
}
void *fn_8013343C(){return fn_801331C0();}
}
#pragma pop
