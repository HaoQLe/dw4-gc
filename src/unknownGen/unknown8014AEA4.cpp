#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8002A638();
void *fn_8006546C(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_8013496C();
void fn_80140BAC();
void fn_80145C0C();
void fn_8014B3F0();
extern char lbl_8049F10C[];
extern char lbl_8049F120[];
extern char lbl_8049F12C[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804A6C54[];
extern char lbl_804A6CC0[];
extern char lbl_804A8AD0[];
extern char lbl_804AA878[];
extern char lbl_804AAF48[];
extern char lbl_8055FB8C[8];
extern char lbl_8055FB94[4];
extern char lbl_8055FBA0[4];
extern char lbl_8055FBA4[4];
extern char lbl_8055FBA8[4];
extern void *lbl_80564004;
extern void *lbl_805642F8;
extern void *lbl_80564300;
void *fn_8014AEDC();
void *fn_8014AF18();
void fn_8014B01C();
void fn_8014B044();
void *fn_8014B0B8();
void *fn_8014B0D8();
void fn_8014B0E0();
void *fn_8014B160();
void *fn_8014B19C();
void fn_8014B330();
void fn_8014B358();
void *fn_8014B3D0();
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
struct UnknownGenRoot8014B19C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8014B19C(){fn_8006665C(this);}
};
struct UnknownGenObject8014B19C : UnknownGenRoot8014B19C {
 char unknown04[28];
 UnknownGenString unknown20;
 UnknownGenString unknown24;
 UnknownGenRefMember unknown28;
 UnknownGenRefMember unknown2C;
 UnknownGenRefMember unknown30;
 char unknown34[12];
 inline ~UnknownGenObject8014B19C(){unknown00=lbl_804A6CC0;}
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
void fn_8014B0E0(){
 void *value0=lbl_805642F8;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055FB94,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_8002A638();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 fn_800659C0(value0,lbl_8055FBA0,lbl_8055FBA4,lbl_8055FBA8,value1);
}
void *fn_8014B160(){
 if(!lbl_80564300 || !(reinterpret_cast<unsigned int *>(lbl_80564300)[0x24/4]&4)) fn_8014B330();
 return lbl_80564300;
}
void *fn_8014B19C(){
 UnknownGenObject8014B19C object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A6CC0;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown28.value=0;
 object.unknown2C.value=0;
 object.unknown30.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8014B330(){
 fn_80066188((int)fn_8014B358);
}
void fn_8014B358(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564300,(int)fn_80145C0C,(int)fn_8013496C,(int)fn_8014B3D0,(int)lbl_8049F12C,52,(int)fn_8014B19C,(int)fn_8014B3F0,0,(int)lbl_8049F120);
}
void *fn_8014B3D0(){return fn_8014B160();}
}
#pragma pop
