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
void fn_8014BDA8();
extern char lbl_8049F24C[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804A6DEC[];
extern char lbl_804AAF48[];
extern void *lbl_8056432C;
extern void *lbl_80564330;
void *fn_8014B7B0();
void *fn_8014B7EC();
void fn_8014B8DC();
void fn_8014B904();
void *fn_8014B96C();
}
struct UnknownGenRoot8014B7EC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8014B7EC(){fn_8006665C(this);}
};
struct UnknownGenObject8014B7EC_0 : UnknownGenRoot8014B7EC {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8014B7EC_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject8014B7EC : UnknownGenObject8014B7EC_0 {
 char unknown28[8];
 inline ~UnknownGenObject8014B7EC(){unknown00=lbl_804A6DEC;}
};
extern "C" {
void *fn_8014B7B0(){
 if(!lbl_8056432C || !(reinterpret_cast<unsigned int *>(lbl_8056432C)[0x24/4]&4)) fn_8014B8DC();
 return lbl_8056432C;
}
void *fn_8014B7EC(){
 UnknownGenObject8014B7EC object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A6DEC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8014B8DC(){
 fn_80066188((int)fn_8014B904);
}
void fn_8014B904(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_8056432C,(int)fn_8013B97C,(int)fn_801308D0,(int)fn_8014B96C,(int)lbl_8049F24C,40,(int)fn_8014B7EC,0,0,0);
}
void *fn_8014B96C(){return fn_8014B7B0();}
void *fn_8014B98C(){
 if(!lbl_80564330 || !(reinterpret_cast<unsigned int *>(lbl_80564330)[0x24/4]&4)) fn_8014BDA8();
 return lbl_80564330;
}
}
#pragma pop
