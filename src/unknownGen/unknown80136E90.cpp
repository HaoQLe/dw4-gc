#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_800635C8(void *,void *,void *,int);
void *fn_8006546C(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
void fn_8012FC48();
void *fn_801308D0();
void fn_80137324();
void fn_8013B97C();
extern char lbl_8049BC80[];
extern char lbl_8049CC68[];
extern char lbl_8049CCFC[];
extern char lbl_8049CD08[];
extern char lbl_804A3D88[];
extern char lbl_804A3E10[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char lbl_8055F69C[4];
extern char lbl_8055F6A0[4];
extern char lbl_8055F6A4[4];
extern char lbl_8055F6A8[4];
extern void *lbl_80563D10;
extern void *lbl_80563D18;
extern void *lbl_80563D1C;
void *fn_80136E90();
void *fn_80136ECC();
void fn_80136FBC();
void fn_80136FE4();
void *fn_80137054();
void fn_80137074();
void *fn_80137160();
void *fn_8013719C();
void fn_80137264();
void fn_8013728C();
void *fn_80137304();
}
struct UnknownGenRoot80136ECC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80136ECC(){fn_8006665C(this);}
};
struct UnknownGenObject80136ECC_0 : UnknownGenRoot80136ECC {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80136ECC_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject80136ECC : UnknownGenObject80136ECC_0 {
 char unknown28[8];
 inline ~UnknownGenObject80136ECC(){unknown00=lbl_804A3D88;}
};
struct UnknownGenRoot8013719C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013719C(){fn_8006665C(this);}
};
struct UnknownGenObject8013719C : UnknownGenRoot8013719C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 char unknown10[16];
 inline ~UnknownGenObject8013719C(){unknown00=lbl_804A3E10;}
};
extern "C" {
void *fn_80136E90(){
 if(!lbl_80563D10 || !(reinterpret_cast<unsigned int *>(lbl_80563D10)[0x24/4]&4)) fn_80136FBC();
 return lbl_80563D10;
}
void *fn_80136ECC(){
 UnknownGenObject80136ECC object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A3D88;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80136FBC(){
 fn_80066188((int)fn_80136FE4);
}
void fn_80136FE4(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563D10,(int)fn_8013B97C,(int)fn_801308D0,(int)fn_80137054,(int)lbl_8049CC68,44,(int)fn_80136ECC,(int)fn_80137074,0,0);
}
void *fn_80137054(){return fn_80136E90();}
void fn_80137074(){
 void *value0=lbl_80563D10;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055F69C,1);
 fn_800659C0(value0,lbl_8055F6A0,lbl_8055F6A4,lbl_8055F6A8,value1);
}
void *fn_801370DC(){
 char *data=lbl_8049BC80;
 if(!lbl_80563D18) lbl_80563D18=fn_800635C8(data+0x1060,data+0x1038,data+0x104C,0x5);
 return lbl_80563D18;
}
void *fn_80137128(void *object){
 fn_80137264();
 return fn_8006546C(lbl_80563D1C,object);
}
void *fn_80137160(){
 if(!lbl_80563D1C || !(reinterpret_cast<unsigned int *>(lbl_80563D1C)[0x24/4]&4)) fn_80137264();
 return lbl_80563D1C;
}
void *fn_8013719C(){
 UnknownGenObject8013719C object;
 object.unknown00=lbl_804A3E10;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80137264(){
 fn_80066188((int)fn_8013728C);
}
void fn_8013728C(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563D1C,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80137304,(int)lbl_8049CD08,24,(int)fn_8013719C,(int)fn_80137324,0,(int)lbl_8049CCFC);
}
void *fn_80137304(){return fn_80137160();}
}
#pragma pop
