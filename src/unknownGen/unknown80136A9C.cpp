#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_801308D0();
void fn_80136D90();
void fn_8013B97C();
extern char lbl_8049BC80[];
extern char lbl_8049CB68[];
extern char lbl_8049CB80[];
extern char lbl_804A3D00[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char lbl_8055F67C[8];
extern char lbl_8055F684[8];
extern char lbl_8055F68C[8];
extern void *lbl_80563CE8;
extern void *lbl_80563CEC;
extern void *lbl_80563CF0;
void *fn_80136B30();
void *fn_80136B6C();
void fn_80136CD4();
void fn_80136CFC();
void *fn_80136D70();
}
struct UnknownGenRoot80136B6C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80136B6C(){fn_8006665C(this);}
};
struct UnknownGenObject80136B6C_0 : UnknownGenRoot80136B6C {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80136B6C_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject80136B6C : UnknownGenObject80136B6C_0 {
 UnknownGenRefMember unknown28;
 char unknown2C[20];
 UnknownGenString unknown40;
 char unknown44[4];
 inline ~UnknownGenObject80136B6C(){unknown00=lbl_804A3D00;}
};
extern "C" {
void *fn_80136A9C(){
 char *data=lbl_8049BC80;
 if(!lbl_80563CE8) lbl_80563CE8=fn_800635C8(data+0xEA4,data+0xE8C,data+0xE98,0x3);
 return lbl_80563CE8;
}
void *fn_80136AE8(){
 void *value0;
 if(!lbl_80563CEC){
  value0=fn_800635C8(lbl_8049CB68,lbl_8055F67C,lbl_8055F684,2);
  lbl_80563CEC=value0;
 }
 return lbl_80563CEC;
}
void *fn_80136B30(){
 if(!lbl_80563CF0 || !(reinterpret_cast<unsigned int *>(lbl_80563CF0)[0x24/4]&4)) fn_80136CD4();
 return lbl_80563CF0;
}
void *fn_80136B6C(){
 UnknownGenObject80136B6C object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A3D00;
 object.unknown28.value=0;
 object.unknown40.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80136CD4(){
 fn_80066188((int)fn_80136CFC);
}
void fn_80136CFC(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563CF0,(int)fn_8013B97C,(int)fn_801308D0,(int)fn_80136D70,(int)lbl_8049CB80,68,(int)fn_80136B6C,(int)fn_80136D90,0,(int)lbl_8055F68C);
}
void *fn_80136D70(){return fn_80136B30();}
}
#pragma pop
