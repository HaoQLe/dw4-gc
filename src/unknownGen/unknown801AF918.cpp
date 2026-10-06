#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_801AA6DC();
void fn_801AFCAC();
void fn_801CA518();
extern char lbl_80472FA0[];
extern char lbl_8047650C[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804AC838[];
extern char lbl_804AC848[];
extern char lbl_804B3810[];
extern char lbl_804B9324[];
extern char lbl_804B93A4[];
extern char lbl_804B9408[];
extern char lbl_8056024C[8];
extern char lbl_80560254[8];
extern void *lbl_805621F4;
extern void *lbl_80564890;
extern void *lbl_80564894;
extern void *lbl_80565444;
void *fn_801AF954();
void *fn_801AF990();
void fn_801AFA00();
void fn_801AFA28();
void *fn_801AFA94();
void *fn_801AFAB4();
void *fn_801AFAF0();
void fn_801AFBE8();
void fn_801AFC10();
void *fn_801AFC84();
void *fn_801AFCA4();
}
struct UnknownGenObject801AF990_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801AFAF0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801AFAF0(){fn_8006665C(this);}
};
struct UnknownGenObject801AFAF0_0 : UnknownGenRoot801AFAF0 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801AFAF0_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject801AFAF0_1 : UnknownGenObject801AFAF0_0 {
 inline ~UnknownGenObject801AFAF0_1(){unknown00=lbl_804B9324;}
};
struct UnknownGenObject801AFAF0 : UnknownGenObject801AFAF0_1 {
 char unknown0C[4];
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject801AFAF0(){unknown00=lbl_804B3810;}
};
extern "C" {
void *fn_801AF918(){
 if(!lbl_80564890) lbl_80564890=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564890;
}
void *fn_801AF954(){
 if(!lbl_80564890 || !(reinterpret_cast<unsigned int *>(lbl_80564890)[0x24/4]&4)) fn_801AFA00();
 return lbl_80564890;
}
void *fn_801AF990(){
 UnknownGenObject801AF990_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B9408;
 object.unknown00=lbl_804B93A4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801AFA00(){
 fn_80066188((int)fn_801AFA28);
}
void fn_801AFA28(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564890,(int)fn_8002907C,(int)fn_80024180,(int)fn_801AFA94,(int)lbl_804AC838,20,(int)fn_801AF990,0,0,(int)lbl_8056024C);
}
void *fn_801AFA94(){return fn_801AF954();}
void *fn_801AFAB4(){
 if(!lbl_80564894 || !(reinterpret_cast<unsigned int *>(lbl_80564894)[0x24/4]&4)) fn_801AFBE8();
 return lbl_80564894;
}
void *fn_801AFAF0(){
 UnknownGenObject801AFAF0 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804B9324;
 object.unknown00=lbl_804B3810;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801AFBE8(){
 fn_80066188((int)fn_801AFC10);
}
void fn_801AFC10(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564894,(int)fn_801CA518,(int)fn_801AFCA4,(int)fn_801AFC84,(int)lbl_804AC848,28,(int)fn_801AFAF0,(int)fn_801AFCAC,0,(int)lbl_80560254);
}
void *fn_801AFC84(){return fn_801AFAB4();}
void *fn_801AFCA4(){return lbl_80565444;}
}
#pragma pop
