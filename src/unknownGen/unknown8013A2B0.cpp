#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_801308D0();
void fn_8013A494();
void fn_8013B97C();
extern char lbl_8049D568[];
extern char lbl_804A459C[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern void *lbl_80563E28;
void *fn_8013A2B0();
void *fn_8013A2EC();
void fn_8013A3DC();
void fn_8013A404();
void *fn_8013A474();
}
struct UnknownGenRoot8013A2EC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013A2EC(){fn_8006665C(this);}
};
struct UnknownGenObject8013A2EC_0 : UnknownGenRoot8013A2EC {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8013A2EC_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject8013A2EC : UnknownGenObject8013A2EC_0 {
 char unknown28[24];
 inline ~UnknownGenObject8013A2EC(){unknown00=lbl_804A459C;}
};
extern "C" {
void *fn_8013A2B0(){
 if(!lbl_80563E28 || !(reinterpret_cast<unsigned int *>(lbl_80563E28)[0x24/4]&4)) fn_8013A3DC();
 return lbl_80563E28;
}
void *fn_8013A2EC(){
 UnknownGenObject8013A2EC object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A459C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8013A3DC(){
 fn_80066188((int)fn_8013A404);
}
void fn_8013A404(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563E28,(int)fn_8013B97C,(int)fn_801308D0,(int)fn_8013A474,(int)lbl_8049D568,64,(int)fn_8013A2EC,(int)fn_8013A494,0,0);
}
void *fn_8013A474(){return fn_8013A2B0();}
}
#pragma pop
