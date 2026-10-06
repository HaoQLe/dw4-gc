#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_8012FEB0();
void *fn_801308D0();
void fn_8013A878();
void fn_8013B97C();
void fn_8014DCAC();
extern char lbl_8049F91C[];
extern char lbl_8049F938[];
extern char lbl_8049F948[];
extern char lbl_804A46AC[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804A724C[];
extern char lbl_804A72E4[];
extern char lbl_804AAF48[];
extern void *lbl_80564400;
extern void *lbl_80564404;
void *fn_8014D7E4();
void *fn_8014D820();
void fn_8014D960();
void fn_8014D988();
void *fn_8014D9F0();
void *fn_8014DA10();
void *fn_8014DA4C();
void fn_8014DBEC();
void fn_8014DC14();
void *fn_8014DC8C();
}
struct UnknownGenRoot8014D820 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8014D820(){fn_8006665C(this);}
};
struct UnknownGenObject8014D820_0 : UnknownGenRoot8014D820 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8014D820_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject8014D820_1 : UnknownGenObject8014D820_0 {
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject8014D820_1(){unknown00=lbl_804A46AC;}
};
struct UnknownGenObject8014D820 : UnknownGenObject8014D820_1 {
 char unknown2C[12];
 inline ~UnknownGenObject8014D820(){unknown00=lbl_804A724C;}
};
struct UnknownGenRoot8014DA4C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8014DA4C(){fn_8006665C(this);}
};
struct UnknownGenObject8014DA4C_0 : UnknownGenRoot8014DA4C {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8014DA4C_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject8014DA4C : UnknownGenObject8014DA4C_0 {
 UnknownGenRefMember unknown28;
 UnknownGenRefMember unknown2C;
 UnknownGenRefMember unknown30;
 char unknown34[12];
 inline ~UnknownGenObject8014DA4C(){unknown00=lbl_804A72E4;}
};
extern "C" {
void *fn_8014D7E4(){
 if(!lbl_80564400 || !(reinterpret_cast<unsigned int *>(lbl_80564400)[0x24/4]&4)) fn_8014D960();
 return lbl_80564400;
}
void *fn_8014D820(){
 UnknownGenObject8014D820 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A46AC;
 object.unknown28.value=0;
 object.unknown00=lbl_804A724C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8014D960(){
 fn_80066188((int)fn_8014D988);
}
void fn_8014D988(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564400,(int)fn_8013A878,(int)fn_8012FEB0,(int)fn_8014D9F0,(int)lbl_8049F91C,44,(int)fn_8014D820,0,0,0);
}
void *fn_8014D9F0(){return fn_8014D7E4();}
void *fn_8014DA10(){
 if(!lbl_80564404 || !(reinterpret_cast<unsigned int *>(lbl_80564404)[0x24/4]&4)) fn_8014DBEC();
 return lbl_80564404;
}
void *fn_8014DA4C(){
 UnknownGenObject8014DA4C object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A72E4;
 object.unknown28.value=0;
 object.unknown2C.value=0;
 object.unknown30.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8014DBEC(){
 fn_80066188((int)fn_8014DC14);
}
void fn_8014DC14(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564404,(int)fn_8013B97C,(int)fn_801308D0,(int)fn_8014DC8C,(int)lbl_8049F948,60,(int)fn_8014DA4C,(int)fn_8014DCAC,0,(int)lbl_8049F938);
}
void *fn_8014DC8C(){return fn_8014DA10();}
}
#pragma pop
