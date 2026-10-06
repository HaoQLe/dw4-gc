#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_8013001C();
void *fn_801301D4();
void *fn_801308D0();
void fn_8013B97C();
void fn_80140AB8();
void *fn_80140C3C();
void fn_80141C74();
void fn_80142EA8();
void fn_80147848();
extern char lbl_8049EAFC[];
extern char lbl_8049EB0C[];
extern char lbl_8049EB28[];
extern char lbl_8049EB40[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804A65D8[];
extern char lbl_804A94AC[];
extern char lbl_804AA80C[];
extern char lbl_804AA878[];
extern char lbl_804AAE58[];
extern char lbl_804AAED0[];
extern char lbl_804AAF48[];
extern void *lbl_805641E8;
extern void *lbl_805641EC;
extern void *lbl_805641F0;
extern void *lbl_805641F4;
extern void *lbl_805641F8;
void *fn_80146E7C();
void fn_80146EB8();
void fn_80146EE0();
void *fn_80146F44();
void *fn_80146F64();
void *fn_80146FA0();
void fn_80147010();
void fn_80147038();
void *fn_801470A0();
void *fn_801470C0();
void *fn_801470FC();
void fn_80147160();
void fn_80147188();
void *fn_801471F0();
void *fn_80147210();
void *fn_8014724C();
void fn_8014733C();
void fn_80147364();
void *fn_801473CC();
}
struct UnknownGenObject80146FA0_0 {
 void *unknown00;
 char unknown04[36];
};
struct UnknownGenObject801470FC_0 {
 void *unknown00;
 char unknown04[36];
};
struct UnknownGenRoot8014724C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8014724C(){fn_8006665C(this);}
};
struct UnknownGenObject8014724C_0 : UnknownGenRoot8014724C {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8014724C_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject8014724C : UnknownGenObject8014724C_0 {
 char unknown28[8];
 inline ~UnknownGenObject8014724C(){unknown00=lbl_804A65D8;}
};
extern "C" {
void *fn_80146E7C(){
 if(!lbl_805641E8 || !(reinterpret_cast<unsigned int *>(lbl_805641E8)[0x24/4]&4)) fn_80146EB8();
 return lbl_805641E8;
}
void fn_80146EB8(){
 fn_80066188((int)fn_80146EE0);
}
void fn_80146EE0(){
 fn_8012FC48();
 fn_80066204(1,(int)&lbl_805641E8,(int)fn_80142EA8,(int)fn_8013001C,(int)fn_80146F44,(int)lbl_8049EAFC,32,0,0,0,0);
}
void *fn_80146F44(){return fn_80146E7C();}
void *fn_80146F64(){
 if(!lbl_805641EC || !(reinterpret_cast<unsigned int *>(lbl_805641EC)[0x24/4]&4)) fn_80147010();
 return lbl_805641EC;
}
void *fn_80146FA0(){
 UnknownGenObject80146FA0_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804AAED0;
 object.unknown00=lbl_804AAE58;
 object.unknown00=lbl_804A94AC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80147010(){
 fn_80066188((int)fn_80147038);
}
void fn_80147038(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_805641EC,(int)fn_80140AB8,(int)fn_801301D4,(int)fn_801470A0,(int)lbl_8049EB0C,32,(int)fn_80146FA0,0,0,0);
}
void *fn_801470A0(){return fn_80146F64();}
void *fn_801470C0(){
 if(!lbl_805641F0 || !(reinterpret_cast<unsigned int *>(lbl_805641F0)[0x24/4]&4)) fn_80147160();
 return lbl_805641F0;
}
void *fn_801470FC(){
 UnknownGenObject801470FC_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804AA878;
 object.unknown00=lbl_804AA80C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80147160(){
 fn_80066188((int)fn_80147188);
}
void fn_80147188(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_805641F0,(int)fn_80141C74,(int)fn_80140C3C,(int)fn_801471F0,(int)lbl_8049EB28,32,(int)fn_801470FC,0,0,0);
}
void *fn_801471F0(){return fn_801470C0();}
void *fn_80147210(){
 if(!lbl_805641F4 || !(reinterpret_cast<unsigned int *>(lbl_805641F4)[0x24/4]&4)) fn_8014733C();
 return lbl_805641F4;
}
void *fn_8014724C(){
 UnknownGenObject8014724C object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A65D8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8014733C(){
 fn_80066188((int)fn_80147364);
}
void fn_80147364(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_805641F4,(int)fn_8013B97C,(int)fn_801308D0,(int)fn_801473CC,(int)lbl_8049EB40,40,(int)fn_8014724C,0,0,0);
}
void *fn_801473CC(){return fn_80147210();}
void *fn_801473EC(){
 if(!lbl_805641F8 || !(reinterpret_cast<unsigned int *>(lbl_805641F8)[0x24/4]&4)) fn_80147848();
 return lbl_805641F8;
}
}
#pragma pop
