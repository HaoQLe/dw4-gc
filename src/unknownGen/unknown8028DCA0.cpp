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
void fn_8028C93C();
void fn_8028E038();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804CCA94[];
extern char lbl_804CCAA8[];
extern char lbl_804CCAB8[];
extern char lbl_804CCCB0[];
extern char lbl_804CCD0C[];
extern char lbl_804CCD70[];
extern char lbl_805613B0[8];
extern void *lbl_805621F4;
extern void *lbl_80566158;
extern void *lbl_8056615C;
void *fn_8028DCDC();
void *fn_8028DD18();
void fn_8028DD88();
void fn_8028DDB0();
void *fn_8028DE1C();
void *fn_8028DE74();
void *fn_8028DEB0();
void fn_8028DF78();
void fn_8028DFA0();
void *fn_8028E018();
}
struct UnknownGenObject8028DD18_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot8028DEB0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8028DEB0(){fn_8006665C(this);}
};
struct UnknownGenObject8028DEB0 : UnknownGenRoot8028DEB0 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject8028DEB0(){unknown00=lbl_804CCCB0;}
};
extern "C" {
void *fn_8028DCA0(){
 if(!lbl_80566158) lbl_80566158=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80566158;
}
void *fn_8028DCDC(){
 if(!lbl_80566158 || !(reinterpret_cast<unsigned int *>(lbl_80566158)[0x24/4]&4)) fn_8028DD88();
 return lbl_80566158;
}
void *fn_8028DD18(){
 UnknownGenObject8028DD18_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804CCD70;
 object.unknown00=lbl_804CCD0C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8028DD88(){
 fn_80066188((int)fn_8028DDB0);
}
void fn_8028DDB0(){
 fn_8028C93C();
 fn_80066204(0,(int)&lbl_80566158,(int)fn_8002907C,(int)fn_80024180,(int)fn_8028DE1C,(int)lbl_804CCA94,20,(int)fn_8028DD18,0,0,(int)lbl_805613B0);
}
void *fn_8028DE1C(){return fn_8028DCDC();}
void *fn_8028DE3C(void *object){
 fn_8028DF78();
 return fn_8006546C(lbl_8056615C,object);
}
void *fn_8028DE74(){
 if(!lbl_8056615C || !(reinterpret_cast<unsigned int *>(lbl_8056615C)[0x24/4]&4)) fn_8028DF78();
 return lbl_8056615C;
}
void *fn_8028DEB0(){
 UnknownGenObject8028DEB0 object;
 object.unknown00=lbl_804CCCB0;
 object.unknown08.value=0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8028DF78(){
 fn_80066188((int)fn_8028DFA0);
}
void fn_8028DFA0(){
 fn_8028C93C();
 fn_80066204(0,(int)&lbl_8056615C,(int)fn_80066B08,(int)fn_800237D0,(int)fn_8028E018,(int)lbl_804CCAB8,32,(int)fn_8028DEB0,(int)fn_8028E038,0,(int)lbl_804CCAA8);
}
void *fn_8028E018(){return fn_8028DE74();}
}
#pragma pop
