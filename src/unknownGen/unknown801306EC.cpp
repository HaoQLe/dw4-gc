#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void fn_801308D8();
void fn_8013B97C();
extern char lbl_8049BD3C[];
extern char lbl_804A2D64[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern void *lbl_80563ACC;
extern void *lbl_80563ED0;
void *fn_801306EC();
void *fn_80130728();
void fn_80130818();
void fn_80130840();
void *fn_801308B0();
void *fn_801308D0();
}
struct UnknownGenRoot80130728 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80130728(){fn_8006665C(this);}
};
struct UnknownGenObject80130728_0 : UnknownGenRoot80130728 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80130728_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject80130728 : UnknownGenObject80130728_0 {
 char unknown28[8];
 inline ~UnknownGenObject80130728(){unknown00=lbl_804A2D64;}
};
extern "C" {
void *fn_801306EC(){
 if(!lbl_80563ACC || !(reinterpret_cast<unsigned int *>(lbl_80563ACC)[0x24/4]&4)) fn_80130818();
 return lbl_80563ACC;
}
void *fn_80130728(){
 UnknownGenObject80130728 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A2D64;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80130818(){
 fn_80066188((int)fn_80130840);
}
void fn_80130840(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563ACC,(int)fn_8013B97C,(int)fn_801308D0,(int)fn_801308B0,(int)lbl_8049BD3C,48,(int)fn_80130728,(int)fn_801308D8,0,0);
}
void *fn_801308B0(){return fn_801306EC();}
void *fn_801308D0(){return lbl_80563ED0;}
}
#pragma pop
