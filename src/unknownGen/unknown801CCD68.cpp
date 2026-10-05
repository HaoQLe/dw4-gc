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
void fn_801CCFC8();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804B283C[];
extern char lbl_804B5BB4[];
extern char lbl_804B5C18[];
extern char lbl_80560A08[8];
extern void *lbl_805621F4;
extern void *lbl_80565548;
extern void *lbl_8056554C;
void *fn_801CCDA4();
void *fn_801CCDE0();
void fn_801CCE50();
void fn_801CCE78();
void *fn_801CCEE4();
}
struct UnknownGenObject801CCDE0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_801CCD68(){
 if(!lbl_80565548) lbl_80565548=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80565548;
}
void *fn_801CCDA4(){
 if(!lbl_80565548 || !(reinterpret_cast<unsigned int *>(lbl_80565548)[0x24/4]&4)) fn_801CCE50();
 return lbl_80565548;
}
void *fn_801CCDE0(){
 UnknownGenObject801CCDE0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B5C18;
 object.unknown00=lbl_804B5BB4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801CCE50(){
 fn_80066188((int)fn_801CCE78);
}
void fn_801CCE78(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80565548,(int)fn_8002907C,(int)fn_80024180,(int)fn_801CCEE4,(int)lbl_804B283C,20,(int)fn_801CCDE0,0,0,(int)lbl_80560A08);
}
void *fn_801CCEE4(){return fn_801CCDA4();}
void *fn_801CCF04(){
 if(!lbl_8056554C || !(reinterpret_cast<unsigned int *>(lbl_8056554C)[0x24/4]&4)) fn_801CCFC8();
 return lbl_8056554C;
}
}
#pragma pop
