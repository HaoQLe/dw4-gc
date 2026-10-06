#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void fn_80140BAC();
void fn_8014B0E0();
extern char lbl_8049F10C[];
extern char lbl_804A6460[];
extern char lbl_804A6C54[];
extern char lbl_804A8AD0[];
extern char lbl_804AA878[];
extern char lbl_804AAF48[];
extern char lbl_8055FB8C[8];
extern void *lbl_80564004;
extern void *lbl_805642F8;
void *fn_8014AEDC();
void *fn_8014AF18();
void fn_8014B01C();
void fn_8014B044();
void *fn_8014B0B8();
void *fn_8014B0D8();
}
struct UnknownGenRoot8014AF18 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8014AF18(){fn_8006665C(this);}
};
struct UnknownGenObject8014AF18_0 : UnknownGenRoot8014AF18 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 inline ~UnknownGenObject8014AF18_0(){unknown00=lbl_804A8AD0;}
};
struct UnknownGenObject8014AF18 : UnknownGenObject8014AF18_0 {
 UnknownGenRefMember unknown24;
 char unknown28[8];
 inline ~UnknownGenObject8014AF18(){unknown00=lbl_804A6C54;}
};
extern "C" {
void *fn_8014AEA4(void *object){
 fn_8014B01C();
 return fn_8006546C(lbl_805642F8,object);
}
void *fn_8014AEDC(){
 if(!lbl_805642F8 || !(reinterpret_cast<unsigned int *>(lbl_805642F8)[0x24/4]&4)) fn_8014B01C();
 return lbl_805642F8;
}
void *fn_8014AF18(){
 UnknownGenObject8014AF18 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804AA878;
 object.unknown00=lbl_804A8AD0;
 object.unknown20.value=0;
 object.unknown00=lbl_804A6C54;
 object.unknown24.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8014B01C(){
 fn_80066188((int)fn_8014B044);
}
void fn_8014B044(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_805642F8,(int)fn_80140BAC,(int)fn_8014B0D8,(int)fn_8014B0B8,(int)lbl_8049F10C,40,(int)fn_8014AF18,(int)fn_8014B0E0,0,(int)lbl_8055FB8C);
}
void *fn_8014B0B8(){return fn_8014AEDC();}
void *fn_8014B0D8(){return lbl_80564004;}
}
#pragma pop
