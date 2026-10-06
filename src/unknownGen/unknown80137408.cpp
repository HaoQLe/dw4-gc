#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_80035C70();
void fn_80035DA8();
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void fn_80137D9C();
extern char lbl_80472FA0[];
extern char lbl_804748A0[];
extern char lbl_80474900[];
extern char lbl_8049CD7C[];
extern char lbl_8049CD94[];
extern char lbl_8049CDAC[];
extern char lbl_8049CDC0[];
extern char lbl_8049CDCC[];
extern char lbl_804A3E6C[];
extern char lbl_804A3F0C[];
extern char lbl_804A3FAC[];
extern char lbl_804A404C[];
extern void *lbl_805621F4;
extern void *lbl_80563D30;
extern void *lbl_80563D34;
extern void *lbl_80563D38;
extern void *lbl_80563D3C;
void *fn_80137440();
void *fn_8013747C();
void fn_80137620();
void fn_80137648();
void *fn_801376B0();
void *fn_801376D0();
void *fn_80137710();
void *fn_8013774C();
void fn_801378F0();
void fn_80137918();
void *fn_80137980();
void *fn_801379D8();
void *fn_80137A14();
void fn_80137BB8();
void fn_80137BE0();
void *fn_80137C48();
void *fn_80137CA4();
void fn_80137CE0();
void fn_80137D08();
void *fn_80137D7C();
}
struct UnknownGenRoot8013747C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013747C(){fn_8006665C(this);}
};
struct UnknownGenObject8013747C_0 : UnknownGenRoot8013747C {
 char unknown04[56];
 UnknownGenRefMember unknown3C;
 UnknownGenRefMember unknown40;
 UnknownGenRefMember unknown44;
 UnknownGenRefMember unknown48;
 UnknownGenRefMember unknown4C;
 inline ~UnknownGenObject8013747C_0(){unknown00=lbl_804A404C;}
};
struct UnknownGenObject8013747C : UnknownGenObject8013747C_0 {
 inline ~UnknownGenObject8013747C(){unknown00=lbl_804A3E6C;}
};
struct UnknownGenRoot8013774C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013774C(){fn_8006665C(this);}
};
struct UnknownGenObject8013774C_0 : UnknownGenRoot8013774C {
 char unknown04[56];
 UnknownGenRefMember unknown3C;
 UnknownGenRefMember unknown40;
 UnknownGenRefMember unknown44;
 UnknownGenRefMember unknown48;
 UnknownGenRefMember unknown4C;
 inline ~UnknownGenObject8013774C_0(){unknown00=lbl_804A404C;}
};
struct UnknownGenObject8013774C : UnknownGenObject8013774C_0 {
 inline ~UnknownGenObject8013774C(){unknown00=lbl_804A3F0C;}
};
struct UnknownGenRoot80137A14 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80137A14(){fn_8006665C(this);}
};
struct UnknownGenObject80137A14_0 : UnknownGenRoot80137A14 {
 char unknown04[56];
 UnknownGenRefMember unknown3C;
 UnknownGenRefMember unknown40;
 UnknownGenRefMember unknown44;
 UnknownGenRefMember unknown48;
 UnknownGenRefMember unknown4C;
 inline ~UnknownGenObject80137A14_0(){unknown00=lbl_804A404C;}
};
struct UnknownGenObject80137A14 : UnknownGenObject80137A14_0 {
 inline ~UnknownGenObject80137A14(){unknown00=lbl_804A3FAC;}
};
extern "C" {
void *fn_80137408(void *object){
 fn_80137620();
 return fn_8006546C(lbl_80563D30,object);
}
void *fn_80137440(){
 if(!lbl_80563D30 || !(reinterpret_cast<unsigned int *>(lbl_80563D30)[0x24/4]&4)) fn_80137620();
 return lbl_80563D30;
}
void *fn_8013747C(){
 UnknownGenObject8013747C object;
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80474900;
 object.unknown00=lbl_804748A0;
 object.unknown00=lbl_804A404C;
 object.unknown3C.value=0;
 object.unknown40.value=0;
 object.unknown44.value=0;
 object.unknown48.value=0;
 object.unknown4C.value=0;
 object.unknown00=lbl_804A3E6C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80137620(){
 fn_80066188((int)fn_80137648);
}
void fn_80137648(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563D30,(int)fn_80137D08,(int)fn_801376D0,(int)fn_801376B0,(int)lbl_8049CD7C,80,(int)fn_8013747C,0,0,0);
}
void *fn_801376B0(){return fn_80137440();}
void *fn_801376D0(){return lbl_80563D3C;}
void *fn_801376D8(void *object){
 fn_801378F0();
 return fn_8006546C(lbl_80563D34,object);
}
void *fn_80137710(){
 if(!lbl_80563D34 || !(reinterpret_cast<unsigned int *>(lbl_80563D34)[0x24/4]&4)) fn_801378F0();
 return lbl_80563D34;
}
void *fn_8013774C(){
 UnknownGenObject8013774C object;
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80474900;
 object.unknown00=lbl_804748A0;
 object.unknown00=lbl_804A404C;
 object.unknown3C.value=0;
 object.unknown40.value=0;
 object.unknown44.value=0;
 object.unknown48.value=0;
 object.unknown4C.value=0;
 object.unknown00=lbl_804A3F0C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801378F0(){
 fn_80066188((int)fn_80137918);
}
void fn_80137918(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563D34,(int)fn_80137D08,(int)fn_801376D0,(int)fn_80137980,(int)lbl_8049CD94,80,(int)fn_8013774C,0,0,0);
}
void *fn_80137980(){return fn_80137710();}
void *fn_801379A0(void *object){
 fn_80137BB8();
 return fn_8006546C(lbl_80563D38,object);
}
void *fn_801379D8(){
 if(!lbl_80563D38 || !(reinterpret_cast<unsigned int *>(lbl_80563D38)[0x24/4]&4)) fn_80137BB8();
 return lbl_80563D38;
}
void *fn_80137A14(){
 UnknownGenObject80137A14 object;
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80474900;
 object.unknown00=lbl_804748A0;
 object.unknown00=lbl_804A404C;
 object.unknown3C.value=0;
 object.unknown40.value=0;
 object.unknown44.value=0;
 object.unknown48.value=0;
 object.unknown4C.value=0;
 object.unknown00=lbl_804A3FAC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80137BB8(){
 fn_80066188((int)fn_80137BE0);
}
void fn_80137BE0(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563D38,(int)fn_80137D08,(int)fn_801376D0,(int)fn_80137C48,(int)lbl_8049CDAC,80,(int)fn_80137A14,0,0,0);
}
void *fn_80137C48(){return fn_801379D8();}
void *fn_80137C68(){
 if(!lbl_80563D3C) lbl_80563D3C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563D3C;
}
void *fn_80137CA4(){
 if(!lbl_80563D3C || !(reinterpret_cast<unsigned int *>(lbl_80563D3C)[0x24/4]&4)) fn_80137CE0();
 return lbl_80563D3C;
}
void fn_80137CE0(){
 fn_80066188((int)fn_80137D08);
}
void fn_80137D08(){
 fn_8012FC48();
 fn_80066204(1,(int)&lbl_80563D3C,(int)fn_80035DA8,(int)fn_80035C70,(int)fn_80137D7C,(int)lbl_8049CDCC,80,0,(int)fn_80137D9C,0,(int)lbl_8049CDC0);
}
void *fn_80137D7C(){return fn_80137CA4();}
}
#pragma pop
