#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_801308D0();
void fn_80138618();
void fn_8013B97C();
extern char lbl_8049D0D4[];
extern char lbl_8049D0E8[];
extern char lbl_804A4148[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern void *lbl_80563D94;
void *fn_8013830C();
void *fn_80138348();
void fn_80138558();
void fn_80138580();
void *fn_801385F8();
}
struct UnknownGenRoot80138348 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80138348(){fn_8006665C(this);}
};
struct UnknownGenObject80138348_0 : UnknownGenRoot80138348 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80138348_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject80138348 : UnknownGenObject80138348_0 {
 UnknownGenRefMember unknown28;
 UnknownGenString unknown2C;
 UnknownGenRefMember unknown30;
 UnknownGenRefMember unknown34;
 UnknownGenRefMember unknown38;
 char unknown3C[12];
 inline ~UnknownGenObject80138348(){unknown00=lbl_804A4148;}
};
extern "C" {
void *fn_8013830C(){
 if(!lbl_80563D94 || !(reinterpret_cast<unsigned int *>(lbl_80563D94)[0x24/4]&4)) fn_80138558();
 return lbl_80563D94;
}
void *fn_80138348(){
 UnknownGenObject80138348 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A4148;
 object.unknown28.value=0;
 object.unknown2C.value=0;
 object.unknown30.value=0;
 object.unknown34.value=0;
 object.unknown38.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80138558(){
 fn_80066188((int)fn_80138580);
}
void fn_80138580(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563D94,(int)fn_8013B97C,(int)fn_801308D0,(int)fn_801385F8,(int)lbl_8049D0E8,60,(int)fn_80138348,(int)fn_80138618,0,(int)lbl_8049D0D4);
}
void *fn_801385F8(){return fn_8013830C();}
}
#pragma pop
