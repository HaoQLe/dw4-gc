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
void fn_8013B97C();
void fn_8015149C();
extern char lbl_8049BC80[];
extern char lbl_8049FFA0[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804A80E8[];
extern char lbl_804AAF48[];
extern char lbl_8055FCC0[8];
extern void *lbl_805644F0;
extern void *lbl_805644F4;
void *fn_8015123C();
void *fn_80151278();
void fn_801513E0();
void fn_80151408();
void *fn_8015147C();
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
}
#pragma pop
