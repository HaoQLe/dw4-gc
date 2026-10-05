#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023FDC();
void fn_80029694();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_801AA6DC();
void fn_801C8C20();
extern char lbl_80472FA0[];
extern char lbl_80476DA8[];
extern char lbl_80476E0C[];
extern char lbl_804B1974[];
extern char lbl_804B6948[];
extern char lbl_804B69AC[];
extern char lbl_80560868[8];
extern void *lbl_805621F4;
extern void *lbl_80565374;
extern void *lbl_80565378;
void *fn_801C8858();
void *fn_801C8894();
void fn_801C8904();
void fn_801C892C();
void *fn_801C8998();
}
struct UnknownGenObject801C8894 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_801C8858(){
 if(!lbl_80565374 || !(reinterpret_cast<unsigned int *>(lbl_80565374)[0x24/4]&4)) fn_801C8904();
 return lbl_80565374;
}
void *fn_801C8894(){
 UnknownGenObject801C8894 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476DA8;
 object.unknown00=lbl_804B69AC;
 object.unknown00=lbl_804B6948;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801C8904(){
 fn_80066188((int)fn_801C892C);
}
void fn_801C892C(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80565374,(int)fn_80029694,(int)fn_80023FDC,(int)fn_801C8998,(int)lbl_804B1974,20,(int)fn_801C8894,0,0,(int)lbl_80560868);
}
void *fn_801C8998(){return fn_801C8858();}
void *fn_801C89B8(void *object){
 fn_801C8C20();
 return fn_8006546C(lbl_80565378,object);
}
void *fn_801C89F0(){
 if(!lbl_80565378) lbl_80565378=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80565378;
}
void *fn_801C8A2C(){
 if(!lbl_80565378 || !(reinterpret_cast<unsigned int *>(lbl_80565378)[0x24/4]&4)) fn_801C8C20();
 return lbl_80565378;
}
}
#pragma pop
