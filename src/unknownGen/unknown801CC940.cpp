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
void fn_801CCBE0();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804B2790[];
extern char lbl_804B5CD8[];
extern char lbl_804B5D3C[];
extern char lbl_805609F8[8];
extern void *lbl_805621F4;
extern void *lbl_80565534;
extern void *lbl_80565538;
void *fn_801CC97C();
void *fn_801CC9B8();
void fn_801CCA28();
void fn_801CCA50();
void *fn_801CCABC();
}
struct UnknownGenObject801CC9B8_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_801CC940(){
 if(!lbl_80565534) lbl_80565534=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80565534;
}
void *fn_801CC97C(){
 if(!lbl_80565534 || !(reinterpret_cast<unsigned int *>(lbl_80565534)[0x24/4]&4)) fn_801CCA28();
 return lbl_80565534;
}
void *fn_801CC9B8(){
 UnknownGenObject801CC9B8_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B5D3C;
 object.unknown00=lbl_804B5CD8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801CCA28(){
 fn_80066188((int)fn_801CCA50);
}
void fn_801CCA50(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80565534,(int)fn_8002907C,(int)fn_80024180,(int)fn_801CCABC,(int)lbl_804B2790,20,(int)fn_801CC9B8,0,0,(int)lbl_805609F8);
}
void *fn_801CCABC(){return fn_801CC97C();}
void *fn_801CCADC(){
 if(!lbl_80565538 || !(reinterpret_cast<unsigned int *>(lbl_80565538)[0x24/4]&4)) fn_801CCBE0();
 return lbl_80565538;
}
}
#pragma pop
