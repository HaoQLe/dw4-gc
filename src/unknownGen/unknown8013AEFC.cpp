#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void fn_8013A9EC();
void fn_8013B2B8();
void *fn_8013B3D8();
void fn_80142038();
extern char lbl_8049D89C[];
extern char lbl_8049D8B0[];
extern char lbl_8049D8C4[];
extern char lbl_804A4914[];
extern char lbl_804A6460[];
extern char lbl_804AA22C[];
extern void *lbl_805621F4;
extern void *lbl_80563E5C;
extern void *lbl_80563E88;
extern void *lbl_80563E8C;
extern void *lbl_8056405C;
void *fn_8013AEFC();
void fn_8013AF38();
void fn_8013AF60();
void *fn_8013AFC4();
void *fn_8013AFE4();
void *fn_8013B028();
void *fn_8013B064();
void fn_8013B1EC();
void fn_8013B214();
void *fn_8013B290();
void *fn_8013B2B0();
}
struct UnknownGenRoot8013B064 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013B064(){fn_8006665C(this);}
};
struct UnknownGenObject8013B064 : UnknownGenRoot8013B064 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 UnknownGenRefMember unknown28;
 UnknownGenRefMember unknown2C;
 UnknownGenString unknown30;
 char unknown34[12];
 inline ~UnknownGenObject8013B064(){unknown00=lbl_804A4914;}
};
extern "C" {
void *fn_8013AEFC(){
 if(!lbl_80563E88 || !(reinterpret_cast<unsigned int *>(lbl_80563E88)[0x24/4]&4)) fn_8013AF38();
 return lbl_80563E88;
}
void fn_8013AF38(){
 fn_80066188((int)fn_8013AF60);
}
void fn_8013AF60(){
 fn_8012FC48();
 fn_80066204(1,(int)&lbl_80563E88,(int)fn_8013A9EC,(int)fn_8013AFE4,(int)fn_8013AFC4,(int)lbl_8049D89C,52,0,0,0,0);
}
void *fn_8013AFC4(){return fn_8013AEFC();}
void *fn_8013AFE4(){return lbl_80563E5C;}
void *fn_8013AFEC(){
 if(!lbl_80563E8C) lbl_80563E8C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563E8C;
}
void *fn_8013B028(){
 if(!lbl_80563E8C || !(reinterpret_cast<unsigned int *>(lbl_80563E8C)[0x24/4]&4)) fn_8013B1EC();
 return lbl_80563E8C;
}
void *fn_8013B064(){
 UnknownGenObject8013B064 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AA22C;
 object.unknown00=lbl_804A4914;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown28.value=0;
 object.unknown2C.value=0;
 object.unknown30.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8013B1EC(){
 fn_80066188((int)fn_8013B214);
}
void fn_8013B214(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563E8C,(int)fn_80142038,(int)fn_8013B2B0,(int)fn_8013B290,(int)lbl_8049D8C4,60,(int)fn_8013B064,(int)fn_8013B2B8,(int)fn_8013B3D8,(int)lbl_8049D8B0);
}
void *fn_8013B290(){return fn_8013B028();}
void *fn_8013B2B0(){return lbl_8056405C;}
}
#pragma pop
