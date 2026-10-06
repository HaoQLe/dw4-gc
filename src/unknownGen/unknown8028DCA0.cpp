#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8028C93C();
void fn_8028DF78();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804CCA94[];
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
}
struct UnknownGenObject8028DD18_0 {
 void *unknown00;
 char unknown04[20];
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
}
#pragma pop
