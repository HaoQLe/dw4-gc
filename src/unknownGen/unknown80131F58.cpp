#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_801308D0();
void fn_80132244();
void *fn_80132324();
void fn_8013B97C();
extern char lbl_8049C00C[];
extern char lbl_8049C020[];
extern char lbl_8049C02C[];
extern char lbl_804A2F64[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char lbl_8055F544[8];
extern char lbl_8055F54C[8];
extern void *lbl_805621F4;
extern void *lbl_80563B40;
extern void *lbl_80563B44;
void *fn_80131FDC();
void *fn_80132018();
void fn_80132180();
void fn_801321A8();
void *fn_80132224();
}
struct UnknownGenRoot80132018 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80132018(){fn_8006665C(this);}
};
struct UnknownGenObject80132018_0 : UnknownGenRoot80132018 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80132018_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject80132018 : UnknownGenObject80132018_0 {
 UnknownGenRefMember unknown28;
 UnknownGenRefMember unknown2C;
 char unknown30[8];
 inline ~UnknownGenObject80132018(){unknown00=lbl_804A2F64;}
};
extern "C" {
void *fn_80131F58(){
 void *value0;
 if(!lbl_80563B40){
  value0=fn_800635C8(lbl_8049C00C,lbl_8055F544,lbl_8055F54C,2);
  lbl_80563B40=value0;
 }
 return lbl_80563B40;
}
void *fn_80131FA0(){
 if(!lbl_80563B44) lbl_80563B44=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563B44;
}
void *fn_80131FDC(){
 if(!lbl_80563B44 || !(reinterpret_cast<unsigned int *>(lbl_80563B44)[0x24/4]&4)) fn_80132180();
 return lbl_80563B44;
}
void *fn_80132018(){
 UnknownGenObject80132018 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A2F64;
 object.unknown28.value=0;
 object.unknown2C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80132180(){
 fn_80066188((int)fn_801321A8);
}
void fn_801321A8(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563B44,(int)fn_8013B97C,(int)fn_801308D0,(int)fn_80132224,(int)lbl_8049C02C,52,(int)fn_80132018,(int)fn_80132244,(int)fn_80132324,(int)lbl_8049C020);
}
void *fn_80132224(){return fn_80131FDC();}
}
#pragma pop
