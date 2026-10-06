#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_801308D0();
void *fn_8013496C();
void fn_8013B97C();
void fn_80145C0C();
void fn_8014F3BC();
extern char lbl_8049FCA4[];
extern char lbl_8049FCB8[];
extern char lbl_8049FCD0[];
extern char lbl_804A4A04[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804A7650[];
extern char lbl_804A76D8[];
extern char lbl_804A776C[];
extern char lbl_804AAF48[];
extern char lbl_8055FC84[8];
extern void *lbl_80564488;
extern void *lbl_8056448C;
extern void *lbl_80564490;
void *fn_8014EE0C();
void *fn_8014EE48();
void fn_8014EF38();
void fn_8014EF60();
void *fn_8014EFC8();
void *fn_8014EFE8();
void *fn_8014F024();
void fn_8014F120();
void fn_8014F148();
void *fn_8014F1B0();
void *fn_8014F1D0();
void *fn_8014F1D8();
void *fn_8014F214();
void fn_8014F300();
void fn_8014F328();
void *fn_8014F39C();
}
struct UnknownGenRoot8014EE48 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8014EE48(){fn_8006665C(this);}
};
struct UnknownGenObject8014EE48_0 : UnknownGenRoot8014EE48 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8014EE48_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject8014EE48 : UnknownGenObject8014EE48_0 {
 char unknown28[8];
 inline ~UnknownGenObject8014EE48(){unknown00=lbl_804A7650;}
};
struct UnknownGenRoot8014F024 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8014F024(){fn_8006665C(this);}
};
struct UnknownGenObject8014F024_0 : UnknownGenRoot8014F024 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8014F024_0(){unknown00=lbl_804A776C;}
};
struct UnknownGenObject8014F024 : UnknownGenObject8014F024_0 {
 char unknown28[8];
 inline ~UnknownGenObject8014F024(){unknown00=lbl_804A76D8;}
};
struct UnknownGenRoot8014F214 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8014F214(){fn_8006665C(this);}
};
struct UnknownGenObject8014F214 : UnknownGenRoot8014F214 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 char unknown28[8];
 inline ~UnknownGenObject8014F214(){unknown00=lbl_804A776C;}
};
extern "C" {
void *fn_8014EE0C(){
 if(!lbl_80564488 || !(reinterpret_cast<unsigned int *>(lbl_80564488)[0x24/4]&4)) fn_8014EF38();
 return lbl_80564488;
}
void *fn_8014EE48(){
 UnknownGenObject8014EE48 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A7650;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8014EF38(){
 fn_80066188((int)fn_8014EF60);
}
void fn_8014EF60(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564488,(int)fn_8013B97C,(int)fn_801308D0,(int)fn_8014EFC8,(int)lbl_8049FCA4,40,(int)fn_8014EE48,0,0,0);
}
void *fn_8014EFC8(){return fn_8014EE0C();}
void *fn_8014EFE8(){
 if(!lbl_8056448C || !(reinterpret_cast<unsigned int *>(lbl_8056448C)[0x24/4]&4)) fn_8014F120();
 return lbl_8056448C;
}
void *fn_8014F024(){
 UnknownGenObject8014F024 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A776C;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A76D8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8014F120(){
 fn_80066188((int)fn_8014F148);
}
void fn_8014F148(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_8056448C,(int)fn_8014F328,(int)fn_8014F1D0,(int)fn_8014F1B0,(int)lbl_8049FCB8,44,(int)fn_8014F024,0,0,0);
}
void *fn_8014F1B0(){return fn_8014EFE8();}
void *fn_8014F1D0(){return lbl_80564490;}
void *fn_8014F1D8(){
 if(!lbl_80564490 || !(reinterpret_cast<unsigned int *>(lbl_80564490)[0x24/4]&4)) fn_8014F300();
 return lbl_80564490;
}
void *fn_8014F214(){
 UnknownGenObject8014F214 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A776C;
 object.unknown20.value=0;
 object.unknown24.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8014F300(){
 fn_80066188((int)fn_8014F328);
}
void fn_8014F328(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564490,(int)fn_80145C0C,(int)fn_8013496C,(int)fn_8014F39C,(int)lbl_8049FCD0,44,(int)fn_8014F214,(int)fn_8014F3BC,0,(int)lbl_8055FC84);
}
void *fn_8014F39C(){return fn_8014F1D8();}
}
#pragma pop
