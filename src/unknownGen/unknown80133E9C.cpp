#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_8012FEB0();
void fn_80134348();
void fn_8013A878();
extern char lbl_8049BC80[];
extern char lbl_8049C588[];
extern char lbl_8049C61C[];
extern char lbl_804A34EC[];
extern char lbl_804A3584[];
extern char lbl_804A46AC[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern void *lbl_80563C04;
extern void *lbl_80563C08;
extern void *lbl_80563C0C;
void *fn_80133E9C();
void *fn_80133ED8();
void fn_80134018();
void fn_80134040();
void *fn_801340A8();
void *fn_80134114();
void *fn_80134150();
void fn_80134290();
void fn_801342B8();
void *fn_80134328();
}
struct UnknownGenRoot80133ED8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80133ED8(){fn_8006665C(this);}
};
struct UnknownGenObject80133ED8_0 : UnknownGenRoot80133ED8 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80133ED8_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject80133ED8_1 : UnknownGenObject80133ED8_0 {
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject80133ED8_1(){unknown00=lbl_804A46AC;}
};
struct UnknownGenObject80133ED8 : UnknownGenObject80133ED8_1 {
 char unknown2C[12];
 inline ~UnknownGenObject80133ED8(){unknown00=lbl_804A34EC;}
};
struct UnknownGenRoot80134150 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80134150(){fn_8006665C(this);}
};
struct UnknownGenObject80134150_0 : UnknownGenRoot80134150 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80134150_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject80134150_1 : UnknownGenObject80134150_0 {
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject80134150_1(){unknown00=lbl_804A46AC;}
};
struct UnknownGenObject80134150 : UnknownGenObject80134150_1 {
 char unknown2C[44];
 inline ~UnknownGenObject80134150(){unknown00=lbl_804A3584;}
};
extern "C" {
void *fn_80133E9C(){
 if(!lbl_80563C04 || !(reinterpret_cast<unsigned int *>(lbl_80563C04)[0x24/4]&4)) fn_80134018();
 return lbl_80563C04;
}
void *fn_80133ED8(){
 UnknownGenObject80133ED8 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A46AC;
 object.unknown28.value=0;
 object.unknown00=lbl_804A34EC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80134018(){
 fn_80066188((int)fn_80134040);
}
void fn_80134040(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563C04,(int)fn_8013A878,(int)fn_8012FEB0,(int)fn_801340A8,(int)lbl_8049C588,44,(int)fn_80133ED8,0,0,0);
}
void *fn_801340A8(){return fn_80133E9C();}
void *fn_801340C8(){
 char *data=lbl_8049BC80;
 if(!lbl_80563C08) lbl_80563C08=fn_800635C8(data+0x990,data+0x950,data+0x970,0x8);
 return lbl_80563C08;
}
void *fn_80134114(){
 if(!lbl_80563C0C || !(reinterpret_cast<unsigned int *>(lbl_80563C0C)[0x24/4]&4)) fn_80134290();
 return lbl_80563C0C;
}
void *fn_80134150(){
 UnknownGenObject80134150 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A46AC;
 object.unknown28.value=0;
 object.unknown00=lbl_804A3584;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80134290(){
 fn_80066188((int)fn_801342B8);
}
void fn_801342B8(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563C0C,(int)fn_8013A878,(int)fn_8012FEB0,(int)fn_80134328,(int)lbl_8049C61C,76,(int)fn_80134150,(int)fn_80134348,0,0);
}
void *fn_80134328(){return fn_80134114();}
}
#pragma pop
