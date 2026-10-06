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
void *fn_8013B2B0();
void *fn_8013B680();
void fn_80142038();
void fn_80145004();
void fn_80146870();
extern char lbl_8049E628[];
extern char lbl_8049E638[];
extern char lbl_8049E64C[];
extern char lbl_804A62BC[];
extern char lbl_804A6460[];
extern char lbl_804A9A0C[];
extern char lbl_804AA1C0[];
extern char lbl_804AA22C[];
extern void *lbl_805621F4;
extern void *lbl_80564130;
extern void *lbl_80564134;
void *fn_80144C38();
void *fn_80144C74();
void fn_80144CCC();
void fn_80144CF4();
void *fn_80144D5C();
void *fn_80144DB8();
void *fn_80144DF4();
void fn_80144F44();
void fn_80144F6C();
void *fn_80144FE4();
}
struct UnknownGenObject80144C74_0 {
 void *unknown00;
 char unknown04[36];
};
struct UnknownGenRoot80144DF4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80144DF4(){fn_8006665C(this);}
};
struct UnknownGenObject80144DF4 : UnknownGenRoot80144DF4 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 UnknownGenRefMember unknown28;
 UnknownGenRefMember unknown2C;
 char unknown30[8];
 inline ~UnknownGenObject80144DF4(){unknown00=lbl_804A62BC;}
};
extern "C" {
void *fn_80144BFC(){
 if(!lbl_80564130) lbl_80564130=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564130;
}
void *fn_80144C38(){
 if(!lbl_80564130 || !(reinterpret_cast<unsigned int *>(lbl_80564130)[0x24/4]&4)) fn_80144CCC();
 return lbl_80564130;
}
void *fn_80144C74(){
 UnknownGenObject80144C74_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AA22C;
 object.unknown00=lbl_804A9A0C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80144CCC(){
 fn_80066188((int)fn_80144CF4);
}
void fn_80144CF4(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564130,(int)fn_80142038,(int)fn_8013B2B0,(int)fn_80144D5C,(int)lbl_8049E628,32,(int)fn_80144C74,0,0,0);
}
void *fn_80144D5C(){return fn_80144C38();}
void *fn_80144D7C(){
 if(!lbl_80564134) lbl_80564134=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564134;
}
void *fn_80144DB8(){
 if(!lbl_80564134 || !(reinterpret_cast<unsigned int *>(lbl_80564134)[0x24/4]&4)) fn_80144F44();
 return lbl_80564134;
}
void *fn_80144DF4(){
 UnknownGenObject80144DF4 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AA1C0;
 object.unknown00=lbl_804A62BC;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown28.value=0;
 object.unknown2C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80144F44(){
 fn_80066188((int)fn_80144F6C);
}
void fn_80144F6C(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564134,(int)fn_80146870,(int)fn_8013B680,(int)fn_80144FE4,(int)lbl_8049E64C,52,(int)fn_80144DF4,(int)fn_80145004,0,(int)lbl_8049E638);
}
void *fn_80144FE4(){return fn_80144DB8();}
}
#pragma pop
