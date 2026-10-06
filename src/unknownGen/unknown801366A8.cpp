#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_8012FEB0();
void fn_801369C8();
void fn_8013A878();
extern char lbl_8049CA28[];
extern char lbl_804A3C68[];
extern char lbl_804A46AC[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char lbl_8055F664[8];
extern void *lbl_80563CD0;
void *fn_801366A8();
void *fn_801366E4();
void fn_8013690C();
void fn_80136934();
void *fn_801369A8();
}
struct UnknownGenRoot801366E4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801366E4(){fn_8006665C(this);}
};
struct UnknownGenObject801366E4_0 : UnknownGenRoot801366E4 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject801366E4_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject801366E4_1 : UnknownGenObject801366E4_0 {
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject801366E4_1(){unknown00=lbl_804A46AC;}
};
struct UnknownGenObject801366E4 : UnknownGenObject801366E4_1 {
 char unknown2C[4];
 UnknownGenString unknown30;
 UnknownGenString unknown34;
 UnknownGenRefMember unknown38;
 UnknownGenRefMember unknown3C;
 char unknown40[8];
 inline ~UnknownGenObject801366E4(){unknown00=lbl_804A3C68;}
};
extern "C" {
void *fn_801366A8(){
 if(!lbl_80563CD0 || !(reinterpret_cast<unsigned int *>(lbl_80563CD0)[0x24/4]&4)) fn_8013690C();
 return lbl_80563CD0;
}
void *fn_801366E4(){
 UnknownGenObject801366E4 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A46AC;
 object.unknown28.value=0;
 object.unknown00=lbl_804A3C68;
 object.unknown30.value=0;
 object.unknown34.value=0;
 object.unknown38.value=0;
 object.unknown3C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8013690C(){
 fn_80066188((int)fn_80136934);
}
void fn_80136934(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563CD0,(int)fn_8013A878,(int)fn_8012FEB0,(int)fn_801369A8,(int)lbl_8049CA28,64,(int)fn_801366E4,(int)fn_801369C8,0,(int)lbl_8055F664);
}
void *fn_801369A8(){return fn_801366A8();}
}
#pragma pop
