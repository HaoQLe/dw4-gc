#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void fn_801357C0();
void fn_801358DC();
void fn_8013AF60();
extern char lbl_8049C8B8[];
extern char lbl_8049C8CC[];
extern char lbl_804A37E4[];
extern char lbl_804A3880[];
extern char lbl_804A3918[];
extern char lbl_804A4744[];
extern char lbl_804A4878[];
extern char lbl_804A4A04[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804AA614[];
extern char lbl_804AAF48[];
extern char lbl_8055F60C[8];
extern void *lbl_80563C84;
extern void *lbl_80563C88;
extern void *lbl_80563C90;
extern void *lbl_80563E88;
void *fn_80135304();
void *fn_80135340();
void fn_801354C8();
void fn_801354F0();
void *fn_80135558();
void *fn_80135578();
void *fn_80135580();
void *fn_801355BC();
void fn_801356FC();
void fn_80135724();
void *fn_80135798();
void *fn_801357B8();
}
struct UnknownGenRoot80135340 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80135340(){fn_8006665C(this);}
};
struct UnknownGenObject80135340_0 : UnknownGenRoot80135340 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80135340_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject80135340_1 : UnknownGenObject80135340_0 {
 UnknownGenRefMember unknown28;
 UnknownGenString unknown2C;
 inline ~UnknownGenObject80135340_1(){unknown00=lbl_804A4744;}
};
struct UnknownGenObject80135340_2 : UnknownGenObject80135340_1 {
 inline ~UnknownGenObject80135340_2(){unknown00=lbl_804A4878;}
};
struct UnknownGenObject80135340 : UnknownGenObject80135340_2 {
 char unknown30[8];
 inline ~UnknownGenObject80135340(){unknown00=lbl_804A37E4;}
};
struct UnknownGenRoot801355BC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801355BC(){fn_8006665C(this);}
};
struct UnknownGenObject801355BC_0 : UnknownGenRoot801355BC {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject801355BC_0(){unknown00=lbl_804A3918;}
};
struct UnknownGenObject801355BC : UnknownGenObject801355BC_0 {
 char unknown2C[12];
 inline ~UnknownGenObject801355BC(){unknown00=lbl_804A3880;}
};
extern "C" {
void *fn_80135304(){
 if(!lbl_80563C84 || !(reinterpret_cast<unsigned int *>(lbl_80563C84)[0x24/4]&4)) fn_801354C8();
 return lbl_80563C84;
}
void *fn_80135340(){
 UnknownGenObject80135340 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A4744;
 object.unknown28.value=0;
 object.unknown2C.value=0;
 object.unknown00=lbl_804A4878;
 object.unknown00=lbl_804A37E4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801354C8(){
 fn_80066188((int)fn_801354F0);
}
void fn_801354F0(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563C84,(int)fn_8013AF60,(int)fn_80135578,(int)fn_80135558,(int)lbl_8049C8B8,52,(int)fn_80135340,0,0,0);
}
void *fn_80135558(){return fn_80135304();}
void *fn_80135578(){return lbl_80563E88;}
void *fn_80135580(){
 if(!lbl_80563C88 || !(reinterpret_cast<unsigned int *>(lbl_80563C88)[0x24/4]&4)) fn_801356FC();
 return lbl_80563C88;
}
void *fn_801355BC(){
 UnknownGenObject801355BC object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804AA614;
 object.unknown00=lbl_804A3918;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown28.value=0;
 object.unknown00=lbl_804A3880;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801356FC(){
 fn_80066188((int)fn_80135724);
}
void fn_80135724(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563C88,(int)fn_801358DC,(int)fn_801357B8,(int)fn_80135798,(int)lbl_8049C8CC,44,(int)fn_801355BC,(int)fn_801357C0,0,(int)lbl_8055F60C);
}
void *fn_80135798(){return fn_80135580();}
void *fn_801357B8(){return lbl_80563C90;}
}
#pragma pop
