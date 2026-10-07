#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029F84();
void *fn_800635C8(void *,void *,void *,int);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void *fn_80071694(void *,void *);
void fn_8012FC48();
void *fn_801308D0();
void fn_8013B97C();
void fn_801517A4();
extern char lbl_8049BC80[];
extern char lbl_8049C458[];
extern char lbl_8049FFA0[];
extern char lbl_804A001C[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804A80E8[];
extern char lbl_804A8194[];
extern char lbl_804AAF48[];
extern char lbl_8055FCC0[8];
extern char lbl_8055FCC8[8];
extern char lbl_8055FCD0[8];
extern char lbl_8055FCD8[8];
extern char lbl_8055FCE0[8];
extern void *lbl_805644F0;
extern void *lbl_805644F4;
extern void *lbl_80564500;
extern void *lbl_80564504;
void *fn_8015123C();
void *fn_80151278();
void fn_801513E0();
void fn_80151408();
void *fn_8015147C();
void fn_8015149C();
void *fn_80151580();
void *fn_801515BC();
void fn_801516EC();
void fn_80151714();
void *fn_80151784();
}
struct UnknownGenRoot80151278 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80151278(){fn_8006665C(this);}
};
struct UnknownGenObject80151278_0 : UnknownGenRoot80151278 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80151278_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject80151278 : UnknownGenObject80151278_0 {
 UnknownGenString unknown28;
 UnknownGenRefMember unknown2C;
 char unknown30[8];
 inline ~UnknownGenObject80151278(){unknown00=lbl_804A80E8;}
};
struct UnknownGenRoot801515BC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801515BC(){fn_8006665C(this);}
};
struct UnknownGenObject801515BC_0 : UnknownGenRoot801515BC {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject801515BC_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject801515BC : UnknownGenObject801515BC_0 {
 char unknown28[16];
 UnknownGenString unknown38;
 char unknown3C[12];
 inline ~UnknownGenObject801515BC(){unknown00=lbl_804A8194;}
};
extern "C" {
void *fn_801511F0(){
 char *data=lbl_8049BC80;
 if(!lbl_805644F0) lbl_805644F0=fn_800635C8(data+0x430C,data+0x42EC,data+0x42FC,0x4);
 return lbl_805644F0;
}
void *fn_8015123C(){
 if(!lbl_805644F4 || !(reinterpret_cast<unsigned int *>(lbl_805644F4)[0x24/4]&4)) fn_801513E0();
 return lbl_805644F4;
}
void *fn_80151278(){
 UnknownGenObject80151278 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A80E8;
 object.unknown28.value=0;
 object.unknown2C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801513E0(){
 fn_80066188((int)fn_80151408);
}
void fn_80151408(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_805644F4,(int)fn_8013B97C,(int)fn_801308D0,(int)fn_8015147C,(int)lbl_8049FFA0,48,(int)fn_80151278,(int)fn_8015149C,0,(int)lbl_8055FCC0);
}
void *fn_8015147C(){return fn_8015123C();}
void fn_8015149C(){
 void *value0=lbl_805644F4;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055FCC8,2);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_80029F84();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 fn_80071694(value4,lbl_8049C458);
 fn_800659C0(value0,lbl_8055FCD0,lbl_8055FCD8,lbl_8055FCE0,value1);
}
void *fn_80151534(){
 char *data=lbl_8049BC80;
 if(!lbl_80564500) lbl_80564500=fn_800635C8(data+0x4388,data+0x4370,data+0x437C,0x3);
 return lbl_80564500;
}
void *fn_80151580(){
 if(!lbl_80564504 || !(reinterpret_cast<unsigned int *>(lbl_80564504)[0x24/4]&4)) fn_801516EC();
 return lbl_80564504;
}
void *fn_801515BC(){
 UnknownGenObject801515BC object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A8194;
 object.unknown38.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801516EC(){
 fn_80066188((int)fn_80151714);
}
void fn_80151714(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564504,(int)fn_8013B97C,(int)fn_801308D0,(int)fn_80151784,(int)lbl_804A001C,60,(int)fn_801515BC,(int)fn_801517A4,0,0);
}
void *fn_80151784(){return fn_80151580();}
}
#pragma pop
