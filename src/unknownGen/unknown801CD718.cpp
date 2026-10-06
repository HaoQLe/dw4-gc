#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void *fn_800284EC();
void fn_8002907C();
void *fn_80029E64(void *);
void fn_8002EABC();
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_801AA6DC();
void fn_801CDBC0();
extern char lbl_80472460[];
extern char lbl_80472FA0[];
extern char lbl_8047650C[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804B2980[];
extern char lbl_804B2990[];
extern char lbl_804B29A8[];
extern char lbl_804B58AC[];
extern char lbl_804B5910[];
extern char lbl_804B5974[];
extern char lbl_80560A48[8];
extern void *lbl_805621F4;
extern void *lbl_80565580;
extern void *lbl_80565584;
void *fn_801CD754();
void *fn_801CD790();
void fn_801CD800();
void fn_801CD828();
void *fn_801CD894();
void *fn_801CD8EC();
void *fn_801CD928();
void fn_801CDB00();
void fn_801CDB28();
void *fn_801CDBA0();
}
struct UnknownGenObject801CD790_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801CD928 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801CD928(){fn_8006665C(this);}
};
struct UnknownGenObject801CD928_0 : UnknownGenRoot801CD928 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801CD928_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject801CD928_1 : UnknownGenObject801CD928_0 {
 inline ~UnknownGenObject801CD928_1(){unknown00=lbl_80472460;}
};
struct UnknownGenObject801CD928 : UnknownGenObject801CD928_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 UnknownGenRefMember unknown1C;
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 char unknown28[8];
 inline ~UnknownGenObject801CD928(){unknown00=lbl_804B58AC;}
};
extern "C" {
void *fn_801CD718(){
 if(!lbl_80565580) lbl_80565580=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80565580;
}
void *fn_801CD754(){
 if(!lbl_80565580 || !(reinterpret_cast<unsigned int *>(lbl_80565580)[0x24/4]&4)) fn_801CD800();
 return lbl_80565580;
}
void *fn_801CD790(){
 UnknownGenObject801CD790_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B5974;
 object.unknown00=lbl_804B5910;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801CD800(){
 fn_80066188((int)fn_801CD828);
}
void fn_801CD828(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80565580,(int)fn_8002907C,(int)fn_80024180,(int)fn_801CD894,(int)lbl_804B2980,20,(int)fn_801CD790,0,0,(int)lbl_80560A48);
}
void *fn_801CD894(){return fn_801CD754();}
void *fn_801CD8B4(void *object){
 fn_801CDB00();
 return fn_8006546C(lbl_80565584,object);
}
void *fn_801CD8EC(){
 if(!lbl_80565584 || !(reinterpret_cast<unsigned int *>(lbl_80565584)[0x24/4]&4)) fn_801CDB00();
 return lbl_80565584;
}
void *fn_801CD928(){
 UnknownGenObject801CD928 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80472460;
 object.unknown00=lbl_804B58AC;
 object.unknown14.value=0;
 object.unknown18.value=0;
 object.unknown1C.value=0;
 object.unknown20.value=0;
 object.unknown24.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801CDB00(){
 fn_80066188((int)fn_801CDB28);
}
void fn_801CDB28(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80565584,(int)fn_8002EABC,(int)fn_800284EC,(int)fn_801CDBA0,(int)lbl_804B29A8,40,(int)fn_801CD928,(int)fn_801CDBC0,0,(int)lbl_804B2990);
}
void *fn_801CDBA0(){return fn_801CD8EC();}
}
#pragma pop
