#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_801308D0();
void fn_8013A220();
void fn_8013B97C();
void fn_80142630();
extern char lbl_8049D4FC[];
extern char lbl_8049D51C[];
extern char lbl_804A448C[];
extern char lbl_804A4514[];
extern char lbl_804A4A04[];
extern char lbl_804A6050[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern void *lbl_80563E18;
extern void *lbl_80563E1C;
extern void *lbl_8056407C;
void *fn_80139DD0();
void *fn_80139E0C();
void fn_80139F84();
void fn_80139FAC();
void *fn_8013A014();
void *fn_8013A034();
void *fn_8013A03C();
void *fn_8013A078();
void fn_8013A168();
void fn_8013A190();
void *fn_8013A200();
}
struct UnknownGenRoot80139E0C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80139E0C(){fn_8006665C(this);}
};
struct UnknownGenObject80139E0C_0 : UnknownGenRoot80139E0C {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80139E0C_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject80139E0C_1 : UnknownGenObject80139E0C_0 {
 UnknownGenString unknown28;
 UnknownGenRefMember unknown2C;
 inline ~UnknownGenObject80139E0C_1(){unknown00=lbl_804A6050;}
};
struct UnknownGenObject80139E0C : UnknownGenObject80139E0C_1 {
 char unknown30[8];
 inline ~UnknownGenObject80139E0C(){unknown00=lbl_804A448C;}
};
struct UnknownGenRoot8013A078 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013A078(){fn_8006665C(this);}
};
struct UnknownGenObject8013A078_0 : UnknownGenRoot8013A078 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8013A078_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject8013A078 : UnknownGenObject8013A078_0 {
 char unknown28[8];
 inline ~UnknownGenObject8013A078(){unknown00=lbl_804A4514;}
};
extern "C" {
void *fn_80139DD0(){
 if(!lbl_80563E18 || !(reinterpret_cast<unsigned int *>(lbl_80563E18)[0x24/4]&4)) fn_80139F84();
 return lbl_80563E18;
}
void *fn_80139E0C(){
 UnknownGenObject80139E0C object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A6050;
 object.unknown28.value=0;
 object.unknown2C.value=0;
 object.unknown00=lbl_804A448C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80139F84(){
 fn_80066188((int)fn_80139FAC);
}
void fn_80139FAC(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563E18,(int)fn_80142630,(int)fn_8013A034,(int)fn_8013A014,(int)lbl_8049D4FC,48,(int)fn_80139E0C,0,0,0);
}
void *fn_8013A014(){return fn_80139DD0();}
void *fn_8013A034(){return lbl_8056407C;}
void *fn_8013A03C(){
 if(!lbl_80563E1C || !(reinterpret_cast<unsigned int *>(lbl_80563E1C)[0x24/4]&4)) fn_8013A168();
 return lbl_80563E1C;
}
void *fn_8013A078(){
 UnknownGenObject8013A078 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A4514;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8013A168(){
 fn_80066188((int)fn_8013A190);
}
void fn_8013A190(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563E1C,(int)fn_8013B97C,(int)fn_801308D0,(int)fn_8013A200,(int)lbl_8049D51C,44,(int)fn_8013A078,(int)fn_8013A220,0,0);
}
void *fn_8013A200(){return fn_8013A03C();}
}
#pragma pop
