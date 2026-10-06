#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void fn_8002907C();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
void fn_801AA6DC();
void fn_801BFE30();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804AF510[];
extern char lbl_804AF520[];
extern char lbl_804B73D4[];
extern char lbl_804B7430[];
extern char lbl_804B7494[];
extern char lbl_80560628[8];
extern char lbl_80560630[8];
extern void *lbl_805621F4;
extern void *lbl_80564ED8;
extern void *lbl_80564EDC;
void *fn_801BFADC();
void *fn_801BFB18();
void fn_801BFB88();
void fn_801BFBB0();
void *fn_801BFC1C();
void *fn_801BFCB0();
void *fn_801BFCEC();
void fn_801BFD74();
void fn_801BFD9C();
void *fn_801BFE10();
}
struct UnknownGenObject801BFB18_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801BFCEC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801BFCEC(){fn_8006665C(this);}
};
struct UnknownGenObject801BFCEC : UnknownGenRoot801BFCEC {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[20];
 inline ~UnknownGenObject801BFCEC(){unknown00=lbl_804B73D4;}
};
extern "C" {
void *fn_801BFA68(void *object){
 fn_801BFB88();
 return fn_8006546C(lbl_80564ED8,object);
}
void *fn_801BFAA0(){
 if(!lbl_80564ED8) lbl_80564ED8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564ED8;
}
void *fn_801BFADC(){
 if(!lbl_80564ED8 || !(reinterpret_cast<unsigned int *>(lbl_80564ED8)[0x24/4]&4)) fn_801BFB88();
 return lbl_80564ED8;
}
void *fn_801BFB18(){
 UnknownGenObject801BFB18_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B7494;
 object.unknown00=lbl_804B7430;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801BFB88(){
 fn_80066188((int)fn_801BFBB0);
}
void fn_801BFBB0(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564ED8,(int)fn_8002907C,(int)fn_80024180,(int)fn_801BFC1C,(int)lbl_804AF510,20,(int)fn_801BFB18,0,0,(int)lbl_80560628);
}
void *fn_801BFC1C(){return fn_801BFADC();}
void *fn_801BFC3C(void *object){
 fn_801BFD74();
 return fn_8006546C(lbl_80564EDC,object);
}
void *fn_801BFC74(){
 if(!lbl_80564EDC) lbl_80564EDC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564EDC;
}
void *fn_801BFCB0(){
 if(!lbl_80564EDC || !(reinterpret_cast<unsigned int *>(lbl_80564EDC)[0x24/4]&4)) fn_801BFD74();
 return lbl_80564EDC;
}
void *fn_801BFCEC(){
 UnknownGenObject801BFCEC object;
 object.unknown00=lbl_804B73D4;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801BFD74(){
 fn_80066188((int)fn_801BFD9C);
}
void fn_801BFD9C(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564EDC,(int)fn_80066B08,(int)fn_800237D0,(int)fn_801BFE10,(int)lbl_804AF520,28,(int)fn_801BFCEC,(int)fn_801BFE30,0,(int)lbl_80560630);
}
void *fn_801BFE10(){return fn_801BFCB0();}
}
#pragma pop
