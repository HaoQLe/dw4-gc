#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_801308D0();
void fn_8013B97C();
void fn_801426C4();
extern char lbl_8049E264[];
extern char lbl_804A4A04[];
extern char lbl_804A6050[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char lbl_8055F968[8];
extern void *lbl_8056407C;
void *fn_80142464();
void *fn_801424A0();
void fn_80142608();
void fn_80142630();
void *fn_801426A4();
}
struct UnknownGenRoot801424A0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801424A0(){fn_8006665C(this);}
};
struct UnknownGenObject801424A0_0 : UnknownGenRoot801424A0 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject801424A0_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject801424A0 : UnknownGenObject801424A0_0 {
 UnknownGenString unknown28;
 UnknownGenRefMember unknown2C;
 char unknown30[8];
 inline ~UnknownGenObject801424A0(){unknown00=lbl_804A6050;}
};
extern "C" {
void *fn_80142464(){
 if(!lbl_8056407C || !(reinterpret_cast<unsigned int *>(lbl_8056407C)[0x24/4]&4)) fn_80142608();
 return lbl_8056407C;
}
void *fn_801424A0(){
 UnknownGenObject801424A0 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A6050;
 object.unknown28.value=0;
 object.unknown2C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80142608(){
 fn_80066188((int)fn_80142630);
}
void fn_80142630(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_8056407C,(int)fn_8013B97C,(int)fn_801308D0,(int)fn_801426A4,(int)lbl_8049E264,48,(int)fn_801424A0,(int)fn_801426C4,0,(int)lbl_8055F968);
}
void *fn_801426A4(){return fn_80142464();}
}
#pragma pop
