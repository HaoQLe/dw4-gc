#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_8012FEB0();
void fn_8012FF98();
void *fn_801308D0();
void fn_80133DF8();
void fn_8013A878();
void fn_8013B97C();
extern char lbl_8049C540[];
extern char lbl_8049C550[];
extern char lbl_8049C564[];
extern char lbl_804A2C58[];
extern char lbl_804A3358[];
extern char lbl_804A33CC[];
extern char lbl_804A3464[];
extern char lbl_804A46AC[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804AA8E4[];
extern char lbl_804AAF48[];
extern char lbl_8055F584[8];
extern void *lbl_80563AA4;
extern void *lbl_80563BF0;
extern void *lbl_80563BF4;
extern void *lbl_80563BF8;
void *fn_8013384C();
void *fn_80133888();
void fn_801338EC();
void fn_80133914();
void *fn_8013397C();
void *fn_8013399C();
void *fn_801339A4();
void *fn_801339E0();
void fn_80133B20();
void fn_80133B48();
void *fn_80133BB0();
void *fn_80133BD0();
void *fn_80133C0C();
void fn_80133D3C();
void fn_80133D64();
void *fn_80133DD8();
}
struct UnknownGenObject80133888_0 {
 void *unknown00;
 char unknown04[36];
};
struct UnknownGenRoot801339E0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801339E0(){fn_8006665C(this);}
};
struct UnknownGenObject801339E0_0 : UnknownGenRoot801339E0 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject801339E0_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject801339E0_1 : UnknownGenObject801339E0_0 {
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject801339E0_1(){unknown00=lbl_804A46AC;}
};
struct UnknownGenObject801339E0 : UnknownGenObject801339E0_1 {
 char unknown2C[12];
 inline ~UnknownGenObject801339E0(){unknown00=lbl_804A33CC;}
};
struct UnknownGenRoot80133C0C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80133C0C(){fn_8006665C(this);}
};
struct UnknownGenObject80133C0C_0 : UnknownGenRoot80133C0C {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80133C0C_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject80133C0C : UnknownGenObject80133C0C_0 {
 char unknown28[4];
 UnknownGenRefMember unknown2C;
 char unknown30[8];
 inline ~UnknownGenObject80133C0C(){unknown00=lbl_804A3464;}
};
extern "C" {
void *fn_8013384C(){
 if(!lbl_80563BF0 || !(reinterpret_cast<unsigned int *>(lbl_80563BF0)[0x24/4]&4)) fn_801338EC();
 return lbl_80563BF0;
}
void *fn_80133888(){
 UnknownGenObject80133888_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AA8E4;
 object.unknown00=lbl_804A2C58;
 object.unknown00=lbl_804A3358;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801338EC(){
 fn_80066188((int)fn_80133914);
}
void fn_80133914(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563BF0,(int)fn_8012FF98,(int)fn_8013399C,(int)fn_8013397C,(int)lbl_8049C540,32,(int)fn_80133888,0,0,0);
}
void *fn_8013397C(){return fn_8013384C();}
void *fn_8013399C(){return lbl_80563AA4;}
void *fn_801339A4(){
 if(!lbl_80563BF4 || !(reinterpret_cast<unsigned int *>(lbl_80563BF4)[0x24/4]&4)) fn_80133B20();
 return lbl_80563BF4;
}
void *fn_801339E0(){
 UnknownGenObject801339E0 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A46AC;
 object.unknown28.value=0;
 object.unknown00=lbl_804A33CC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80133B20(){
 fn_80066188((int)fn_80133B48);
}
void fn_80133B48(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563BF4,(int)fn_8013A878,(int)fn_8012FEB0,(int)fn_80133BB0,(int)lbl_8049C550,44,(int)fn_801339E0,0,0,0);
}
void *fn_80133BB0(){return fn_801339A4();}
void *fn_80133BD0(){
 if(!lbl_80563BF8 || !(reinterpret_cast<unsigned int *>(lbl_80563BF8)[0x24/4]&4)) fn_80133D3C();
 return lbl_80563BF8;
}
void *fn_80133C0C(){
 UnknownGenObject80133C0C object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A3464;
 object.unknown2C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80133D3C(){
 fn_80066188((int)fn_80133D64);
}
void fn_80133D64(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563BF8,(int)fn_8013B97C,(int)fn_801308D0,(int)fn_80133DD8,(int)lbl_8049C564,48,(int)fn_80133C0C,(int)fn_80133DF8,0,(int)lbl_8055F584);
}
void *fn_80133DD8(){return fn_80133BD0();}
}
#pragma pop
